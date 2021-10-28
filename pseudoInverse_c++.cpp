#include<iostream>
#include<random>

void Transpose(double *t_matrix, double *matrix) {
	for (int i = 0; i<4; i++) {
		for (int j = 0; j<4; j++) {
			t_matrix[j * 4 + i] = matrix[i * 4 + j];
		}
	}
	return;
}


void getCofactor(double *A, double *temp, int p, int q, int n)
{
	int i = 0, j = 0;

	// Looping for each element of the matrix
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			// Copying into temporary matrix only those element
			// which are not in given row and column
			if (row != p && col != q)
			{
				//HERE NEEDED TO DEBUG THE CODE
				temp[i * 4 + j++] = A[row * 4 + col];

				// Row is filled, so increase row index and
				// reset col index
				if (j == n - 1)
				{
					j = 0;
					i++;
				}
			}
		}
	}
}

// Recursive function for finding determinant of matrix.
int determinant(double *A, int n)
{
	int D = 0; // Initialize result

			   // Base case : if matrix contains single element
	if (n == 1)
		return A[0];

	//here also needs to debug the code
	double *temp = new double[4 * 4]; // To store cofactors

	int sign = 1; // To store sign multiplier

				  // Iterate for each element of first row
	for (int f = 0; f < n; f++)
	{
		// Getting Cofactor of A[0][f]
		getCofactor(A, temp, 0, f, n);
		//Here also need to debug to code later
		//D += sign * A[0 * N + f] * determinant(temp, n - 1);
		D += sign * A[0 * 4 + f] * determinant(temp, n - 1);

		// terms are to be added with alternate sign
		sign = -sign;
	}

	return D;
}

// Function to get adjoint
void adjoint(double *A, double *adj)
{
	int N = 4;
	if (N == 1)
	{
		adj[0] = 1;
		return;
	}

	// temp is used to store cofactors 
	int sign = 1;
	double *temp = new double[N*N];

	for (int i = 0; i<N; i++)
	{
		for (int j = 0; j<N; j++)
		{
			// Get cofactor
			getCofactor(A, temp, i, j, N);

			// sign of adj positive if sum of row
			// and column indexes is even.
			sign = ((i + j) % 2 == 0) ? 1 : -1;

			// Interchanging rows and columns to get the
			// transpose of the cofactor matrix
			adj[j * N + i] = (sign)*(determinant(temp, N - 1));
		}
	}
}

bool inverse(double *inverse, double *A)
{
	// Find determinant of A[][]
	int N = 4;
	int det = determinant(A, N);
	if (det == 0)
	{
		return false;
	}

	// Find adjoint
	double *adj = new double[N*N];
	adjoint(A, adj);

	// Find Inverse using formula "inverse(A) = adj(A)/det(A)"
	for (int i = 0; i<N; i++)
		for (int j = 0; j<N; j++)
			inverse[i * N + j] = adj[i * N + j] / double(det);

	return true;
}



void MatrixMult(double *matrix_product, double *matrix_1, double *matrix_2, int r1, int c1, int r2, int c2) {
	for (int i = 0; i<r1; i++) {
		for (int j = 0; j<c2; j++) {             // not j<M
			matrix_product[i * c2 + j] = 0;
			for (int k = 0; k<c1; k++) {
				matrix_product[i * c2 + j] += matrix_1[i * c1 + k] * matrix_2[k * c2 + j];
			}
		}
	}
	return;

}

void PsuedoInverse(double *m, double *x, double *y, int row, int col) {
	//m = ((X^TX)^-1X^T) Y
	/*
	double *x_transpose = new double[1 * 20];
	double *x_transpose_x = new double[1 * 1];
	double *x_transpose_x_inv = new double[1 * 1];
	double *x_output_first = new double[1 * 20];
	Transpose(x_transpose, x);
	MatrixMult(x_transpose_x, x_transpose, x_transpose_x, 1, 20, 20, 1);
	inverse(x_transpose_x_inv, x_transpose_x);
	MatrixMult(x_output_first, x_transpose_x_inv, x_transpose, 1, 1, 1, 20);
	MatrixMult(m, x_output_first, y, 1, 20, 20, 1);
	*/
	double *x_transpose = new double[col * row];
	double *x_transpose_x = new double[col * col];
	double *x_transpose_x_inv = new double[col * col];
	double *x_output_first = new double[col * row];
	Transpose(x_transpose, x);
	MatrixMult(x_transpose_x, x_transpose, x_transpose_x, col , row, row, col);
	inverse(x_transpose_x_inv, x_transpose_x);
	MatrixMult(x_output_first, x_transpose_x_inv, x_transpose, col, col, col, row);
	MatrixMult(m, x_output_first, y, col, row, row, col);
}


int main() {
	int row = 20;
	int col = 1;
	double *x = new double[row * col];
	double *y = new double[row * col];

	for (int i = 0; i < row; i++) {
		x[i] = (double)rand() / RAND_MAX;
		y[i] = (double)rand() / RAND_MAX;
	}

	//printing 
	/*
	for (int j = 0; j < 20; j++) {
	std::cout << x[j] << " "<< y[j] << std::endl;
	}
	*/

	double *m = new double[col * col];
	PsuedoInverse(m, x, y, row, col);
	std::cout << "Here is the value" << std::endl;
	std::cout << m[0] << std::endl;
	std::cin.get();
	return 0;
}
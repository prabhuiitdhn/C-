/*
Operator:
*/

#include<iostream>
#include <D:/RoadModelPraveenSetup/eigen/Eigen/Dense>
#include<complex>

/*
void printArray(Eigen::Matrix4d arr, int size) {
for (int i = 0; i < 4; i++) {
for (int j = 0; j < 4; j++) {
//std::cout << arr[i * 4 + j] << " ";
std::cout << arr(i, j);
}
std::cout << std::endl;
}
}
*/


void CreateCompanionMatrix(int size, double t[]) {
	//t3 =0.2, t2 =0.3,t1= 0.4, t0 =0.5
	size = 4;
	int t_index = 0;
	Eigen::Matrix4d companionMatrix;
	//companion:zeros();
	companionMatrix = Eigen::Matrix4d::Zero();

	//double *companionMatrix = new double[size * size];
	//memset(companionMatrix, 0.0, (4, 4));
	/*
	for (int i = 0; i < 4; i++) {
	for (int j = 0; j < 3; j++) {
	if (i == j + 1) {
	companionMatrix[i * 4 + (j + 1)] = 1.0;
	}

	}
	companionMatrix[i * 4 + 3] = t[t_index];
	t_index++;
	}

	*/

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j + 1) {
				companionMatrix(i, j + 1) = 1.0;
			}

		}
		companionMatrix(i, 3) = t[t_index];
		t_index++;
	}
	/*
	(0,0)
	(1,0)
	(1,0)
	(0.4,0)
	*/


	std::cout << "The array is:" << std::endl;
	//printArray(companionMatrix, 4);
	Eigen::MatrixXcd eigenvalue;
	eigenvalue = companionMatrix.eigenvalues();
	std::cout << eigenvalue << std::endl;
	double t_prime = 0.0;
	for (int i = 0; i < 3; i++) {
		//if (real(eigenvalue(i + 1)) > 0.0 && real(eigenvalue(i + 1)) < 1.0 && imag(eigenvalue(i + 1) == 0.0))
		if (real(eigenvalue(i + 1)) > 0.0 && real(eigenvalue(i + 1)) < 1.0) {
			t_prime = real(eigenvalue(i + 1));
		}
	}

	return;
}

/*
int main() {
double t[4] = {0.1, 0.2, 0.3, 0.4 };
CreateCompanionMatrix(4, t);
std::cin.get();
return 0;
}
*/

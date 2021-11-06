#include<iostream>

int main() {
	double *array1 = new double[2 * 2];
	memset(array1, 0.0, sizeof(array1[0])* 2 * 2);

	double **array2 = new double*[2 * sizeof(double*)];
	for (int i = 0; i < 2; i++) {
		array2[i] = new double[4 * 2];
		memset(array2[i], 0.0, sizeof(array2[i][0])* 4 * 2);
	}

	std::cout << "Printng array!\n";
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			std::cout<<array1[i * 2 + j]<<" ";
		}
		std::cout << std::endl;
	}

	std::cout << "2DPrintng array!\n";
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			std::cout << array2[0][i * 2 + j] << " ";
		}
		std::cout << std::endl;
	}


	std::cin.get();
	return 0;
}
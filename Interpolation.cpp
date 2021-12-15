#include<iostream>
//http://www.cplusplus.com/forum/general/216928/
double Interpolate(double iVal, double inputMatrix[20][2], int row, int col)
{
	double *xdata = new double[20];
	double *ydata = new double[20];
	for (int i = 0; i < 20; i++) {
		xdata[i] = inputMatrix[i][0];
	}

	std::cout << "\nXdata.\n";
	for (auto i = 0; i < 20; i++) {
		std::cout << xdata[i] << " ";
	}

	for (int j = 0; j < 20; j++) {
		ydata[j] = inputMatrix[j][1];
	}

	std::cout << "\nydata.\n";
	for (auto i = 0; i < 20; i++) {
		std::cout << ydata[i] << " ";
	}

	int i = 0;
	if (iVal >= xdata[18]) {
		i = 18;
	}
	else {
		while (iVal > xdata[i + 1]) {
			i++;
		}

	}

	double xL = xdata[i];
	double xR = xdata[i + 1];
	double yL = ydata[i];
	double yR = ydata[i + 1];

	double gradient = double((yR - yL) / (xR - xL));
	return (double)(yL + gradient * (iVal - xL));
}

int main() {
	double inputMatrix[20][2] =
			{ 
				{0, 0},
				{0.05, 13},
				{0.10, 26},
				{0.15, 39},
				{0.21},{52},
				{0.31},{65},
				{0.42, 92},
				{0.47, 105},
				{0.52, 118},
				{0.57, 131},
				{0.63, 144},
				{0.68, 153},
				{0.73, 171},
				{0.78, 184},
				{0.84, 191},
				{0.89, 210},
				{0.94, 236},
				{1.0, 250}
			};
	double input = 0.0001;
	double output = Interpolate(input, inputMatrix, 20, 2);
	std::cout << output;
	std::cin.get();
	return 0;
		
}
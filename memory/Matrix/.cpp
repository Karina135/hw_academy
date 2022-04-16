#include <iostream>
#include <cstdlib>
using namespace std;

int** createMatrix(int rows, int cols) {
	int** matrix = new int* [rows];
	matrix[0] = new int[rows * cols]{};
	for (int i = 1; i < rows; i++) {
		matrix[i] = matrix[i - 1] + cols;
	}
	return matrix;
}

void fill(int* matrix[], int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = rand() % 10;
		}
	}
}

void print(int* matrix[], int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			cout << matrix[i][j] << ' ';
		}
		cout << '\n';
	}
}

void destroyMatrix(int* matrix[], int rows) {
	delete[] matrix[0];
	delete[] matrix;
}

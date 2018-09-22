#include "stdafx.h";

#include "Matrix.h";

#include "string";
#include "iostream";

using namespace std;

Matrix::Matrix(string* array, int size)
{
	this->matrix = array;
	this->size = size;
}

void Matrix::WriteToConsole()
{
	for (int i = 0; i < this->size; i++) {
		string line = this->matrix[i];

		for (int j = 0; j < line.length(); j++) {
			cout << line[j] << " ";
		}

		cout << endl;
	}
}

Matrix::~Matrix()
{
	for (int i = 0; i < this->size; i++) {
		this->matrix[i].clear();
	}

	delete[] this->matrix;
}

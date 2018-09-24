#include "stdafx.h";

#include "Matrix.h";

#include "string";
#include "iostream";

using namespace std;

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
#pragma once

#include "string";

using namespace std;

class Matrix
{
	private: 
		string* matrix;
		int size;

	public:
		Matrix(string* array, int size) {

			this->matrix = array;
			this->size = size;
		}

		~Matrix() {
			for (int i = 0; i < this->size; i++) {
				this->matrix[i].clear();
			}

			delete[] this->matrix;
		}

		void WriteToConsole();
};


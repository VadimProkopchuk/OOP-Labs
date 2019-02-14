#pragma once

#include "string";

using namespace std;

namespace L3 {
	template <class T> class Matrix
	{
	private:
		T** matrix;
		int m;
		int n;

	public:
		Matrix(T** array, int m, int n) : matrix(array), m(m), n(n) { }

		~Matrix() {
			for (int i = 0; i < m; i++)
				delete[] this->matrix[i];
			delete[] this->matrix;
		}

		void WriteToConsole();
	};
}
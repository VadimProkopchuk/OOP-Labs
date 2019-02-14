#include "stdafx.h";

#include "Matrix.h";

#include "string";
#include "iostream";

using namespace std;

namespace L3 {
	template<class T> 
	void Matrix<T>::WriteToConsole() {
		for (int i = 0; i < this->m; i++) {
			for (int j = 0; j < this->n; j++) {
				cout << string(1, this->matrix[i][j]) << " ";
			}

			cout << endl;
		}
	}
}
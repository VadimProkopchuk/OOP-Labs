#include "stdafx.h"
#include "iostream";
#include "MatrixL8.h"

template<class T> 
void MatrixL8<T>::WriteToConsole() {
	for (int i = 0; i < this->m; i++) {
		for (int j = 0; j < this->n; j++) {
			std::cout << std::string(1, this->matrix[i][j]) << " ";
		}

		std::cout << std::endl;
	}
}

template<class T>
void MatrixL8<T>::ReleaseMatrix()
{
	for (int i = 0; i < m; i++)
		delete[] this->matrix[i];

	delete[] this->matrix;
}

template<class T>
MatrixL8<T>::MatrixL8(const MatrixL8 & obj)
{
	if (this->matrix != nullptr) {
		this->ReleaseMatrix();
	}

	this->m = obj.m;
	this->n = obj.n;
	this->matrix = new T*[this->m];

	for (int i = 0; i < this->m; i++) {
		this->matrix[i] = new T[this->n];
		for (int j = 0; j < this->n; j++) {
			this->matrix[i][j] = obj.matrix[i][j];
		}
	}
}

template<class T>
void MatrixL8<T>::ReplaceAll(T val)
{
	for (int i = 0; i < this->m; i++) {
		for (int j = 0; j < this->n; j++) {
			this->matrix[i][j] = val;
		}
	}
}

template<class T>
inline MatrixL8<T>::~MatrixL8() {
	this->ReleaseMatrix();
	std::cout << "Matrix release" << std::endl;
}
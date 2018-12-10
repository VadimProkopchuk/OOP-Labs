#pragma once

template <class T> class MatrixL8
{
	private:
		T** matrix;
		int m;
		int n;
		void ReleaseMatrix();

	public:
		MatrixL8(T** array, int m, int n) : matrix(array), m(m), n(n) { }
		MatrixL8(const MatrixL8& obj);
		void ReplaceAll(T val);
		~MatrixL8();
		void WriteToConsole();
};
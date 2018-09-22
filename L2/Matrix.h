#pragma once

#include "string";

using namespace std;

class Matrix
{
	private: 
		string* matrix;
		int size;

	public:
		Matrix(string*, int);
		void WriteToConsole();
		~Matrix();
};


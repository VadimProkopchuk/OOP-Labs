#include "stdafx.h"

#include "CustomString.h";
#include "Matrix.h";
#include "Matrix.cpp";

#include <iostream>

using namespace std;
using namespace L3;

int main()
{
	setlocale(LC_ALL, "Russian");

	CustomString* firstStr = new CustomString();
	CustomString* secondStr = new CustomString();

	firstStr->ReadFromKeyboard();
	secondStr->ReadFromKeyboard();

	Matrix<char>* matrix = (*firstStr)*secondStr;

	matrix->WriteToConsole();

	delete firstStr;
	delete secondStr;
	delete matrix;

	system("pause");

	return 0;
}
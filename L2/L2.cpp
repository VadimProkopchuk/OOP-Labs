#include "stdafx.h"

#include "CustomString.h";
#include "Matrix.h";

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	CustomString* firstStr = new CustomString();
	CustomString* secondStr = new CustomString();

	firstStr->ReadFromKeyboard();
	secondStr->ReadFromKeyboard();

	Matrix* matrix = firstStr->GetMatrix(secondStr);

	matrix->WriteToConsole();

	delete firstStr;
	delete secondStr;
	delete matrix;

	system("pause");

	return 0;
}
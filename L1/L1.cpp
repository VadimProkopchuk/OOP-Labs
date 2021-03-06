#include "stdafx.h"

#include <string>
#include <iostream>
#include <iomanip>
#include <math.h>  

using namespace std;

string** ReadMatrixFromKeyboard(int numberOfMatrix, int* n, int* m);
int ReadSizeOfMatrixFromKeyboard(int numberOfMatrix);
string** ReadMatrixFromKeyboardInner(int n, int m);
string ReadMatrixValueFromKeyboard();
void WriteErrorToConsole();
void WriteMaxtrix(string** matrix, int n, int m, int numberOfMatrix);
void FreeUpMemory(string** matrix, int n);
void ConcatMatrixAndCopyToFirst(string** firstMatrix, string** secondMatrix, int n, int m);
string** ConcatMatrixAndReturn(string** firstMatrix, string** secondMatrix, int n, int m);

void main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int firstMatrixN = 0;
	int firstMatrixM = 0;
	int secondMatrixN = 0;
	int secondMatrixM = 0;

	string** firstMatrix = ReadMatrixFromKeyboard(1, &firstMatrixN, &firstMatrixM);
	string** secondMatrix = ReadMatrixFromKeyboard(2, &secondMatrixN, &secondMatrixM);

	cout << "Исходные данные: " << endl;
	WriteMaxtrix(firstMatrix, firstMatrixN, firstMatrixM, 1);
	WriteMaxtrix(secondMatrix, secondMatrixN, secondMatrixM, 2);

	if (firstMatrixN == secondMatrixN && firstMatrixM == secondMatrixM) {
		cout << "Результат: " << endl;
		
		string** thirdMatrix = ConcatMatrixAndReturn(firstMatrix, secondMatrix, firstMatrixN, firstMatrixM);
		
		WriteMaxtrix(thirdMatrix, firstMatrixN, firstMatrixM, 3);
		ConcatMatrixAndCopyToFirst(firstMatrix, secondMatrix, firstMatrixN, firstMatrixM);
		WriteMaxtrix(firstMatrix, firstMatrixN, firstMatrixM, 1);
	}
	else {
		cout << "Сложение невозможно." << endl;
	}

	FreeUpMemory(firstMatrix, firstMatrixN);
	FreeUpMemory(secondMatrix, secondMatrixN);
	
	system("pause");
}

string** ReadMatrixFromKeyboard(int numberOfMatrix, int* n, int* m) {
	*n = ReadSizeOfMatrixFromKeyboard(numberOfMatrix);
	*m = ReadSizeOfMatrixFromKeyboard(numberOfMatrix);

	return ReadMatrixFromKeyboardInner(*n, *m);
}

int ReadSizeOfMatrixFromKeyboard(int numberOfMatrix) {
	int size;

	cout << "Введите размерность матрицы " << numberOfMatrix << ":";
	while ((!(cin >> size)) || (cin.peek() != '\n') || (size <= 0)) {
		WriteErrorToConsole();
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	return size;
}

string** ReadMatrixFromKeyboardInner(int n, int m) {
	string** matrix = new string*[n];

	for (int i = 0; i < n; i++) {
		matrix[i] = new string[m];
		for (int j = 0; j < m; j++) {
			matrix[i][j] = ReadMatrixValueFromKeyboard();
		}
	}

	return matrix;
}

string ReadMatrixValueFromKeyboard() {
	string value;

	while ((!(cin >> value)) || (cin.peek() != '\n')) {
		WriteErrorToConsole();
		cin.clear();
		while (cin.get() != '\n');
	}

	return value;
}

void WriteErrorToConsole() {
	cout << endl << "Ошибка. Введено не корректное значение." << endl;
}

void WriteMaxtrix(string** matrix, int n, int m, int numberOfMatrix) {
	cout << "Матрица " << numberOfMatrix << endl;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(5) << matrix[i][j];
		}
		cout << endl;
	}

	cout << endl;
}

void FreeUpMemory(string** matrix, int n) {
	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}

	delete[] matrix;
}

void ConcatMatrixAndCopyToFirst(string** firstMatrix, string** secondMatrix, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			firstMatrix[i][j].append(secondMatrix[i][j]);
		}
	}
}

string** ConcatMatrixAndReturn(string** firstMatrix, string** secondMatrix, int n, int m) {
	string** result = new string*[n];
	
	for (int i = 0; i < n; i++) {
		result[i] = new string[m];
		for (int j = 0; j < m; j++) {
			string concatRes = firstMatrix[i][j];
			
			result[i][j] = concatRes.append(secondMatrix[i][j]);
		}
	}

	return result;
}
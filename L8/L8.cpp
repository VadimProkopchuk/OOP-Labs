#include "stdafx.h"

#include "CustomStringL8.h";
#include "MatrixL8.h";
#include "MatrixL8.cpp";
#include "TransactionWrapper.h";
#include "TransactionWrapper.cpp";

#include <iostream>
#include <memory>

void ReadLinesAndWriteMatrix() {
	std::auto_ptr<CustomStringL8> firstStrPtr(new CustomStringL8());
	std::auto_ptr<CustomStringL8> secondStrPtr(new CustomStringL8());

	firstStrPtr->ReadFromKeyboard();
	secondStrPtr->ReadFromKeyboard();

	std::auto_ptr<MatrixL8<char>> matrix(*firstStrPtr.get()*secondStrPtr.get());

	matrix->WriteToConsole();

	std::auto_ptr<TransactionWrapper<MatrixL8<char>>> transaction(new TransactionWrapper<MatrixL8<char>>());
	MatrixL8<char>* scope = transaction.get()->BeginTransaction(*matrix.get());
	try {
		scope->ReplaceAll('a');
		matrix.reset(transaction->Commit());
		matrix->WriteToConsole();
	}
	catch(const std::exception& e) {
		matrix.reset(transaction->Rollback());
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");

	ReadLinesAndWriteMatrix();
	system("pause");

	return 0;
}
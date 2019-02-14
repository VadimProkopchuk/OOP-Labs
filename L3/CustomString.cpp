#include "stdafx.h";

#include "CustomString.h";
#include "Matrix.h";

#include "iostream";

using namespace std;

namespace L3 {
	char** CustomString::GetArray(string str1, string str2)
	{
		int countOfLines = str2.length() + 1;
		char** res = new char*[countOfLines];

		res[0] = new char[str1.length()];

		for (int i = 0; i < str1.length(); i++) {
			res[0][i] = str1.c_str()[i];
		}

		for (int i = 1; i < countOfLines; i++) {
			res[i] = new char[str1.length()];
			for (int j = 0; j < str1.length(); j++) {
				res[i][j] = j == 0 ? str2[i - 1] : (str2[i - 1] + str1[j] - str1[0]) % 256;
			}
		}

		return res;
	}

	void CustomString::ReadFromKeyboard()
	{
		cout << "Введите строку: ";
		while ((!(cin >> this->str)) || (cin.peek() != '\n') || (this->str.length() < 2)) {
			cout << "В строке недостаточно символов.";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}

	string CustomString::GetStr()
	{
		return this->str;
	}

	Matrix<char>* CustomString::operator *(CustomString* str) {
		string _secondStr = str->GetStr();

		return new Matrix<char>(CustomString::GetArray(this->GetStr(), _secondStr), 
			_secondStr.length() + 1, this->GetStr().length());
	}
}
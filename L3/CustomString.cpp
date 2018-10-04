#include "stdafx.h";

#include "CustomString.h";
#include "Matrix.h";

#include "iostream";

using namespace std;

namespace L3 {
	string* CustomString::GetArray(string str1, string str2)
	{
		int countOfLines = str2.length() + 1;
		string* res = new string[countOfLines];
		char* line = new char[str1.length()];

		res[0] = str1;

		for (int i = 1; i < countOfLines; i++) {
			for (int j = 0; j < str1.length(); j++) {
				line[j] = j == 0 ? str2[i - 1] : (str2[i - 1] + str1[j] - str1[0]) % 256;
			}

			res[i] = string(line, str1.length());
		}

		delete line;

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

	Matrix* CustomString::operator *(CustomString* str) {
		string _secondStr = str->GetStr();

		return new Matrix(CustomString::GetArray(this->GetStr(), _secondStr), _secondStr.length() + 1);
	}
}
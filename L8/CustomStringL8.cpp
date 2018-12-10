#include "stdafx.h"
#include "iostream";

char** CustomStringL8::GetArray(std::string str1, std::string str2)
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

CustomStringL8::~CustomStringL8()
{
	this->_str.clear();
	std::cout << "Custom String release." << std::endl;
}

void CustomStringL8::ReadFromKeyboard()
{
	std::cout << "Введите строку: ";
	while ((!(std::cin >> this->_str)) || (std::cin.peek() != '\n') || (this->_str.length() < 2)) {
		std::cout << "В строке недостаточно символов.";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

MatrixL8<char>* CustomStringL8::operator*(CustomStringL8 * str)
{
	std::string _secondStr = str->_str;
	char** buffer = CustomStringL8::GetArray(this->_str, _secondStr);


	return new MatrixL8<char>(buffer, _secondStr.length() + 1, this->_str.length());
}
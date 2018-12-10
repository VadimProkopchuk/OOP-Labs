#pragma once

class CustomStringL8
{
	private:
		std::string _str;
		static char** GetArray(std::string, std::string);

	public:
		CustomStringL8() {}
		~CustomStringL8();
		void ReadFromKeyboard();
		MatrixL8<char>* operator*(CustomStringL8*);
};
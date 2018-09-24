#pragma once
#include "string";
#include "Matrix.h";

using namespace std;

class CustomString
{
	private:
		string str;
		static string* GetArray(string, string);

	public:
		CustomString() {}
		~CustomString() { this->str.clear(); }

		void ReadFromKeyboard();
		string GetStr();
		Matrix* GetMatrix(CustomString*);
		static Matrix* GetMatrix(CustomString*, CustomString*);
};


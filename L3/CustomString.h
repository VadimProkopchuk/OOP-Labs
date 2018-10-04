#pragma once
#include "string";
#include "Matrix.h";

using namespace std;

namespace L3 {
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
		Matrix* operator*(CustomString*);
	};
}
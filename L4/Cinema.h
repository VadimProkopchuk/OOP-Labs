#pragma once

#include <string>

using namespace std;

class Cinema
{
	private:
		string address;
		string name;

	public:
		Cinema(string address, string name) {
			this->address = address;
			this->name = name;
		}

		void write();

		~Cinema() {
			this->address.clear();
			this->name.clear();
		}
};
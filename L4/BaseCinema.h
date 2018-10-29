#pragma once

#include <string>

class BaseCinema
{
	protected:
		std::string address;
		std::string name;

	public:
		BaseCinema(const std::string& address, const std::string& name) : address(address), name(name) { }
		void virtual write() = 0;
		~BaseCinema() {}
};
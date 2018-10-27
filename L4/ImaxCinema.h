#pragma once

#include <string>
#include "Cinema.h"

class ImaxCinema : public Cinema
{
	private:
		int sizeX;
		int sizeY;

	public:
		ImaxCinema(const std::string& address, const std::string& name, int sizeX, int sizeY)
			: Cinema(address, name, Imax), sizeX(sizeX), sizeY(sizeY) { }
		void write();
		~ImaxCinema() {}
};
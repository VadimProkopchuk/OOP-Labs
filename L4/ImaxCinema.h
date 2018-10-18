#pragma once

#include <string>
#include "Cinema.h"

using namespace std;

class ImaxCinema : Cinema
{
private:
	int sizeX;
	int sizeY;

public:
	ImaxCinema(string address, string name, int sizeX, int sizeY) : Cinema(address, name) {
		this->sizeX = sizeX;
		this->sizeY = sizeY;
	}

	void write();
	~ImaxCinema() {}
};
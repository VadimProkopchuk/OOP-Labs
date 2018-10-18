#pragma once
#include "Cinema.h"
class DriveInCinema : Cinema
{
private:
	int maxCars;
	double radioFrequency;

public:
	DriveInCinema(string address, string name, int maxCars, double rf) : Cinema(address, name) {
		this->maxCars = maxCars;
		this->radioFrequency = rf;
	}

	void write();

	~DriveInCinema(){}
};
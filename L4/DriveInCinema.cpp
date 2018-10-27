#include "stdafx.h"
#include <iostream>

void DriveInCinema::write()
{
	std::cout << std::endl;
	Cinema::write();
	std::cout << "Max Cars: " << this->maxCars << std::endl;
	std::cout << "Radio Frequency: " << this->radioFrequency << std::endl;
	std::cout << std::endl;
}
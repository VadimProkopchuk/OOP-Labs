#include "stdafx.h"
#include "Cinema.h"
#include "DriveInCinema.h"
#include <iostream>

void DriveInCinema::write()
{
	cout << endl;
	Cinema::write();
	cout << "Max Cars: " << this->maxCars << endl;
	cout << "Radio Frequency" << this->radioFrequency << endl;
	cout << endl;
}
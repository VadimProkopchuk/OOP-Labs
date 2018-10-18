#include "stdafx.h"
#include "ImaxCinema.h"
#include <iostream>

void ImaxCinema::write()
{
	cout << endl;
	Cinema::write();
	cout << "Screen Size: " << this->sizeX << "x" << this->sizeY << endl;
	cout << endl;
}
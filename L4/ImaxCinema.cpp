#include "stdafx.h"
#include <iostream>

void ImaxCinema::write()
{
	std::cout << std::endl;
	Cinema::write();
	std::cout << "Screen Size: " << this->sizeX << "x" << this->sizeY << std::endl;
	std::cout << std::endl;
}
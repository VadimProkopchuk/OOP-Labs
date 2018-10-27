#include "stdafx.h"
#include <iostream>

void Cinema3D::write()
{
	std::cout << std::endl;
	Cinema::write();
	std::cout << "Volume Type: " << this->volumeType << std::endl;
	std::cout << "Count of 3D films: " << this->countOf3DFilms << std::endl;
	std::cout << std::endl;
}
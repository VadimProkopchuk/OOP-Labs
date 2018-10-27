#include "stdafx.h"
#include <iostream>

std::ostream& operator<<(std::ostream& stream, Cinema::Type type)
{
	switch (type)
	{
	case Cinema::None:
		stream << "N/A";
		break;

	case Cinema::ThreeD:
		stream << "3D";
		break;

	case Cinema::DriveIn:
		stream << "Drive-In";
		break;

	case Cinema::Imax:
		stream << "IMAX";
		break;

	default: stream.setstate(std::ios_base::failbit);
	}

	return stream;
}

void Cinema::write()
{
	std::cout << "Type: " << this->type << std::endl;
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Address: " << this->address << std::endl;
}
#include "stdafx.h"
#include <iostream>
#include "Cinema3D.h"
#include "Cinema.h"

void Cinema3D::write()
{
	cout << endl;
	Cinema::write();
	cout << "Volume Type: " << this->volumeType << endl;
	cout << "Count of 3D films: " << this->countOf3DFilms << endl;
	cout << endl;
}
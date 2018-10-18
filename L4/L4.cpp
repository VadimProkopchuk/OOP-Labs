#include "stdafx.h"
#include "Cinema.h"
#include "Cinema3D.h"
#include "DriveInCinema.h"
#include "ImaxCinema.h"

int main()
{
	ImaxCinema* imax = new ImaxCinema("Victory square 15/6", "Imax 1", 150, 150);
	Cinema3D* threeD = new Cinema3D("Victory square 16/1", "3D-Cinema", "Spectrum", 14);
	DriveInCinema* driveIn = new DriveInCinema("Victory square 17/89", "Drive-In", 15, 102.3);

	imax->write();
	threeD->write();
	driveIn->write();

	delete imax;
	delete threeD;
	delete driveIn;

	system("pause");
    return 0;
}
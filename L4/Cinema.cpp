#include "stdafx.h"
#include "Cinema.h"
#include <iostream>
#include <string>

using namespace std;

void Cinema::write()
{
	cout << "Name: " << this->name << endl;
	cout << "Address: " << this->address << endl;
}
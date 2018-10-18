#pragma once
#include "Cinema.h"

using namespace std;

class Cinema3D : Cinema
{
private:
	string volumeType;
	int countOf3DFilms;

public:
	Cinema3D(string address, string name, string voluemType, int countOf3DFilms) 
		: Cinema(address, name) {
		this->volumeType = voluemType;
		this->countOf3DFilms = countOf3DFilms;
	}

	void write();

	~Cinema3D(){}
};
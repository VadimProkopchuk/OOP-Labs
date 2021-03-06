#include "stdafx.h"

#include <iostream>
#include <string>
#include <list>


int readIntFromKeyboard(int min, const std::string& msg)
{
	int value;

	std::cout << msg << std::endl;

	while ((!(std::cin >> value)) || (std::cin.peek() != '\n') || (value < min)) {
		std::cout << "Ошибка ввода" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	std::cout << std::endl;

	return value;
}

std::string readStringFromKeyboard(const std::string& msg) {
	std::string value;

	std::cout << msg << std::endl;

	while ((!(std::cin >> value)) || (std::cin.peek() != '\n')) {
		std::cout << "Ошибка ввода" << std::endl;
		std::cin.clear();
		while (std::cin.get() != '\n');
	}

	std::cout << std::endl;

	return value;
}

Cinema *  readImaxCinemaFromKeyboard() {
	auto address = readStringFromKeyboard("Enter address:");
	auto name = readStringFromKeyboard("Enter name:");
	auto x = readIntFromKeyboard(0, "Enter height screen:");
	auto y = readIntFromKeyboard(0, "Enter width screen:");

	return new ImaxCinema(address, name, x, y);
}

int main()
{
	auto cinemas = new std::list<Cinema*>();

	//cinemas->push_back(new ImaxCinema("Victory square 15/6", "Imax 1", 150, 150));
	cinemas->push_back(readImaxCinemaFromKeyboard());
	cinemas->push_back(new Cinema3D("Victory square 16/1", "3D-Cinema", "Spectrum", 14));
	cinemas->push_back(new DriveInCinema("Victory square 17/89", "Drive-In", 15, 102.3));

	for (auto cinema : *cinemas)
	{
		cinema->write();
		delete cinema;
	}

	cinemas->clear();
	delete cinemas;
	
	system("pause");
    return 0;
}
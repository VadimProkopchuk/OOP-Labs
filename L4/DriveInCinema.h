#pragma once

class DriveInCinema : public Cinema
{
	private:
		int maxCars;
		double radioFrequency;

	public:
		DriveInCinema(const std::string& address, const std::string& name, int maxCars, double rf)
			: Cinema(address, name, DriveIn), maxCars(maxCars), radioFrequency(rf) { }
		void write();
		~DriveInCinema(){}
};
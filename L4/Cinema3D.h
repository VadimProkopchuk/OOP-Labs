#pragma once

class Cinema3D : public Cinema
{
	private:
		std::string volumeType;
		int countOf3DFilms;

	public:
		Cinema3D(const std::string& address, const std::string& name, const std::string& volumeType, int countOf3DFilms) 
			: Cinema(address, name, ThreeD), volumeType(volumeType), countOf3DFilms(countOf3DFilms) { }
		void write();
		~Cinema3D() {}
};
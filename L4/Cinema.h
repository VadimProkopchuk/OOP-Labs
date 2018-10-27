#pragma once

class Cinema : public BaseCinema
{
	public:
		enum Type {
			None,
			ThreeD,
			DriveIn,
			Imax
		};

	protected:
		Cinema::Type type = None;

	public:
		using BaseCinema::BaseCinema;

		Cinema(const std::string& address, const std::string& name, Cinema::Type type)
			: BaseCinema(address, name), type(type) {}

		virtual void write();
};
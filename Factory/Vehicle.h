#pragma once
#include <vector>
#include <string>

class Vehicle {

	private:

		std::string vehicle_type;
		int wheels;
		int doors;
		double velocity;

	public:

		Vehicle( const std::string & vehicle_type );

		const std::string & getVehicleType() const;

		double getVelocity() const;

};
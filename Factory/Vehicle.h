#pragma once
#include <vector>
#include <string>
#include <stdexcept>

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

// Function has a definition on the header, and an implementation on the CPP.
// IF you include Vehicle.h in a cpp file, and call one of the methos avaible, 
// so long as this methos is DEFINED it will compile.
//
// BUT since the IMPLEMENTATION is missing, YOU WILL GET an LINKER error.
//
// 2 POSSIBLE ERRORS. 
//  has no member named ‘getVehicleType’; --> function definition not present
//
//  undefined reference --> Function IMPLEMENTATION not present.
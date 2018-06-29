#pragma once
#include <vector>
#include <string>
#include <stdexcept>

class Vehicle {

	/** Can only be accessed to THIS class methods */
	private:

		std::string name;
		double velocity;

	/** Can be accesse by THIS class and its subclasses */
	protected:

		/** Vehicle can only be instatiated by its subclasses */
		Vehicle( const std::string & name, double velocity );

	/** Can be accessed from outside the class */
	public:

		const std::string & getName() const;

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
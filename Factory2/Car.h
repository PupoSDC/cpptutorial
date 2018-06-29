#pragma once
#include <vector>
#include <string>
#include <stdexcept>
#include "Vehicle.h"

/** Car is a subclass of vehicle. */
class Car : public Vehicle  {

	private:
		
		int number_of_doors;

	public:
		
		/** Sets the car name */
		Car( const std::string & name );

		/** Gets the numebr of doors */
		int getNumberOfDoors() const;
};
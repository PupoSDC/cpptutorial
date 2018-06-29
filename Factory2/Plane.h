#pragma once
#include <vector>
#include <string>
#include <stdexcept>
#include <iostream>
#include "Vehicle.h"

/** Car is a subclass of vehicle. */
class Plane : public Vehicle  {

	private:
		
		int number_of_wings;

	public:
		
		/** Sets the Plane name */
		Plane( const std::string & name );

		/** Gets the numebr of doors */
		int getNumberOfwings() const;

		double getVelocity() const;
};
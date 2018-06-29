#include "Car.h"

Car::Car( const std::string & name ) : Vehicle(name,120.0) {
	number_of_doors = 4;
}

int Car::getNumberOfDoors() const{
	return number_of_doors;
}
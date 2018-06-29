#include "Vehicle.h"

Vehicle::Vehicle( const std::string & name, double velocity ) {
	this->name     = name;
	this->velocity = velocity;
}

const std::string & Vehicle::getName() const {
	return name;
}

double Vehicle::getVelocity() const {
	return velocity;
}

#include "Plane.h"

Plane::Plane( const std::string & name ) : Vehicle(name,300.0) {
	number_of_wings = 2;
}

int Plane::getNumberOfwings() const {
	return number_of_wings;
}

double Plane::getVelocity() const {
	std::cout << "hello!" << std::endl;
	return Vehicle::getVelocity();
}
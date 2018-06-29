#include "Vehicle.h"


Vehicle::Vehicle( const std::string & input ) {
	vehicle_type = input;
	if( vehicle_type == "car" ){
		wheels   = 4;
		doors    = 5;
		velocity = 120.0;
		return;
	}
	if( vehicle_type == "truck" ){
		wheels   = 12;
		doors    = 2;
		velocity = 90.0;
		return;
	}
	if( vehicle_type == "bike" ){
		wheels   = 2;
		doors    = 0;
		velocity = 120.0;
		return;
	}
	throw std::runtime_error("Invalide vehicle_type!");
}

const std::string & Vehicle::getVehicleType() const {
	return name;
}

double Vehicle::getVelocity() const {
	return velocity;
}

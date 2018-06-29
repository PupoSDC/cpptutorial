#include "Vehicle.h"
#include <iostream>

void makeATrip( const Vehicle & vehicle, double distance ){
	double time = distance / vehicle.getVelocity();
	std::cout << "It took the " << vehicle.getVehicleType() 
			  << " " << time << " to get to the destination!"
			  << std::endl; 
}

int main(){
	
	std::cout << "Welcome to the factory! " << std::endl;
	return 0;
}

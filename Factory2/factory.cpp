#include "Vehicle.h"
#include "Car.h"
#include "Plane.h"
#include <iostream>


void makeATrip( const Vehicle & vehicle, double distance ){
	double time = distance / vehicle.getVelocity();
	std::cout << "It took " << vehicle.getName() 
			  << " " << time << " hours to get to the destination!"
			  << std::endl; 
}

int main(){
	
	std::cout << "Welcome to the factory! " << std::endl;
	
	Car   tommys_car("tommy's car");
	Plane tommys_plane("tommy's plane");
	
	makeATrip(tommys_car,200);
	makeATrip(tommys_plane,300);

	std::cout << "But wait!, the plane speed is " 
			  << tommys_plane.getVelocity() << "!" << std::endl;

	return 0;
}

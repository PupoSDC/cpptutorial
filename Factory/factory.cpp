#include "Vehicle.h"
#include <iostream>


void makeATrip( const Vehicle & vehicle, double distance ){
	double time = distance / vehicle.getVelocity();
	std::cout << "It took the " << vehicle.getVehicleType() 
			  << " " << time << " hours to get to the destination!"
			  << std::endl; 
}

int main(){
	
	Vehicle tommys_car("car");
	Vehicle pedros_bike("bike");
	Vehicle juans_donkey("truck");
	
	makeATrip(car,200);

	std::cout << "Welcome to the factory! " << std::endl;
	return 0;
}

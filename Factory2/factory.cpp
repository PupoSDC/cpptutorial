#include "Vehicle.h"
#include "Car.h"
#include <iostream>


void makeATrip( const Vehicle & vehicle, double distance ){
	double time = distance / vehicle.getVelocity();
	std::cout << "It took the " << vehicle.getName() 
			  << " " << time << " hours to get to the destination!"
			  << std::endl; 
}



int main(){
	
	std::cout << "Welcome to the factory! " << std::endl;
	
	Car tommys_car("tommy's car");
	Car pedros_bike("bike");
	Car juans_donkey("truck");
	
	makeATrip(tommys_car,200);


	return 0;
}

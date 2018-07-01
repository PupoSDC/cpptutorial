#include <iostream>
#include <string>
#include "Classes.h"

// Create Methods to make Cars, Trains, Cats and Dogs make noises. 
// TIP: Polymorphism! :D
//
// run with g++ solution.cpp -Dpart1


int main(){
	Dog   dog   = Dog();
	Cat   cat   = Cat();
	Car   car   = Car();
	Train train = Train();
	makeNoise( dog   );
	makeNoise( cat   );
	makeNoise( car   );
	makeNoise( train );
	return 0;
}
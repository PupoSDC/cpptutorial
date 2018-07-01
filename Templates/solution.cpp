#include <iostream>
#include <string>

// Create Methods to make Cars, Trains, Cats and Dogs make noises. 
// TIP: Polymorphism! :D
//
// run with g++ solution.cpp -Dpart1


#ifdef part1
	
	#include "Classes.h"

	void makeNoise( const Animal & animal ){
		std::cout << animal.makeNoise() << std::endl;
	}

	void makeNoise( const Vehicle & vehicle ){
		std::cout << vehicle.makeNoise() << std::endl;
	}

#endif

// Create ONE method for every object that has a "makeNoise()" method to make 
// noise
//
// run with g++ solution.cpp -Dpart2

#ifdef part2
	
	#include "Classes.h"

	template< typename Type >
	void makeNoise( const Type & type ){
		std::cout << type.makeNoise() << std::endl;	
	}

#endif


// Create a Template class for thigns that make noise INSTEAD of using 
// Polymorphism
//
// run with g++ solution.cpp -Dpart3


#ifdef part3
	
	std::string dog_sound   = "bark bark";
	std::string cat_sound   = "miao miao";    
	std::string car_sound   = "vroom vrooom"; 
	std::string train_sound = "Tchuuu Tchuuu";

	template< std::string *  Noise >
	class ThingThatMakesNoise {

		public:

			std::string makeNoise() const {
				return *Noise;
			}
	};

	typedef ThingThatMakesNoise< &dog_sound > Dog;
	typedef ThingThatMakesNoise< &cat_sound > Cat;
	typedef ThingThatMakesNoise< &car_sound > Car;
	typedef ThingThatMakesNoise< &train_sound > Train;

	template< typename Type >
	void makeNoise( const Type & type ){
		std::cout << type.makeNoise() << std::endl;	
	}

#endif

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
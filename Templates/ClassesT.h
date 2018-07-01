#pragma once
#include <string>

////////////////////////////////////////////////////////////////////////////////
// Everything that make noises /////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

template< std::string Noise >
class ThingThatMakesNoise {

	public:

		std::string makeNoise() const {
			return Noise;
		}
}

typedef ThingThatMakesNoise< "bark bark"     > Dog;
typedef ThingThatMakesNoise< "miao miao"     > Cat;
typedef ThingThatMakesNoise< "vroom vrooom"  > Car;
typedef ThingThatMakesNoise< "Tchuuu Tchuuu" > Truck;


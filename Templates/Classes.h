#pragma once
#include <string>

////////////////////////////////////////////////////////////////////////////////
// Animals that make noises ////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

class Animal {

	public:

		virtual std::string makeNoise() const = 0;
};

class Dog : public Animal {

	public:

		std::string makeNoise() const {
			return "bark bark";
		}
};

class Cat : public Animal {

	public:

		std::string makeNoise() const {
			return "miao miao";
		}
};

////////////////////////////////////////////////////////////////////////////////
// Vehicles that make noises ///////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////


class Vehicle {

	public:

		virtual std::string makeNoise() const = 0;
};

class Car : public Vehicle {

	public:

		std::string makeNoise() const {
			return "vroom vrooom";
		}
};

class Train : public Animal {

	public:

		std::string makeNoise() const {
			return "Tchuuu Tchuuu";
		}
};
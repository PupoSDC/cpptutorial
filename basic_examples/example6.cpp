#include <string>
#include <iostream>


/**
*
* Class vehicle describes the properties of a vehicle, and its methods.
*
* Encapsulation:
* The properties of a class should be exclusively accessed and modified through
* The methods of a class. The properties of a class should be private. 
* (Exceptions may apply)
*
*/
class Vehicle {

	/** methods/Properties that can only be accessed by the class             */
	private:

		// Variables start with small letters, and have "_" between words. tommy_car_type
		std::string vehicle_type;


	/** methods/Properties that can only be accessed from outside the class   */
	public:

		// Methods use camelCase.
		const std::string & getVehicleType() const {
			// vehicle_type = "truck"; NOT ALLOWED due to const at the end.
			return vehicle_type;
		}


		// getProperty(){ return property; }
		// setProperty( ){}

};



int main() {

	Vehicle car("car");

	// WRONG
	// car.getVehicleType() = "truck"; 
	// NOT allowed do to const in the beggining


	// Correct
	//car.getVehicleType() == "car";
	//car.setVehicleType("truck");
}




// BREAK DOWN of a !!method!! signature
// const std::string & getVehicleType() const 
//
// std::string   --> method will return a string.
// std::string & --> method will return a string by reference. IE, instead of 
//                   making a copy, the function will just pass the data it contains
//                   YOU NEED to add the "const" keyword at the beggining of the 
//                   return type, to garantee that the user will NOT alter this 
//                   property.
//
// RETURN TYPE: 
//   const std::string & 
//
//
// method name: getVehicleType (camelCase)
// method inputs: () --> nothing.
// const qualifier at the end: It garantees that this method will NOT alter the
// object properties.
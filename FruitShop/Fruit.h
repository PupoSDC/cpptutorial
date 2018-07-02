#pragma once
#include <vector>
#include <string>
#include <stdexcept>

/** Pure virtual Class 
* YOU ARE NOT ALLOWED TO INSTANTIATE THIS CLASS 
*
*
* function -> (input)=>ouput 
* methods  -> (input + this)=>(change)
*/
class Fruit {

	private:




	protected:

		Fruit(){ };

		// Pure functions. The ouput of this functions ONLY depends on the inputs.
		static double calculateCostPerWeight( double weight, double cost_per_kg);

		static double calculateCostPerUnit( int cost, double cost_per_unit);

	public:

		/** Calculates the cost of a fruit bag */
		virtual double getCost() const = 0;
};


// Static this method which is part of a class, is NOT dependent on a particualr
// instantiation of this class.
// A static method is a function that can be outside of the scope of a class, BUT
// for code organization purposes you declare inside the class.
//
// the "this" pointer does not exist in static functions.


// Header file should be around 100 lines max. Guideline more than a rule
// This should be 4 different files.
class Bananas : public Fruit {

	double weight;
	static double cost_per_kg;

	public:

		Bananas( double n_kilos );

		double getCost() const;
};

// Public and private is a CLASS-WIDE definition
class Apples : public Fruit {

	double weight;
	static double cost_per_kg;

	public:

		Apples( double n_kilos );

		double getCost() const;

};

class Pears : public Fruit {

	int units;
	static double cost_per_unit;

	public:

		Pears( int n_peers );

		double getCost() const;
};

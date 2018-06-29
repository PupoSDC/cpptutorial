#pragma once
#include <vector>
#include <string>
#include <stdexcept>

/** Pure virtual Class 
* YOU ARE NOT ALLOWED TO INSTANTIATE THIS CLASS 
*
*/
class Fruit {

	protected:

		Fruit(){ };

		static double calculateCostPerWeight( double weight, double cost_per_kg);

		static double calculateCostPerUnit( int cost, double cost_per_unit);

	public:

		/** Calculates the cost of a fruit bag */
		virtual double getCost() const = 0;
};

class Bananas : public Fruit {

	double weight;
	static double cost_per_kg;

	public:

		Bananas( double n_kilos );

		double getCost() const;
};

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


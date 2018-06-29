#include "Fruit.h"


double Fruit::calculateCostPerWeight( double weight, double cost){
	return weight * cost;
}

double Fruit::calculateCostPerUnit( int unit, double cost){
	return unit * cost;
}

double Bananas::cost_per_kg = 1.0;
double Apples::cost_per_kg  = 0.6;
double Pears::cost_per_unit = 0.15;


Bananas::Bananas( double n_kilos ){
	this->weight = n_kilos;
}

Apples::Apples( double n_kilos ){
	this->weight = n_kilos;
}

Pears::Pears( int n_peers){
	this->units = n_peers;
}


double Bananas::getCost() const {
	return calculateCostPerWeight( weight, cost_per_kg );
}
double Apples::getCost() const {
	return calculateCostPerWeight( weight, cost_per_kg );
}
double Pears::getCost() const {
	return calculateCostPerUnit( units, cost_per_unit );
}
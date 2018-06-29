#include "Fruit.h"
#include <iostream>


double calculateTotalPrice( const std::vector< Fruit * > fruits ){
	double response = 0.0;
	for( int i = 0; i < fruits.size(); i++ ){
		response += fruits[i]->getCost();
	}
	return response;
}


int main(){
	
	std::cout << "Welcome to the factory shop! " << std::endl;
	
	std::vector< Fruit * > fruits;
	fruits.push_back( new Bananas( 1.0 ) );
	fruits.push_back( new Apples(   2.0 ) );
	fruits.push_back( new Pears(   2   ) );

	std::cout 
		<< "The total cost of your fruits is "
		<< calculateTotalPrice( fruits )
		<< " euros!"
		<< std::endl;


	for( int i = 0; i < fruits.size(); i++ ){
		delete fruits[i];
	}

	return 0;
}

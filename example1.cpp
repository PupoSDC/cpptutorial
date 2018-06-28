#include <iostream>


int sum( int a, int b ){
	return a + b;
}

int sum( int * a, int * b ){
	return *a + *b;
}

int sum( int a, int b ){
	return a + b;
}


int main() {

	int   a = 124124; // Declaring a variable by Value
	int * b = &a      // Declaring a pointer to a variable
	int & c = a;      // Declaring a refernece to a variable


    std::cout << "Hello, World, I'm " << a << "!" << std::endl;
    return 0;
}
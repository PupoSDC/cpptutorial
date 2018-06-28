#include <iostream>

int main() {

	int   a = 124124; // Declaring a variable by Value
	int * b = &a      // Declaring a pointer to a variable
	int & c = a;      // Declaring a refernece to a variable

	c = b;
	//a  = 5;
	//*b = 7;

    std::cout << "Hello, World, I'm " << a << "!" << std::endl;
    return 0;
}
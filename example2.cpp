#include <iostream>
// compile with g++ example1.cpp -o example1.x

// Sum pass by value (oveladed)
int sum( int a, int b ){ 
	std::cout << "you did it!" << std::endl;
	return a + b;
}

// Sum pass by pointer (oveladed)
int sum( int * a, int * b ){
	return *a + *b;
}

// // Sum pass by reference
// int sum( int & a, int & b ){
// 	return a + b;
// }


int main() {

	int   a = 124124; // Declaring a variable by Value
	int * b = &a;     // Declaring a pointer to a variable
	int & c = a;      // Declaring a refernece to a variable


    std::cout << sum(&a, b) << std::endl;
    return 0;
}
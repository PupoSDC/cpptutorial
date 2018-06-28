#include <iostream>
// compile with g++ example2.cpp -o example2.x

// Sum pass by value (oveladed)
int * sum( int * lhs, int * rhs, int size ){
	int * response = new int[size];
	for( int i = 0; i < size; i++ ){
		response[i] = lhs[i] + rhs[i];
	}
	return response;
}

// Sum pass by reference
int sum( int & a, int & b ){
	return a + b;
}

void printArray( int * my_array, int size_of_the_array ){
	for( int i = 0; i < size_of_the_array; i++){
		std::cout << my_array[i] << std::endl;
	}	
}

int main() {

	int   a = 124124; // Declaring a variable by Value
	int * b = &a;     // Declaring a pointer to a variable
	int & c = a;      // Declaring a refernece to a variable

	int my_array[10]; // creating an array of size 10000 (bad idea warning)
	int * p_array = my_array;

	// Create example values
	my_array[0] = 125;
	my_array[1] = 155;

	// (p_array[x] ==> *(p_array+x)
	std::cout << *(p_array+0) << " is the same as " << p_array[0] << std::endl;
	std::cout << *(p_array+1) << " is the same as " << p_array[1] << std::endl;	

	int * new_array;
	
	while(true){
		new_array = sum( my_array, my_array, 10);
		delete new_array;
	}

	printArray( new_array, 10 );

    return 0;
}
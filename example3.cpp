#include <iostream>
#include <vector>
// compile with g++ example3.cpp -o example3.x

// constant correctness
std::vector< int > sum( 
	const std::vector< int > & lhs, 
	const std::vector< int > & rhs ){
	std::vector< int > response = std::vector< int >( lhs.size() );
	for( int i = 0; i < lhs.size(); i++ ){
		response[i] = lhs[i] + rhs[i];
	}
	return response;
}

void printVector( std::vector< int > vector ) {
	for( int i = 0; i < vector.size(); i++ ){
		std::cout << vector[i] << std::endl;
	}
}

int main() {

	// Templates, constructors ( in 3 hours, and 30 minutes)
	std::vector< int > array1 = std::vector< int >(10,1);
	std::vector< int > array2 = std::vector< int >(10,2);

	array1[4] = 125;
	array1[3] = 151;
	array1[7] = 125;


	std::vector< int > array3 = sum( array1, array2 );


	printVector( array1 );
}
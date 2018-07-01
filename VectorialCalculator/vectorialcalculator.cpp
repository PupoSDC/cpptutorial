#include <iostream>
#include "Vector.h"

typedef double Scalar;

// The goal is to design a calculator that can do operations between Scalars
// and Vectors. The following main should work:
int main(){

	Scalar s1 = Scalar(10.0);
	Vector v1 = Vector(1.0,2.0,3.0);

	Vector r1 = s1 * v1;
	Vector r2 = r1 * r1;

	std::cout << r1 << " == " << "10.0 20.0 30.0" << std::endl;
	std::cout << r2 << " == " << "1.0 4.0 9.0" << std::endl;

	return 0;
}
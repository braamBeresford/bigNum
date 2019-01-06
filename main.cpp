#include <iostream>
#include <vector>

#include "src/BigNum.hpp"
#include "src/constructors/constructors.hpp"
#include "src/operators/relational.hpp"
#include "src/operators/io_stream.hpp"
#include "src/operators/assignment.hpp"
#include "src/operators/arithmetic.hpp"

#include "math.h"
int main(){
	BigNum test = -5000;
	BigNum test2 = -10;

	std::cout << (test2 + test) << std::endl;
	return 0;
}
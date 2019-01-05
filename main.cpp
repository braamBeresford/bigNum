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
	BigNum test = 5000;
	BigNum test2 = 10;
	BigNum test3;
	test3 = test2 + test;



	// std::cout << " Test: " << test << " Test2: " << test2 << " Test3 " << test3 << " BOOL " << (test3 <1) << ' ' << (test3 >-1)<<std::endl;
	// for(auto x: *test3.data)
		std::cout<<test3<<std::endl;
	return 0;
}
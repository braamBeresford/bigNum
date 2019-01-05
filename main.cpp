#include <iostream>
#include <vector>

#include "src/BigNum.hpp"
#include "src/constructors/constructors.hpp"
#include "src/operators/relational.hpp"


#include "math.h"
int main(){
	BigNum test(324);	
	BigNum test2(101);
	BigNum test5(1111);
	BigNum test6(111);

	bool test3 = test<test2  ;
	std::cout << test3 << std::endl;
	bool test4 = test>test2;
	std::cout << "Test" << test4 << std::endl;
	std:: cout << (test5 >test6) << std::endl;

	// test.test();
	return 0;
}
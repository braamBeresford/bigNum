#include <iostream>
#include <vector>

#include "src/BigNum.hpp"
#include "src/constructors/constructors.hpp"
#include "src/operators/relational.hpp"


#include "math.h"
int main(){
	BigNum test("342");
	test.test();
	BigNum test2("-342");
	test2.test();
	return 0;
}
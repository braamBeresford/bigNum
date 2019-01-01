#ifndef BIG_NUM_CONSTRUCTORS_HPP
#define BIG_NUM_CONSTRUCTORS_HPP
#include "BigNum.hpp"
#include "math.h"

BigNum::BigNum(){
	data= new std::vector<uint_fast64_t>;
}

BigNum::BigNum(const long long& num){
	std::cout << "THIS HASN'T BEEN IMPLEMENTED!! \n";
	uint_fast64_t base = pow(2, 64);
	long long numTemp = num;
	data= new std::vector<uint_fast64_t>;
	while(numTemp >= 1){
		data->push_back(numTemp%base);
		numTemp = numTemp / base;
	}

	for (auto i = data->begin(); i != data->end(); ++i)
    	std::cout << *i << ' ';
}

#endif


// def convert(num1):
//     num=num1
//     arr = []
//     while(num >= 1):
//         arr.append(int(num%pow(2, 64)))
//         num /= pow(2, 64)
//         num = int(num)


//     return arr


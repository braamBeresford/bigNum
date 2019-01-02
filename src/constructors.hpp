#ifndef BIG_NUM_CONSTRUCTORS_HPP
#define BIG_NUM_CONSTRUCTORS_HPP
#include "BigNum.hpp"
#include "math.h"
#include <stdlib.h>

BigNum::BigNum(){
	data= new std::vector<uint_fast64_t>;
};

BigNum::BigNum(const long long& num){
	BigNum();
	data->push_back(num);
};

BigNum::BigNum(const std::string num){
	data= new std::vector<uint_fast64_t>;
	data->push_back(stoi(num));
}

// BigNum BigNum::operator+() const {
//     return *this;
// }

#endif

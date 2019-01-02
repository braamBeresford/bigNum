#ifndef BIG_NUM_CONSTRUCTORS_HPP
#define BIG_NUM_CONSTRUCTORS_HPP
#include "BigNum.hpp"
#include <stdlib.h>

BigNum::BigNum(){
	data= new std::vector<uint_fast64_t>;
};

BigNum::BigNum(const long long& num):BigNum(){
	data->push_back(num);
};

BigNum::BigNum(const std::string num):BigNum(){
	data->push_back(stoi(num));
}


#endif

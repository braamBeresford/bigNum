#ifndef BIG_NUM_HPP
#define BIG_NUM_HPP

#include <iostream>
#include <cstdint>

// #include "constructors.hpp"
class BigNum{
private:
	std::vector<uint_fast64_t> * data;
public:
	BigNum();
	// BigNum(const std::string&);
	// BigNum(const long long&);
	// auto Test(){
	// 	return data;
	// }

};

// BigNum::BigNum(){
// 	data= new std::vector<uint_fast64_t>;
// }
#endif
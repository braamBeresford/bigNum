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
	BigNum(const long long&);
	// BigNum(const std::string&);

};
#endif
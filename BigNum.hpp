#ifndef BIG_NUM_HPP
#define BIG_NUM_HPP

#include <iostream>
#include <cstdint>

#include "src/constructors.hpp"

// #include "constructors.hpp"
class BigNum{
private:
	std::vector<uint_fast64_t> * data;
public:
	BigNum();
	BigNum(const long long&):BigNum();
	BigInt(const std::string&):BigNum();
	// BigNum operator+() const;


};


#endif
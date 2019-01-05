#ifndef BIG_NUM_HPP
#define BIG_NUM_HPP

#include <iostream>
#include <cstdint>

class BigNum{
private:
	std::vector<short> * data;
public:
	BigNum();
	BigNum(long long);
	BigNum(const std::string);
	void test();

	BigNum operator+(const BigNum&)const;
	bool operator<(const BigNum&)const;
	bool operator>(const BigNum&)const;
};
#endif

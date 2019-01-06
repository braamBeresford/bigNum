#ifndef BIG_NUM_HPP
#define BIG_NUM_HPP
 
#include <iostream>
#include <cstdint>

class BigNum{


public:
	std::vector<short> data;
	short sign;
	BigNum();
	BigNum(const long long &);
	BigNum(const std::string);
	void test();

	BigNum operator+(const BigNum&)const;
	bool operator<(const BigNum&)const;
	bool operator>(const BigNum&)const;
	bool operator==(const BigNum&)const;
	bool operator>(const long long&) const;
	bool operator<(const long long&) const;

	//IOStream
	friend std::istream&operator>>(std::istream&, BigNum&);
	friend std::ostream&operator>>(std::ostream&, BigNum&);

	BigNum& operator=(const BigNum&);
	// BigNum& operator=(const long long &);
	// BigNum& operator=(const std::string&);




};
#endif

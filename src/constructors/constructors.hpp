#ifndef BIG_NUM_CONSTRUCTORS_HPP
#define BIG_NUM_CONSTRUCTORS_HPP
#include <stdio.h>

// #include "../BigNum.hpp"

#define BASE 4294967296

std::string RemoveAllWhiteSpace(const std::string& dirty){
	std::string clean = "";
	int j =0;
	for(auto c: dirty)
			clean += c;

	return clean;
}

BigNum::BigNum(){
	data= new std::vector<short>;
	sign = 1;
};

BigNum::BigNum(const long long &numOrg):BigNum(){
	long long num = numOrg;
	if(num == 0){
		data->push_back(0);
		return;
	}
	if(num<0)
		sign = -1;
	num = abs(num);
	while(num>=1){
		data->push_back(num%10);
		num /= 10;
	}
	
};

BigNum::BigNum(const std::string numStr)
:BigNum(stoi(RemoveAllWhiteSpace(numStr))){}

void BigNum::test(){
	for(int i = data->size()-1; i >=0 ; i--){
		std::cout << data->at(i);
	}
	putchar('\n');
};
#endif

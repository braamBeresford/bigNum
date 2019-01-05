#ifndef BIG_NUM_CONSTRUCTORS_HPP
#define BIG_NUM_CONSTRUCTORS_HPP
#include <stdlib.h>
// #include "../BigNum.hpp"

#define BASE 4294967296

BigNum::BigNum(){
	data= new std::vector<short>;
};

BigNum::BigNum(long long num):BigNum(){
	while(num>=1){
		data->push_back(num%10);
		num /= 10;
	}
};

BigNum::BigNum(const std::string num):BigNum(){
	data->push_back(stoi(num));
}

void BigNum::test(){
	for(int i = data->size()-1; i >=0 ; i--){
		std::cout << i << ' ' << data->at(i) << std::endl;
	}
}
#endif

#ifndef RELATIONAL_HPP
#define RELATIONAL_HPP
#include <iostream>
#include "../BigNum.hpp"

bool BigNum::operator<(const BigNum& num)const{
	if(data->size() != num.data->size())
		return data->size() < num.data->size();

	for(int i = data->size()-1; i >=0 ; i--){
		if(data->at(i) < num.data->at(i))
			return true;
	}
	return false;
}

bool BigNum::operator>(const BigNum& num)const{
	if(data->size() != num.data->size())
		return data->size() > num.data->size();

	for(int i = data->size()-1; i >=0 ; i--){
		if(data->at(i) > num.data->at(i))
			return true;
	}
	return false;
}

bool BigNum::operator==(const BigNum& num)const{
	if(data->size() != num.data->size())
		return false;
	for(int i = 0; i < data->size(); i++){
		if(data->at(i) != num.data->at(i))
			return false;
	}
	return true;
}

#endif
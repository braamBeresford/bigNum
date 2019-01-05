#ifndef ASSIGNEMENT_OPERATOR_HPP
#define ASSIGNEMENT_OPERATOR_HPP
#
BigNum& BigNum::operator=(const BigNum& num){
	data = num.data;
	sign = num.sign;

	return *this;
}

BigNum& BigNum::operator=(const long long & num){
	auto temp = new BigNum(num);
	return *temp;
}


BigNum& BigNum::operator=(const std::string& num) {
	auto temp = new BigNum(num);
    return *temp;
}

#endif
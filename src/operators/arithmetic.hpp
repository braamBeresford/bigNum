#ifndef ARITHMETIC_HPP
#define ARITHMETIC_HPP

BigNum BigNum::operator+(const BigNum& num) const {
	BigNum res;
	if(sign == num.sign){
		const BigNum biggest  = (*this)>num ? (*this) : num;
		const BigNum smallest  = (*this)<num ? (*this) : num;
		int temp = 0;
		bool carry = false;
		int i;
		for(i = 0; i < smallest.data.size(); i++){
			temp = biggest.data.at(i) + smallest.data.at(i);
			if(carry)
				temp+= 1;
			carry = temp >= 10;
			res.data.push_back(temp%10);
		}
		for(; i < biggest.data.size(); i++){
			temp = biggest.data.at(i);
			if(carry){
				temp++;
			}
			carry = temp >= 10;
			res.data.push_back(temp%10);
		}
		if((*this)< 0 && num <0)
			res.sign = -1;
		return res;
	}
	return res;
}

// BigNum BigNum::operator-(const BigNum& num) const{
// 	BigNum res = num;
// 	if(sing == num.sign){
// 		for (int i = 0, carry = 0; i < (int) v.a.size() || carry; ++i) {
// 			res.data[i] -= carry + (i < (int) v.a.size() ? num.a[i] : 0);
// 			carry = res.a[i] < 0;
// 			if (carry)
// 				res.a[i] += base;
// 		}
// 	}
// }


#endif

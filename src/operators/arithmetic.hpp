#ifndef ARITHMETIC_HPP
#define ARITHMETIC_HPP

BigNum BigNum::operator+(const BigNum& num) const {
	BigNum res;
	if((*this)> 0 && num >0){
		const BigNum biggest  = (*this)>num ? (*this) : num;
		const BigNum smallest  = (*this)<num ? (*this) : num;
		int temp = 0;
		bool carry = false;
		int i;
		for(i = 0; i < smallest.data->size(); i++){
			temp = biggest.data->at(i) + smallest.data->at(i);
			if(carry)
				temp+= 1;
			carry = temp >= 10;
			res.data->push_back(temp%10);
			for(auto x: (*res.data))
				std::cout << x << ' ';
			putchar('\n');
		}
		for(; i < biggest.data->size(); i++){
			temp = biggest.data->at(i);
			if(carry){
				temp++;
			}
			carry = temp >= 10;
			res.data->push_back(temp%10);
		}

		return res;
	}
	return res;

}

#endif

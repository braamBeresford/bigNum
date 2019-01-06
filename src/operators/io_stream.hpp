#ifndef IO_STREAM_HPP
#define IO_STREAM_HPP


/*
    BigInt to output stream
    -----------------------
*/

std::ostream& operator<<(std::ostream& out, const BigNum& num) {
    if(num.sign == -1)
    	out << '-';
    for(int i = num.data.size()-1; i >=0 ; i--)
    	out << num.data.at(i);

    return out;
}

std::istream& operator>>(std::istream& in, BigNum& num) {
    std::string input;
    in >> input;
    num = BigNum(input);
    return in;
}


#endif
CFLAGS = -O 
CC = g++ 

default: 
	$(CC) $(CFLAGS) -std=c++14 -o BigNum.out main.cpp

debug: 
	$(CC)  -std=c++14 -o BigNum main.cpp -g

run:
	$(CC) $(CFLAGS) -std=c++14 -o BigNum main.cpp && ./BigNum
clean: 
	rm -f core *.o 

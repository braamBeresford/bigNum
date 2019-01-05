CFLAGS = -O 
CC = g++ 

default: 
	$(CC) $(CFLAGS) -std=c++14 -o BigNum.out main.cpp

debug: 
	$(CC)  -std=c++14 -o BigNum.out main.cpp -g

run:
	$(CC) $(CFLAGS) -std=c++14 -o BigNum.out main.cpp && ./BigNum.out
clean: 
	rm -rf core *.o *.out *.dSYM
test:
	$(CC) $(CFLAGS) -std=c++14 -o BigNum.out main.cpp


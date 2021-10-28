build: main.o libcoin.a
	g++ -o lw2 main.o -L. -lcoin

libcoin.a: coin.o
	ar cr libcoin.a coin.o

main.o coin.o:
	g++ -c *.cpp

clean:
	rm -f *.o *.a lw2

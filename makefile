main: elo.o main.o
	g++ -o elo elo.o main.o
elo.o: elo.cpp elo.h
	g++ -c elo.cpp
main.o: main.cpp elo.h
	g++ -c main.cpp
clean:
	rm elo *.o

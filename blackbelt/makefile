#horserace.make
horserace: main.o Raceb.o Horseb.o
	g++ main.o Raceb.o Horseb.o -o horseraceb

main.o: main.cpp Raceb.h Horseb.h
	g++ -c main.cpp
	
Race.o: Raceb.cpp Raceb.h Horseb.h
	g++ -c Raceb.cpp
	
Horse.o: Horseb.cpp Horseb.h
	g++ -c Horseb.cpp
	
clean:
	rm -f *.o
	rm horseraceb

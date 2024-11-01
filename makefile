output: Driver.o HotelChain.o LinkedList.o Location.o Rooms.o
	g++ Driver.o HotelChain.o LinkedList.o Location.o Rooms.o -o output

Driver.o: Driver.cpp
	g++ -c Driver.cpp

HotelChain.o: HotelChain.cpp HotelChain.h
	g++ -c HotelChain.cpp

LinkedList.o: LinkedList.cpp LinkedList.h SmartPointer.h 
	g++ -c LinkedList.cpp

Location.o: Location.cpp Location.h 
	g++ -c Location.cpp

Rooms.o: Rooms.cpp Rooms.h 
	g++ -c Rooms.cpp

clean:
	rm *.o output
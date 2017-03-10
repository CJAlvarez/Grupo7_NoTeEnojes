juego:	Pieza.o PiezaAmarilla.o PiezaAzul.o PiezaRoja.o PiezaVerde.o main.o
	g++ Pieza.o PiezaAmarilla.o PiezaAzul.o PiezaRoja.o PiezaVerde.o main.o -o juego -lncurses -std=c++11

main.o:	Pieza.h PiezaAmarilla.h PiezaAzul.h PiezaRoja.h PiezaVerde.h main.cpp
	g++ -c main.cpp -lncurses -std=c++11

Pieza.o:	Pieza.h Pieza.cpp
	g++ -c Pieza.cpp -lncurses -std=c++11

PiezaAmarilla.o:	Pieza.h PiezaAmarilla.h PiezaAmarilla.cpp
	g++ -c PiezaAmarilla.cpp -lncurses -std=c++11

PiezaAzul.o:	Pieza.h PiezaAzul.h PiezaAzul.cpp
	g++ -c PiezaAzul.cpp -lncurses -std=c++11

PiezaRoja.o:	Pieza.h PiezaRoja.h PiezaRoja.cpp
	g++ -c PiezaRoja.cpp -lncurses -std=c++11

PiezaVerde.o:	Pieza.h PiezaVerde.h PiezaVerde.cpp
	g++ -c PiezaVerde.cpp -lncurses -std=c++11

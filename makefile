Juego:	Pieza.o Amarilla.o Azul.o Roja.o Verde.o Main.o
	g++ Pieza.o Amarilla.o Azul.o Roja.o Verde.o Main.o -o juego -incurses -std=c++11

Main.o:	Pieza.h PiezaAmarilla.h PiezaAzul.h PiezaRoja.h PiezaVerde.h main.cpp
	g++ -c main.cpp -incurses -std=c++11

Pieza.o:	Pieza.h Pieza.cpp
	g++ -c Pieza.cpp -incurses -std=c++11

Amarilla.o:	Pieza.h PiezaAmarilla.h PiezaAmarilla.cpp
	g++ -c PiezaAmarilla.cpp -incurses -std=c++11

Azul.o:	Pieza.h PiezaAzul.h PiezaAzul.cpp
	g++ -c PiezaAzul.cpp -incurses -std=c++

Roja.o:	Pieza.h PiezaRoja.h PiezaRoja.cpp
	g++ -c PiezaRoja.cpp -incurses -std=c++11

Verde.o:	Pieza.h PiezaVerde.h PiezaVerde.cpp
	g++ -c PiezaVerde.cpp -incurses -std=c++11

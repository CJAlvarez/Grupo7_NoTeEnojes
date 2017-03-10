// Pieza.h
#pragma once

#include <ncurses.h>

class Pieza {
	int color;
	int dentro;
	int final;

	public: 
		Pieza();
		// @param color
		Pieza(int);

		int getColor();

		int EntrarTablero();
		int ZonaFinal();
		int SalirTablero();
};
// Pieza.h
#pragma once

#include <ncurses.h>

class Pieza {
	protected:
		int color;
		int dentro;
		int final;

	public: 
		Pieza();
		// @param color
		Pieza(int);

		int getColor();

		virtual int EntrarTablero();
		virtual int ZonaFinal();
		virtual int SalirTablero();
};
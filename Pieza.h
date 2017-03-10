// Pieza.h
#pragma once

#include <ncurses.h>

class Pieza {
	protected:
		int color;
		int dentro;
		int finalZ;
		int x, y;

	public:
		Pieza();
		// @param color
		Pieza(int);

		int getColor();

		// @return x
		int getX();
		// @return y
		int getY();

		int getFinalZ();
		int getDentro();

		virtual int EntrarTablero();
		virtual int ZonaFinal();
		// @param dado
		virtual int mover(int);
		virtual int SalirTablero();
};

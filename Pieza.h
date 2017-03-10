// Pieza.h
#pragma once

#include <ncurses.h>

class Pieza {
	protected:
		int color;
		int dentro;
		int final;
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
<<<<<<< HEAD

		virtual int EntrarTablero();
		virtual int ZonaFinal();
=======
		
		// @param dado
		int mover(int);
		virtual int EntrarTablero();	
		virtual int ZonaFinal();		
>>>>>>> b0598726b865f85f3ea86c8dbfc374a67d8c24ec
		virtual int SalirTablero();
};

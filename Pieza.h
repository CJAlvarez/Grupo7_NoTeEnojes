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
		
		// @param dado
		int mover(int);
		virtual int EntrarTablero();	
		virtual int ZonaFinal();		
		virtual int SalirTablero();
};
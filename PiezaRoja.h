// PiezaRoja.h
#pragma once

#include "Pieza.h"

class PiezaRoja : public Pieza {
	public:
		PiezaRoja();
		// @param color
		PiezaRoja(int);

		virtual int EntrarTablero();
		virtual int ZonaFinal();
		virtual int SalirTablero();
		virtual int mover(int);
};

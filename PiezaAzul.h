// PiezaAzul.h
#pragma once

#include "Pieza.h"

class PiezaAzul : public Pieza {
	public:
		PiezaAzul();
		// @param color
		PiezaAzul(int);

		// @param dado
		virtual int mover(int);
		virtual int EntrarTablero();
		virtual int ZonaFinal();
		virtual int SalirTablero();
};

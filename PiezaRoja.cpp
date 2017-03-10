// PiezaRoja.cpp
#include "PiezaRoja.h"

PiezaAzul::PiezaRoja() : Pieza() {}

PiezaAzul::PiezaRoja(int color) : Pieza(color) {}

int PiezaRoja::EntrarTablero() {
	dentro = 1;
	return 0;
}

int PiezaRoja::ZonaFinal() {
	final = 1;
	return 0;
}

int PiezaRoja::SalirTablero() {
	dentro = final = 0;	
	return 0;
}
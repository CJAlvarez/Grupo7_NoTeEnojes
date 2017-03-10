// PiezaAzul.cpp
#include "PiezaAzul.h"

PiezaAzul::PiezaAzul() : Pieza() {}

PiezaAzul::PiezaAzul(int color) : Pieza(color) {}

int PiezaAzul::mover(int dado) {
	if(dado = -1) {

	}
}

int PiezaAzul::EntrarTablero() {
	dentro = 1;
	return 0;
}

int PiezaAzul::ZonaFinal() {
	final = 1;
	return 0;
}

int PiezaAzul::SalirTablero() {
	dentro = final = 0;	
	return 0;
}
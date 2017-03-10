// Pieza.cpp
#include "Pieza.h"

Pieza::Pieza() {
	color = dentro = final = 0;
}

Pieza::Pieza(int color) {
	this -> color = color;
	dentro = final = 0;
}

int Pieza::getColor() {
	return color;
}

int Pieza::EntrarTablero() {
	dentro = 1;
	return 0;
}

int Pieza::ZonaFinal() {
	final = 1;
	return 0;
}

int Pieza::SalirTablero() {
	dentro = final = 0;	
	return 0;
}
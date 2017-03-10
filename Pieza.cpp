// Pieza.cpp
#include "Pieza.h"

Pieza::Pieza() {
	color = dentro = 0;
}

Pieza::Pieza(int color) {
	this -> color = color;
	dentro = 0;
}

int Pieza::getColor() {
	return color;
}

int Pieza::EntrarTablero
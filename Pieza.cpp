// Pieza.cpp
#include "Pieza.h"

Pieza::Pieza() {
	color = dentro = finalZ = x = y = 0;
}

Pieza::Pieza(int color) {
	this -> color = color;
	dentro = finalZ = 0;
	mover(-1);
}

int Pieza::getColor() {
	return color;
}

int Pieza::mover(int dado) {
	return -1;
}

int Pieza::getX() {
	return x;
}

int Pieza::getY() {
	return y;
}

int Pieza::getFinalZ()
{
	return finalZ;
}

int Pieza::getDentro()
{
	return dentro;
}

int Pieza::EntrarTablero() {
	dentro = 1;
	return 0;
}

int Pieza::ZonaFinal() {
	finalZ = 1;
	return 0;
}

int Pieza::SalirTablero() {
	dentro = finalZ = 0;
	return 0;
}

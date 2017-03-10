// Pieza.cpp
#include "Pieza.h"

Pieza::Pieza() {
	color = dentro = final = x = y = 0;
}

Pieza::Pieza(int color) {
	this -> color = color;
	dentro = final = 0;
	mover(-1);
}

int Pieza::getColor() {
	return color;
}

<<<<<<< HEAD
int Pieza::mover(int dado) {
	return -1;
}

=======
>>>>>>> b0598726b865f85f3ea86c8dbfc374a67d8c24ec
int Pieza::getX() {
	return x;
}

int Pieza::getY() {
	return y;
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

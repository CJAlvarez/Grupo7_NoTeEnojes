<<<<<<< HEAD
// main.cpp
=======
#include <iostream>
#include "Pieza.h"
#include "PiezaAmarilla.h"
#include "PiezaAzul.h"
#include "PiezaRoja.h"
#include "PiezaVerde.h"
#include <string>
#include <stdlib.h>
#include <time>

using namespace std;

//funcion de dado con numeros random
int dado ();

//funcion de eliminacion de memoria
void eliminaMatriz(string**);

int main()
{
  string** tablero  = new string*[15];
  return 0;
}

int dado()
{
  int numero = 0;
  srand(time(0));
  numero = srand()%6;
  while (numero<1 || numero > 6){
    numero = srand()%6;
  }
  return numero;
}

void eliminaMatriz(string** tablero)
{
  for (int i=0; i<15; i++){
    delete [] tablero[i];
    tablero[i] = NULL;
  }
  delete [] tablero;
}

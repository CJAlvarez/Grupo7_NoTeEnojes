// main.cpp
#include <iostream>
#include "Pieza.h"
#include "PiezaAmarilla.h"
#include "PiezaAzul.h"
#include "PiezaRoja.h"
#include "PiezaVerde.h"

#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <ncurses.h>

using namespace std;

//funcion de dado con numeros random
int dado ();

//funcion de eliminacion de memoria
void eliminaMatriz(string**);

int main()
{
  initscr();
  
  noecho();
  curs_set(0);

  start_color();  
 
  printw("Somehing");

  refresh;

  // Colores Rojo, Verde, Amarillo, Azul
  int colores[4] = {1, 2, 3, 4};
  int jugadores;
  string** tablero = new string*[15];
  // Rojo
  vector <Pieza*>* jugador1 = new vector <Pieza*>();
  // Verde
  vector <Pieza*>* jugador2 = new vector <Pieza*>();
  // Amarillo
  vector <Pieza*>* jugador3 = new vector <Pieza*>();
  // Azul
  vector <Pieza*>* jugador4 = new vector <Pieza*>();

  vector <int> orden;

  for(int i = 0; i < 4; i++) {
    jugador1 -> push_back(new PiezaRoja(1));
    jugador2 -> push_back(new PiezaVerde(2));
    jugador3 -> push_back(new PiezaAmarilla(3));
    jugador4 -> push_back(new PiezaAzul(4));
  }  

  getch();
  endwin();
  for(int i = 0; i < 4; i++) {
    delete jugador1 -> at(i);
    delete jugador2 -> at(i);
    delete jugador3 -> at(i);
    delete jugador4 -> at(i);
  }    
  delete jugador1;
  delete jugador2;
  delete jugador3;
  delete jugador4;

  eliminaMatriz(tablero);
  return 0;
}

int dado()
{
  int numero = 0;
  srand(time(NULL));
  numero = srand()%6+1;
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

// main.cpp
#include <iostream>
//#include "Pieza.h"
//#include "PiezaAmarilla.h"
//#include "PiezaAzul.h"
//#include "PiezaRoja.h"
//#include "PiezaVerde.h"

#include <string>
#include <stdio.h>
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
  int jugadores;
  vector <int> orden;
  initscr();
  
  //noecho();
  curs_set(0);
  // y x
  mvprintw(0,0,"NO TE ENOJES");
  do {
    mvprintw(1,0, "Ingrese Cantidad de jugadores: ");
    jugadores = scanw();  
    mvprintw(1,0, "                               ");    
  } while (jugadores < 1 || jugadores > 4);

  for(int i = 0; i < jugadores; i++) {
    mvprintw(1,0, "");
  }



  start_color();  
  init_pair(0, COLOR_WHITE, COLOR_BLACK);
  init_pair(1, COLOR_RED, COLOR_BLACK);
  init_pair(2, COLOR_GREEN, COLOR_BLACK);
  init_pair(3, COLOR_YELLOW, COLOR_BLACK);
  init_pair(4, COLOR_BLUE, COLOR_BLACK);
 
  attron(A_REVERSE);
  attron(COLOR_PAIR(0));
  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 15; j++) {
        move(i+2, j+4);
        printw("[  ]");
    
  refresh;
      }
  }
  attroff(COLOR_PAIR(0));   
  attroff(A_REVERSE);
  mvprintw(0,0,"sOOOOO");
refresh;
/*
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


  for(int i = 0; i < 4; i++) {
    jugador1 -> push_back(new PiezaRoja(1));
    jugador2 -> push_back(new PiezaVerde(2));
    jugador3 -> push_back(new PiezaAmarilla(3));
    jugador4 -> push_back(new PiezaAzul(4));
  }  

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
  */
  getch();
  endwin();
  return 0;
}

int dado()
{
  int numero = 0;
  srand(time(NULL));
  numero = rand() % 6 + 1;
  while (numero<1 || numero > 6){
    numero = rand()%6;
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

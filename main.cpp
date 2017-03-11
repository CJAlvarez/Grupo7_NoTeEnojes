// main.cpp
#include <iostream>
#include "Pieza.h"
#include "PiezaAmarilla.h"
#include "PiezaAzul.h"
#include "PiezaRoja.h"
#include "PiezaVerde.h"

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
  int c;
  vector <int> orden;
  initscr();    
    //curs_set(0);
    // y x
  mvprintw(0,0,"NO TE ENOJES");
  mvprintw(1,0, "Ingrese Cantidad de jugadores: ");    
  switch((c = getch())) {
    
    case '2': {
      jugadores = 2;
      break;
    }

    case '3': {
      jugadores = 3;
      break;
    }

    case '4': {
      jugadores = 4;
      break;
    }

    default:{
      jugadores = 2;
    }
  }
  mvprintw(1,0, "                                      ");          

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

  int turno = 1;
      // JUEGO
    noecho();   
  do{    
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
          move(i+2, j+(4*j));
          if(((j > 0 && j < 14) && (i == 0 || i == 14)) || ((i > 0 && i < 14) && (j == 0 || j == 14))){
              attron(COLOR_PAIR(0));
              printw("[  ]");      
          }  
          else if((i == 0 && j == 0) || (i == 7 && (j < 7))) {
              attron(COLOR_PAIR(2));
              printw("[  ]");      
              attroff(COLOR_PAIR(2));   
          } else if((i == 14 && j == 0) || ((i < 14 && i > 7) && (j == 7 ))){
              attron(COLOR_PAIR(3));
              printw("[  ]");      
              attroff(COLOR_PAIR(3));   
          } else if ((i == 0 && j == 14) || ((i < 7) && (j == 7 ))) {
              attron(COLOR_PAIR(1));
              printw("[  ]");      
              attroff(COLOR_PAIR(1));   
          } else if ((i == 14 && j == 14) || (i == 7 && j > 7)){
              attron(COLOR_PAIR(4));
              printw("[  ]");      
              attroff(COLOR_PAIR(4));   
          }          
          refresh;
        }
    }
    // JUGAR
    mvprintw(17, 0, "Turno Jugador %d", (turno));
    int d1 = dado() , d2 = dado();
    int pieza;
    mvprintw(17, 0, "                          ");
    mvprintw(17, 0, "dado1: %d, dado2: %d", d1, d2);  
    if((d1 == 1 && d2 == 1) || (d1 == 6 && d2 == 6)) {
      int t = 0;
      switch(turno){
      case 1: {
        while(jugador1 -> at(t) -> getDentro() != 1){
          t++;
        }
        jugador1 -> at(t) -> EntrarTablero();
        break;
      }

      case 2: {
        while(jugador2 -> at(t) -> getDentro() != 1){
          t++;
        }
        jugador2 -> at(t) -> EntrarTablero();
        break;
      }

      case 3: {
        while(jugador3 -> at(t) -> getDentro() != 1){
          t++;
        }
        jugador3 -> at(t) -> EntrarTablero();
        break;
      }

      case 4: {
        while(jugador4 -> at(t) -> getDentro() != 1){
          t++;
        }
        jugador4 -> at(t) -> EntrarTablero();
        break;
      }
    }
  }

    mvprintw(19,0, "Ingrese Numero de pieza: ");    
    switch((pieza = getch())) {    
    case '2': {
      pieza = 2;
      break;
    }

    case '3': {
      pieza = 3;
      break;
    }

    case '4': {
      pieza = 4;
      break;
    }

    default:{
      pieza = 2;
    }
  }
  if(jugador4 -> at(pieza) -> getDentro() == 1) {

  mvprintw(19,0, "                                      ");          

    switch(turno){
      case 1: {
        jugador1 -> at(pieza) -> mover(d1+d2);
       
        break;
      }

      case 2: {
        jugador1 -> at(pieza) ->  mover(d1+d2);
        break;
      }

      case 3:{
        jugador1 -> at(pieza) ->  mover(d1+d2);
        break;
      }

      case 4: {
        jugador1 -> at(pieza) ->  mover(d1+d2);
        break;
      }
    }
    

    // imprimir 
    for(int i = 0; i < 4; i++) {      
        attron(COLOR_PAIR(1));
        mvprintw(jugador1 -> at(i) -> getY()+2, jugador1 -> at(i) -> getX() + (jugador1 -> at(i) -> getX()*4), "[ %d]", i);      
        attroff(COLOR_PAIR(1));                
        
        attron(COLOR_PAIR(2));
        mvprintw(jugador2 -> at(i) -> getY()+2, jugador2 -> at(i) -> getX() + (jugador2 -> at(i) -> getX()*4), "[ %d]", i);      
        attroff(COLOR_PAIR(2));                 
      
        attron(COLOR_PAIR(3));
        mvprintw(jugador3 -> at(i) -> getY()+2, jugador3 -> at(i) -> getX() + (jugador3 -> at(i) -> getX()*4), "[ %d]", i);      
        attroff(COLOR_PAIR(3));                 
        
        attron(COLOR_PAIR(4));
        mvprintw(jugador4 -> at(i) -> getY()+2, jugador4 -> at(i) -> getX() + (jugador4 -> at(i) -> getX()*4), "[ %d]", i);      
        attroff(COLOR_PAIR(4));                                    
    }  

    }
    attroff(COLOR_PAIR(0));   
    attroff(A_REVERSE);    
    refresh;
    mvprintw(18, 10, "PRESIONE ENTER PARA PASAR TURNO O 2(ESC) PARA SALIR");
    if(turno == jugadores){
      turno = 0;
    }
    turno ++;    
    } while((c = getch()) != 27);

// FIN JUEGO

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

#ifndef PIEZAVERDE_H_
#define PIEZAVERDE_H_

#include "Pieza.h"

class PiezaVerde : public Pieza
{
public:

  //Constructores
  PiezaVerde();
  PiezaVerde(int);

  //funciones polimorficas
  virtual int EntrarTablero();
  virtual int ZonaFinal();
  virtual int SalirTablero();
};

#endif

#ifndef PIEZASAMARILLAS_H_
#define PIEZASAMARILLAS_H_

#include "Pieza.h"

class PiezaAmarilla : public Pieza
{
public:

  //Constructores
  PiezaAmarilla();
  PiezaAmarilla(int);

  //funciones polimorficas
  virtual int EntrarTablero();
  virtual int ZonaFinal();
  virtual int SalirTablero();
};

#endif

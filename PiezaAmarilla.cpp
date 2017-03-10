#include "PiezaAmarilla.h"

PiezaAmarilla::PiezaAmarilla()
{

}

PiezaAmarilla::PiezaAmarilla(int pColor) : Pieza(pColor)
{

}

int PiezaAmarilla::mover(int dado)
{
  if (x==8 && y==8) {
		//cout << "La pieza ya esta en el centro" << endl;
		return 1;
	}
	else{
		if (y==0) {//condiciones de y=0
			int sumaX = x + dado;
			if (sumaX>14){
				int restaX = 14 - x;
				x += restaX;
				dado -= restaX;
				return mover(dado);
			}
      else {
        x+=dado;
        return 0;
      }
		}//fin de la condicion y=0
    if (x==14){//condicion de x=14
      int sumaY = y + dado;
      if (sumaY>14) {
        int restaY = 14 - y;
        y += restaY;
        dado -= restaY;
        return mover(dado);
      }
      else {
        y+=dado;
        return 0;
      }
    }//fin de la condicion de x==14
    if (y==14) {// condicion cuando y = 14
      int restaX = x-dado;
      if (restaX<0){
        x = 0;
        dado -=x;
        return mover(dado);
      }
      else {
        x-=dado;
        return 0;
      }
    }//fin de la condicion de y=14
	}
}

int PiezaAmarilla::EntrarTablero()
{

}

int PiezaAmarilla::ZonaFinal()
{

}

int PiezaAmarilla::SalirTablero()
{

}

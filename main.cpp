#include <iostream>
#include "sculptor.h"

using namespace std;
int main (){
  Sculptor Mikewazowski (100,100,100);

  //1º Construção da cabeça
  Mikewazowski.setColor(0.282,0.960,0.259,1.0);
  Mikewazowski.putSphere(49,45,41,37);

  //2º Construção da cornea(olho)
  Mikewazowski.setColor(0.9,1.0,1.0,0.7);
  Mikewazowski.putSphere(49,50,59,20);

  //3º Construção da iris(olho)
  Mikewazowski.setColor(0.282,0.470,0.243,1.0);
  Mikewazowski.putSphere(49,52,69,9);

  //4º Construção da pupila(olho)
  Mikewazowski.setColor(0,0,0,1.0);
  Mikewazowski.putSphere(49,52,74,4);

  //5º Construção do capacete
  Mikewazowski.setColor(0.117,0.564,1.0,1.0);
  Mikewazowski.putSphere(49,72,41,20);
  Mikewazowski.putBox(40,59,74,78,58,66);

  //6º Construção do detalhe do capacete
  Mikewazowski.setColor(0.9,1.0,1.0,0.7);
  Mikewazowski.putSphere(49,80,56,6);

  //7º Construção dos chifres
  Mikewazowski.setColor(0.960,0.960,0.862,1.0);
  Mikewazowski.putEllipsoid (23, 65, 49, 5, 10,5); //chifre direito
  Mikewazowski.putEllipsoid(75, 65, 49, 5, 10, 5); //chifre esquerdo

  //8º Construção da boca
  Mikewazowski.setColor(0,0,0,1.0);
  Mikewazowski.putBox(36,62, 23, 37,71, 75);
  Mikewazowski.putBox(34,36,29,39,73,75);
  Mikewazowski.putBox(62,64,29,39,73,75);
  Mikewazowski.cutBox(36,40,23,25,71,75);
  Mikewazowski.cutBox(58,62,23,25,71,75);

  //9º Construção dos dentes
  Mikewazowski.setColor(0.960,0.960,0.862,1.0);
  Mikewazowski.putBox(40,58,23,25,73,75);
  Mikewazowski.putBox(42,44,25,27,73,75); //d1 inferior
  Mikewazowski.putBox(48,50,25,27,73,75); //d2 inferior
  Mikewazowski.putBox(54,56,25,27,73,75); //d3 inferior
  Mikewazowski.putBox(48,50,29,31,73,75); //d2 superior
  Mikewazowski.putBox(42,44,29,31,73,75); //d1 superior
  Mikewazowski.putBox(40,44,31,33,73,75); //d1 superior
  Mikewazowski.putBox(54,56,29,31,73,75); //d3 superior
  Mikewazowski.putBox(54,58,31,33,73,75); //d3 superior
  Mikewazowski.putBox(34,38,35,37,73,75); //d4 superior
  Mikewazowski.putBox(34,36,37,39,73,75); //d4 superior
  Mikewazowski.putBox(36,38,33,35,73,75); //d4 superior
  Mikewazowski.putBox(60,64,35,37,73,75); //d5 superior
  Mikewazowski.putBox(60,62,33,35,73,75); //d5 superior
  Mikewazowski.putBox(62,64,37,39,73,75); //d5 superior
  Mikewazowski.putBox(36,40,25,27,73,75); //d4 inferior
  Mikewazowski.putBox(36,38,27,29,73,75); //d4 inferior
  Mikewazowski.putBox(58,62,25,27,73,75); //d5 inferior
  Mikewazowski.putBox(60,62,27,29,73,75); //d5 inferior

  //10º Ajuste boca
  Mikewazowski.setColor(0.282,0.960,0.259,1.0);
  Mikewazowski.putBox(40,58,21,23,71,75);
  Mikewazowski.putBox(58,62,23,25,71,75);
  Mikewazowski.putBox(36,40,23,25,71,75);
  Mikewazowski.putBox(62,64,25,29,71,75);
  Mikewazowski.putBox(34,36,25,29,71,75);
  Mikewazowski.putBox(64,66,29,37,71,75);
  Mikewazowski.putBox(32,34,29,37,71,75);
  

 Mikewazowski.writeOFF((char*)"mikewazowski.off"); 

  return 0;
}

#include <iostream>

using namespace std;

int main(){
    
    //Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo.

    int lado=9;
    int area;
    int perimetro;

    area=lado*lado;
    perimetro=lado*4;

    cout << "Determinado quadrado possui 9 centimetros em suas laterais, dito isso sua area e perimetro sao: \n" << area << " centimetros quadrados \n" << perimetro << " centimetros \n"; 

    return 0;
}

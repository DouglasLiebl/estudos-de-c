#include <iostream>

using namespace std;

int main(){

    //Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu perímetro.

    int altura=10;
    int base=5;
    int area, perimetro;

    area=altura*base;
    perimetro=(altura*2)+(base*2);

    cout << "Determinado retangulo possui as seguintes medidas: " << "\n";
    cout << "Altura: " << altura << " metros \n" << "Base: " << base << " metros \n";
    cout << "Sua area e perimetro sao, respectivamente: \n" << area << " metros quadrados \n" << perimetro << " metros \n";
    return 0;
}

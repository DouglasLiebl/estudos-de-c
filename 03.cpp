#include <iostream>

using namespace std;
#define pi 3.14;

int main(){
    //Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma.

    int raio=4;
    int area;
    int perimetro;

    perimetro=(2*raio)*pi;
    area=(raio*raio)*pi;

    cout << "Determinada circunferencia possui raio de 4 metros tendo area e perimetro equivalentes a: \n" << area << " metros quadrados \n" << perimetro << " metros \n";

    return 0;
}
#include <iostream>

using namespace std;

int main(){
    //Um circuito elétrico é composto de duas resistências R1 e R2 em paralelo, e ambas em sequência de uma resistência R3. Faça um algoritmo para calcular a resistência equivalente desse circuito.

    float r1, r2, r3;
    float reqp, reqm;

    cout << "Insira o valor da resistencia 1: ";
    cin >> r1;
    cout << "Insira o valor da resistencia 2: ";
    cin >> r2;
    cout << "Insira o valor da resistencia 3: ";
    cin >> r3;

    reqp=(r1*r2)/(r1+r2);
    reqm=reqp+r3;
    
    cout << "A resistencia equivalente dos resistores e de: " << reqm << " Ohms \n";


    return 0;
}
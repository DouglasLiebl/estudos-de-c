#include <iostream>

using namespace std;

int main(){
    //Escreva um programa para gerar o invertido de um número com três algarismos (exemplo: o invertido de 498 é 894).

    int numero, a1, a2, a3;

    cout << "Digite um numero de tres algarismos para que seja invertido: ";
    cin >> numero;

    a1=numero/100;
    a2=(numero/10)%10;
    a3=(numero%10)%10;

    cout << "O numero invertido ficara: " << a3 << a2 << a1 << "\n";



    return 0;
}
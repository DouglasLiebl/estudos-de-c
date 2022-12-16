#include <iostream>

using namespace std;

int main(){
    //Escreva um programa que leia 5 números, e imprima a média entre eles.

    float n1, n2, n3, n4, n5, media;

    cout << "Insira cinco numeros: \n" << "Primeiro numero: ";
    cin >> n1;
    cout << "Segundo numero: ";
    cin >> n2;
    cout << "Terceiro numero: ";
    cin >> n3;
    cout << "Quarto numero: ";
    cin >> n4;
    cout << "Quinto numero: ";
    cin >> n5;

    media=(n1+n2+n3+n4+n5)/5;

    cout << "A media entre esses numeros e " << media << "\n";



    return 0;
}
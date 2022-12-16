#include <iostream>

using namespace std;

int main (){
    //Escreva um programa que leia 3 valores e escreva a soma dos 2 maiores.

    int num1, num2, num3, som;

    cout << "Insira tres numeros \n" << "Primeiro: ";
    cin >> num1;
    cout << "Segundo: ";
    cin >> num2;
    cout << "Terceiro: ";
    cin >> num3;

    if(num2 && num1 > num3){
        som=num1+num2;
        cout << "\nA soma dos dois maiores numeros e: " << som << "\n";
    }
    if(num3 && num1 > num2){
        som=num1+num3;
        cout << "\nA soma dos dois maiores numeros e: " << som << "\n";
    }
    if(num3 && num2 > num1){
        som=num2+num3;
        cout << "\nA soma dos dois maiores numeros e: " << som << "\n";
    }


    return 0;
}
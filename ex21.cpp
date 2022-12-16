#include <iostream>

using namespace std;

int main(){
    //Escreva um programa que leia três números e mostre o maior entre eles.

    int num1, num2, num3;

    cout << "Insira tres numeros \n" << "Primeiro: ";
    cin >> num1;
    cout << "Segundo: ";
    cin >> num2;
    cout << "Terceiro: ";
    cin >> num3;

    if(num1>num3 && num2){
        cout << "\nO maior dos tres numeros e o Primeiro!\n";
    }
    if(num2>num3 && num1){
        cout << "\nO maior dos tres numeros e o Segundo!\n";
    }
    if(num3>num2 && num1){
        cout << "\nO maior dos tres numeros e o Terceiro!\n";
    }

    return 0;
}
#include <iostream>

using namespace std;

int main(){
    //Escreva um programa que leia um número e exiba se ele é positivo ou negativo.

    int num;

    cout << "Digite um numero, o algoritimo ira identificar se ele e positivo ou negativo: ";
    cin >> num;

    if(num>0){
        cout << "\nPositivo! \n\n";
    }else{ 
        cout << "\nNegativo! \n\n";
    }

    return 0;
}
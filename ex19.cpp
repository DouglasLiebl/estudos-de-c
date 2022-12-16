#include <iostream>

using namespace std;

int main(){
    //Escreva um programa que leia um número e imprima se este número é ou não par.

    int num , num2;

    cout << "Digite um numero e o progama dira se ele e par ou impar: ";
    cin >> num;

    num2=num%2;

    if(num2==0){
        cout << "Par!\n";
    }else{
        cout << "Impar!\n";
    }

    return 0;
}
#include <iostream>

using namespace std;

int main(){
    //Escreva um programa que leia um número e exiba o seu módulo.

    int num, mod;

    cout << "Digite um numero: ";
    cin >> num;

    if(num<0){
        mod=num*(-1);
        cout << "O modulo do numero " << num << " e " << mod << "\n";
    }else {
        cout << "O modulo do numero " << num << " e " << num << "\n";
    }


    return 0;
}
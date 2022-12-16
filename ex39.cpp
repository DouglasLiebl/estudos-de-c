#include <iostream>

using namespace std;

int main(){
    //Escreva um programa que imprima todos os números de 1 até 100, inclusive, e a soma de todos eles.

    int num, soma;
    num=1;
    soma=0;
    
    while(num < 101){
        cout << num << " ";
        num++;
        soma=soma+num;
    }

    cout << soma;


    return 0;
}
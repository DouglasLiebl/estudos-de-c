#include <iostream>

using namespace std;

int main(){
    /*Escreva um programa que calcule o resto da divisão de A por B (número inteiros e positivos), ou seja, A % B, através de subtrações sucessivas. Esses dois valores são passados pelo usuário através do teclado.*/

    int A, B, sub, resto;

    cout << "Insira dois valores para que seja calculado o resto da divisao por subtracao: \n" << "Dividendo: ";
    cin >> A;
    cout << "Divisor: ";
    cin >> B;

    sub=A;
    resto=A%B;

    while(sub >0){
        sub=sub-B;
        if(sub==resto){
            break;
        }
    }

    cout << "O resto da divisao e " << sub << "\n";

    return 0;
}
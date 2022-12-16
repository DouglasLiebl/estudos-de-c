#include <iostream>

using namespace std;

int main(){
    /*Escreva um programa que calcule o quociente da divisão de A por B (número inteiros e positivos), ou seja, A / B, através de subtrações sucessivas. Esses dois valores são passados pelo usuário através do teclado.*/

    int A, B, sub, quo, sub2, quo2;

    cout << "Insira dois valores para que seja realizada a divisao por subtracao: \n" << "Dividendo: ";
    cin >> A;
    cout << "Divisor: ";
    cin >> B;

    sub=0;
    sub=A;
    quo=A/B;
    quo2=0;

    while(sub > 0){
        sub=sub-B;
        quo2++; 
        quo2=quo2;
    }

    cout << "O resultado da divisao e " << quo2 << "\n";


    return 0;
}
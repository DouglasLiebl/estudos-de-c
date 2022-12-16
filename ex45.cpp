#include <iostream>

using namespace std;

int main(){
    /*. Escreva um programa que leia um valor e imprima todas as possíveis combinações em que o lançamento de um par de dados tenha como resultado da soma dos valores dos dados o número lido. Por exemplo, se a entrada for o número 7, o programa deve imprimir as seguintes combinações: 
    • 1 6
    • 2 5
    • 3 4
    • 4 3
    • 5 2
    • 6 1*/

    int valor, n1, n2;

    cout << "Digite um valor: ";
    cin >> valor;
    n1=0;
    n2=0;

    while(valor > 0){
        n1=valor-1;
        valor=n1;
        n2++;
        cout << n1 << " " << n2 << "\n";
        if(n1==1){
            break;
        }
    }     

    return 0;
}
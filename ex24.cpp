#include <iostream>

using namespace std;

int main(){
    /*Escreva um programa que leia 3 números e calcule a média ponderada entre eles. Considere que o maior número recebe peso 5 e os outros dois recebem peso 2,5. */

    float n1, n2, n3, med;

    cout << "Insira as notas dos tres trimestres letivos: \n" << "Primeiro trimestre: ";
    cin >> n1;
    cout << "Segundo trimestre: ";
    cin >> n2;
    cout << "Terceiro trimestre: ";
    cin >> n3;

    if(n1 > n3 && n2){
        med=((n1*5)+(n2*2.5)+(n3*2.5))/(5+2.5+2.5);
    }
    if(n2 > n3 && n1){
        med=((n2*5)+(n1*2.5)+(n3*2.5))/(5+2.5+2.5);
    }
    if(n3 > n2 && n1){
        med=((n3*5)+(n2*2.5)+(n1*2.5))/(5+2.5+2.5);
    }

    cout << "A media final e: " << med << "\n";


    return 0;
}
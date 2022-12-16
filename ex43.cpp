#include <iostream>

using namespace std;

int main(){
    //Escreva um programa que determine se um dado número N (digitado pelo usuário) é primo ou não.

    int numero, resto;

    cout << "Insira um numero para verificar se ele e primo ou nao: ";
    cin >> numero;

   if(numero!=2){
        resto=numero%2;
        if(resto>0){
            cout << "O numero digitado e primo \n";
        }else{
            cout << "O numero digitado nao e primo \n";
        }
    }
    
    if(numero==2){
        cout << "O numero digitado e primo \n";
    }
    
    return 0;
}
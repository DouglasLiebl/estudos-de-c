#include <iostream>

using namespace std;

int main(){
    //Escreva um programa que leia um número inteiro de 1 a 7 e informe o dia da semana correspondente, sendo domingo o dia de número 1. Se o número não corresponder a um dia da semana, mostre uma mensagem de erro.

    int dia;

    cout << "Digite um numero: ";
    cin >> dia;

    if(dia==1){
        cout << "Domingo\n";
    }
    if(dia==2){
        cout << "Segunda-feira\n";
    }
    if(dia==3){
        cout << "Terca-feira\n";
    }
    if(dia==4){
        cout << "Quarta-feira\n";
    }
    if(dia==5){
        cout << "Quinta-feira\n";
    }
    if(dia==6){
        cout << "Sexta-feira\n"; 
    }
    if(dia==7){
        cout << "Sabado\n";
    }if(dia!=1 && dia!=2 && dia!=3 && dia!=4 && dia!=5 && dia!=6 && dia!=7){
        cout << "Numero nao assosciado\n";
    }





    return 0;
}
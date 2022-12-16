#include <iostream>

using namespace std;

int main(){
    //Escreva um programa que leia o número equivalente ao mês e imprima a quantidade de dias deste mês.

    int mes;

    cout << "Insira o numero equivalente ao mes desejado: ";
    cin >> mes;

    if(mes==2){
        cout << "\nEste mes tem 28 dias \n";
    }
    if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
        cout << "\nEste mes tem 31 dias \n";
    }
    if(mes==4 || mes==6 || mes==9 || mes==11){
        cout << "\nEste mes tem 30 dias \n";
    }

    return 0;
}
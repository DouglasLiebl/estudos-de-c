#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    /*  Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum 
        mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima" no sentido de que as notas de menor valor fossem distribuídas em número mínimo possível. Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$ 1,00. Escreva um programa que receba o valor da quantia solicitada e retorne a distribuição das notas de acordo com o critério da distribuição ótima*/

    char rtn;
    int saque;
    int nota1, nota2, nota5, nota10, nota20, nota50, nota100;
    int resto1, resto2, resto5, resto10, resto20, resto50, resto100;

    inicio:
    system ("cls");

    cout << "Insira o valor a ser sacado: ";
    cin >> saque;

        nota100=saque/100;
        resto100=saque%100;

        nota50=resto100/50;
        resto50=resto100%50;

        nota20=resto50/20;
        resto20=resto50%20;

        nota10=resto20/10;
        resto10=resto20/10;

        nota5=resto10/5;
        resto5=resto10%5;

        nota2=resto5/2;
        resto2=resto5%2;

        nota1=resto2/1;

    cout << "Voce esta retirando: \n";

    if(nota100>0){
        cout << "Notas de 100: " << nota100 << "\n";
    }
    
    if(nota50>0){
        cout << "Notas de 50: " << nota50 << "\n";
    }

    if(nota20>0){
        cout << "Notas de 20: " << nota20 << "\n";
    }

    if(nota10>0){
        cout << "Notas de 10: " << nota10 << "\n";
    }

    if(nota5>0){
        cout << "Notas de 5: " << nota5 << "\n";
    }

    if(nota2>0){
        cout << "Notas de 2: " << nota2 << "\n";
    }

    if(nota1>0){
        cout << "Notas de 1: " << nota1 << "\n";
    }

    cout << "\nDeseja realizar mais um saque?[s/n] ";
    cin >> rtn;

    if(rtn=='s' || rtn=='S'){
        goto inicio;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main(){
    /*Uma financeira usa o seguinte critério para conceder empréstimos: o valor total do empréstimo deve ser até dez vezes o valor da renda mensal do solicitante e o valor da prestação deve ser no máximo 30% da renda mensal do solicitante. Escreva um programa que leia a renda mensal de um solicitante, o valor total do empréstimo solicitado e o número de prestações que o solicitante deseja pagar e informe se o empréstimo pode ou não ser concedido.*/

    float sal, emp, pres, res1, res2, res3;

    cout << "Insira a sua renda mensal: ";
    cin >> sal;
    cout << "Insira o valor que deseja emprestar: ";
    cin >> emp;
    cout << "Insira em quantas prestacoes deseja pagar o emprestimo: ";
    cin >> pres;

    res1=sal*0.30;
    res2=sal*10;
    res3=emp/pres;

    if(res3>res1){
        cout << "O emprestimo nao pode ser concedido \n";
    }
    if(emp>res2){
        cout << "O emprestimo nao pode ser concedido \n";
    }
    if(emp<=res2 && res3<=res1){
        cout << "O emprestivo sera aprovado \n";
    }



    return 0;
}
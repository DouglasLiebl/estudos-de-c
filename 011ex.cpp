#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    //Faça um algoritmo para calcular a nota semestral de um aluno. A nota semestral é obtida pela média aritmética entre a nota de 2 bimestres. Cada nota de bimestre é composta por 2 notas de provas. 

    float np1, np2, np3, np4;
    float nb1, nb2;
    float ns;
    char opc;
    string nome;

    inicio:
    system("cls");

    cout << "Insira o nome do aluno que tera as notas inseridas: ";
    cin >> nome;
    cout << "Insira a nota da prova 1 do primeiro bimestre: ";
    cin >> np1;
    cout << "Insira a nota da prova 2 do primeiro bimestre: ";
    cin >> np2;
    cout << "Insira a nota da prova 1 do segundo bimestre: ";
    cin >> np3;
    cout << "Insira a nota da prova 2 so segundo bimestre: ";
    cin >> np4;

    nb1=(np1+np2)/2;
    nb2=(np3+np4)/2;

    ns=(nb1+nb2)/2;

    if(ns>=7.5){
        cout << "\nSua nota semestral foi: " << ns << ", " << nome << " voce foi Aprovado! \n";
    }else if(ns>6){
        cout << "\nSua nota semestral foi: " << ns << ", " << nome << " voce esta de Recuperacao! \n";    
    }else if(ns<6){
        cout << "\nSua nota semestral foi: " << ns << ", " << nome <<" voce esta Reprovado \n";
    }

    cout << "Deseja continuar digitando outras notas?[s/n]";
    cin >> opc;

    if(opc=='s'){
        goto inicio;
    }

    return 0;
}

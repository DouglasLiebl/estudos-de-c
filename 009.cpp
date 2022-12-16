#include <iostream>

using namespace std;

int main(){
    /*Operador ternario, de modo raso, e um "if" simplificado
    (expressao) ? valor1 : valor2; */


    int n1, n2, nota;
    string res, nome;

    cout << "Insira o nome do aluno que tera suas notas registradas: ";
    cin >> nome;
    cout << "Insira a primeira nota: ";
    cin >> n1;
    cout << "Insira a segunda nota: ";
    cin >> n2;

    nota=n1+n2;

    (nota>=60) ? res="Aprovado" : res="Reprovado";
    /*A expressao acima tambem pode ser escrita da seguinte forma:
    res=(nota>=60) ? "Aprovado" : "Reprovado";
    dessa forma a expressao retornara um dos valores que sera armazenado 
    na variavel escolhida */

    cout << "O aluno " << nome << " sera " << res << "\n";

    return 0;
}
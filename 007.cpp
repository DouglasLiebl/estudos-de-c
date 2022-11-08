#include <iostream>
#include <cstdlib> //Biblioteca do C++ que possui outros comandos como por exemplo: system('cls')

using namespace std;

int main(){

    int n1, n2, res;
    char opc;

    inicio: //Isso é um 'label', ele serve como marco de retorno para a funçao goto
    system("cls"); //Essa funçao ira limpar a tela caso tenha sido selecionada a opçao de retorno ao label

    cout << "Digite o valor da nota 1: ";
    cin >> n1;
    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    res=n1+n2;

    //>=60 o aluno vai estar Aprovado, >=40 e <59 o aluno vai estar de recuperçao, <40 Reprovado

    if(res>=60){
        cout << "\n Aprovado! \n";
    }else if(res>=40){
        cout << "\n Recuperacao! \n";
    }else{
        cout << "\n Reprovado \n";
    }

    cout << "\n Digitar outras notas?[s/n]: ";
    cin >> opc;

    if(opc=='s'){
        goto inicio; //A funçao goto serve para realizar um retorno imediato a um determinado label
    }

    return 0;
}
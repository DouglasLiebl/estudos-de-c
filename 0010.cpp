#include <iostream>

using namespace std;

int main(){
    /*Estrutura basica da variavel switch

    switch(expressao){

        case const1:
            comandos;
            break;
        case const2:
            comandos;
            break;    
        default:
            comandos;
    } 
    
    default é uma estrutura padrao opcional, ela sera utilizada para executar um comando caso 
    nenhuma das constantes executadas previamente resultar no resultado dado pela expressao;*/

    int valor;

    cout << "Selecione uma forma geometrica: \n[1]Quadrado \n[2]Circulo \n[3]Triangulo \n[4]Losango \n";
    cin >> valor;

    switch(valor){
        case 1:
            cout << "Forma selecionada: Quadrado \n";
            break;
        case 2:
            cout << "Forma selecionada: Circulo \n";
            break;
        case 3:
            cout << "Forma selecionada: Triangulo \n"; 
            break;
        case 4:
            cout << "Forma selecionada: Losango \n";
            break;
        default:
            cout << "Voce digitou um numero nao relacionado a uma forma geometrica \n";
    }
    /* caso voce queira que varias opçoes de entrada resultem em uma mesma saida a 
    estrutura deve ser assim:

    case 1:
    case 2:
    case 3:
        cout << "Texto";
    case 4:
    case 5:
    case 6:
        cout << "Texto2";

    nesse exemplo as variaveis 1,2,3 resultaram no primeiro texto e as variaveis 4,5,6 resultaram no 
    segundo texto;

    tambem pode-se adicionar opçoes dentro de outras;
    Exemplo:

    cout << "Selecione um meio de transporte: \n[1]Carro \n[2]Onibus \n[3]Aviao \n[4]Helicoptero\n"
    cin >> valor;

    switch(valor){
        case 1:
        case 2:
            cout << "Transporte terrestre:";
                switch(valor){
                    case 1:
                        cout << "Carro selecionado";
                        break;
                    case 2: 
                        cout << "Onibus selecionado";
                        break;
                }
            break;
        case 3:
        case 4:
            cout << "Transporte aereo:"
                switch(valor){
                    case 3:
                        cout << "Aviao selecionado";
                        break;
                    case 4:
                        cout << "Helicoptero selecionado";
                        break;
                } 
            break;
        default:
            cout << "Meio de transporte selecionado invalido";
    }
    
    
    
    
    
    
    
    */

    return 0;
}
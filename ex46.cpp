#include <iostream>

using namespace std;

int main(){
    /*A série de FETUCCINE é gerada da seguinte forma: os dois primeiros termos são fornecidos pelo usuário; a partir daí, os termos são gerados com a soma ou subtração dos dois termos anteriores, ou seja:
        1. Ai = Ai-1 + Ai-2, para i ímpar
        2. Ai = Ai-1 - Ai-2, para i par
        Criar um algoritmo em PORTUGOL que imprima os N primeiros termos da série de FETUCCINE, sabendo-se que para existir esta série serão necessários pelo menos três termos. */

    int termo, penultimo, ultimo, ndesj, stop;
    
    cout << "Insira os dois primeiros termos da serie de FETUCCINE: \n" << "Primeiro: ";
    cin >> penultimo;
    cout << "Segundo: ";
    cin >> ultimo;
    cout << "Agora digite qual termo voce deseja que seja calculado: ";
    cin >> ndesj;

    termo=1;
    stop=2;

    while(ndesj ==1 || ndesj == 2){
        if(ndesj == 1){
            cout << "O valor do primeiro termo e " << penultimo << "\n";
            break;
        }
        if(ndesj == 2){
            cout << "O valor do segundo termo e " << ultimo << "\n";
            break;
        }
    }    
    if(ndesj > 2){
        while(termo > 0){
                termo=ultimo+penultimo;
                penultimo=ultimo;
                ultimo=termo;
                stop++;
                
                if(stop == ndesj){
                    cout << "O valor do termo desejado e " << termo << "\n";
                    break;
                }
                
                termo=ultimo-penultimo;
                penultimo=ultimo;
                ultimo=termo;
                stop++;
                
                if(stop == ndesj){
                    cout << "O valor do termo desejado e " << termo << "\n";
                    break;
                }
            }
            
        }

    return 0;
}
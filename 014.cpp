#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    /*Em uma cidade se deseja sincronizar os semáforos. Com isto, quando um semáforo abre (fica verde), os veículos que nele estavam parados tendem a encontrar os próximos semáforos também abertos. Para que isto seja feito, os próximos semáforos precisam abrir um pouco depois, dependendo da velocidade permitida na via e da distância entre eles. Assim, ao abrir o semáforo, um veículo começa a acelerar até atingir a velocidade permitida, que mantém até chegar ao próximo semáforo, levando um certo tempo para percorrer essa distância. Para que encontre o próximo semáforo aberto, este deve abrir um pouco antes da chegada do veículo (por ex: 3 segundos antes). Faça assim um algoritmo que informe quanto tempo depois um semáforo deve abrir, dada as seguintes informações: 
    a. a distância desde o semáforo anterior
    b. a velocidade permitida da via
    c. a aceleração típica dos carros*/

 
    /*16.6²=0²+2*1.6*ΔS
      275.56=3.2ΔS
      ΔS=275.56/3.2
      ΔS= 86.11 metros
      
      1.6=16.6/ΔT
      1.6ΔT=16.6
      ΔT=16.6/1.6
      ΔT=10.37 segundos */

    int dist;
    float temp;
    float S;
    float T;
    float R, TR, VM, A;
    float V;
    char opc;

    inicio:
    system("cls");

    cout << "Insira a distancia entre o semaforo de partida e o seguinte: ";
    cin >> dist;
    cout << "Insira a velocidade maxima permitida da via: ";
    cin >> VM;
   
    V=VM/3.6;
    A=V/10;
    S=(2*A)/(V*V);
    T=V/A;
   
    R=dist-S;
    TR=R/V;
    temp=TR+T;
    temp-=5;
    
    cout << "O segundo semaforo devera abrir " << temp << " segundos apos o primeiro \n";
    cout << "Deseja calcular outro valor?[s/n] ";
    cin >> opc;
    if(opc=='s'){
        goto inicio;
    }

    return 0;
}
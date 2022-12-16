#include <iostream>

using namespace std;

int main(){
    /*Dado um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, e um país B com 7.000.000 de habitantes e uma taxa de natalidade de 2% ao ano, escreva um programa, que imprima o tempo necessário para que a população do país A ultrapasse a população do país B.*/

    float paisA, habA, paisB, habB, stop, tempo;

    habA=5000000;
    habB=7000000;
    paisA=0;
    paisB=0;
    tempo=0;
    
    cout << "Dado um pais A, com 5.000.000 de habitantes e uma taxa de natalidade de 3 porcento ao ano, e um pais B com 7.000.000 de habitantes e uma taxa de natalidade de 2 porcento ao ano, escreva um programa, que imprima o tempo necessario para que a populacao do pais A ultrapasse a populacao do pais B. \n\n";

    while(habA > 0){
        paisA=habA*1.03;
        habA=paisA;
        tempo++;

        paisB=habB*1.02;
        habB=paisB;

        if(paisA > paisB){
            cout << "Em " << tempo << " anos o pais A ira ultrapassar a populacao do pais B \n\n";
            break;
        }
    }
    
    return 0;
}
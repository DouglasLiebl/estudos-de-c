#include <iostream>

using namespace std;

int main(){
    //Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para Km/h. Para tal, multiplique o valor em m/s por 3,6. 

    int ms;
    int kmh;

    cout << "Informe a velocidade em m/s para que a conversao em Km/h seja realizada: ";
    cin >> ms;

    kmh=ms*3.6;

    cout << "O valor em Km/h e: " << kmh << "\n";


    return 0;
}
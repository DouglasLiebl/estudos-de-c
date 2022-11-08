#include <iostream>

using namespace std;

#define pi 3.14

int main(){

    //Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado seu raio e sua altura.

    double raio;
    double altura;

    cout << "Insira o valor do raio de um cilindro: \n";
    cin >> raio;
    cout << "Agora insira o valor da altura: \n";
    cin >> altura;

        double volume=pi*((raio*raio)*altura);
        
        cout << "O volume da lata de oleo que possui os valores fornecidos e: " << volume << " cm3 \n";

    return 0;
}

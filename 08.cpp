#include <iostream>

using namespace std;

int main(){

    //Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um valor de temperatura em Fahrenheit e exibi-lo em Celsius
    
    int fahrenheit;

    cout << "Insira uma temperatura em Fahrenheit para conversao em Celsius: \n";
    cin >> fahrenheit;

        int conversao=((fahrenheit-32)*5)/9;

        cout << fahrenheit << " graus fahrenheit sao " << conversao << " graus Celsius \n";

    return 0;
}
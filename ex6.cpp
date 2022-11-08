#include <iostream>

using namespace std;

int main(){

    //Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles.

    int dividendo;
    int divisor;
    

    cout << "De um numero para que seja realizada a divisao: ";
    cin >> dividendo;
    cout << "De o segundo numero: ";
    cin >> divisor;
    cout << "O resultado da divisao e: " << dividendo/divisor << " e o resto da operacao e: " << dividendo%divisor << "\n";

    return 0;
}

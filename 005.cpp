#include <iostream>

using namespace std;

int main(){

    //n1=n1+1 | n1=n1-1 | n1=n1*10 | n1=n1/10 Forma tradicional de incremento e decremento
    //n1+=1 | n1-=1 | n1*=10 | n1/=10 Forma contraida/simplificada de incremento e decremento
    //n1++ | n1-- Forma mais curta porem soma ou subtrai apenas 1 diferente das formas anteriores que podem usar qualquer valor

    int n1=10;

    //Operadores podem ser utilizados pós e pré fixados, quando utilizamos n1++ ou n1-- é necessario mais uma linha de saida para exibir o valor desejado, porém se utilizarmos ++n1 ou --n1 a operção ira ocorrer na mesma linha mostrando o resultado de imediato

    cout << n1 << "\n\n";
    
    return 0;
}
#include <iostream>

using namespace std;

int main(){

    int num=10;

    cout << num << "\n\n";

    //num=num*-1; Forma tradicional de inverter o valor de uma variavel
    //num=-num; Forma simplificada de inversão
    
    num=num*-1;
    num=-num;  
    //Quando o codigo for executado ele ira exibir: 10 -10 10, o primeiro é o valor da variavel, o segundo é a variavel invertida e o terceiro é o segundo invertido novamente resultando no mesmo valor do primeiro

    cout << num << "\n\n"; //Se for escrito -num na linha de saida o valor sera invertido momentaneamente pois o valor nao é armazenado como nas formas apresentadas anteriormente  

    return 0;
}
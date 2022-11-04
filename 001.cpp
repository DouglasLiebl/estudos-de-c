#include <iostream>

using namespace std;

int main(){
    
    //TIPO NOME;
    //TIPO NOME = VALOR;

    int vidas; //10, 25 / numeros inteiros
    char letra; //'B' / um caracter
    double decimal; //2.3999999999
    float decimal2; //2.4 - possui menor precisão decimal que double
    bool vivo; //true=verdadeiro / false=falso
    string nome; //"Bola" / textos longos
    // SEMPRE QUE UMA VARIAVEL FOR UTILIZADA E NAO POSSUIR UM VALOR ATRIBUIDO A ELA O COMPILADOR RETORNARA 0 PARA QUE NAO HAJA LIXO
    
    vidas=9;
    letra='D';
    decimal=4.3;
    decimal2=4.3;
    vivo=true;
    nome="Paralelepipedo";
    //SE O CODIGO FOR COMPILADO E EXECUTADO COMO ESTA REPRESENTADO ACIMA NAO ACONTECERA NADA
    
    cout << "Digite o numero de vidas: ";
    cin >> vidas;
    cout <<"Digite uma letra: ";
    cin >> letra;
    cout << "Reais: ";
    cin >> decimal;
    cout << "Centavos: ";
    cin >> decimal2;
    cout << "Digite seu nome: ";
    cin >> nome;
    //O COMANDO 'cin' SERVE PARA INTRODUZIR UM VALOR A UMA VARIAVEL ATRAVES DO TECLADO

    cout << vidas << '\n';
    cout << letra << '\n';
    cout << decimal << '\n';
    cout << decimal2 << '\n';
    cout << vivo << '\n';
    cout << nome << '\n';

    return 0;

}


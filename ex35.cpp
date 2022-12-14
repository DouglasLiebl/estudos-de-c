#include <iostream>

using namespace std;

int main(){
    /*Em diversas situações, é útil o uso de dígitos verificadores. Dígito verificador ou algarismo de controle é um mecanismo de autenticação utilizado para verificar a validade e a autenticidade de um valor numérico, evitando dessa forma fraudes ou erros de transmissão ou digitação. Uma das formas mais comuns de cálculo de dígito verificadores é o método conhecido por módulo 11. O cálculo do DV no módulo 11 é feito, é feito como se segue: para calcular o primeiro dígito verificador, cada dígito do número, começando da direita para a esquerda (do dígito menos significativo para o dígito mais significativo) é multiplicado, na ordem, por 2, depois 3, depois 4 e assim sucessivamente, até o primeiro dígito do número. O somatório dessas multiplicações dividido por 11. O resto desta divisão (módulo 11) é subtraído da base (11), o resultado é o dígito verificador. O Banco do Brasil utiliza o código módulo 11, substituindo por X o valor do dígito verificador quando este é 10. Escreva um programa que receba um número com os 4 primeiros dígitos de uma agência e imprima o número da agência completo (numero – dv).*/

    int numero, a1, a2, a3, a4, mod, dv;
    char X='X';

    cout << "Digite os 4 primeiros digitos de uma agencia: ";
    cin >> numero;

    /*dígito 5 = 42339 / 10000 = ------------------------------> 4.
    dígito 4 = 42339 / 1000 = 42 % 10 = 40 resto = -----------------------------> 2
    dígito 3 = 42339/ 100 = 423 % 100 = 4 resto = 23 % 10 = 2 resto = --------------> 3
    dígito 2 = 42339/10 = 4233 % 1000 = 4 resto 233 % 100 = 2 resto 33 % 10 = 3 resto = --------> 3
    dígito 1 = 42339%10000 = 4 resto 2339 % 1000 = 2 resto 339 % 100 = 3 resto 39 % 10 = 3 resto = 9*/

    a1=numero/1000;
    a2=(numero/100)%10;
    a3=((numero/10)%100)%10;
    a4=(((numero%1000)%100)%10);

    mod=(((a1*5)+(a2*4)+(a3*3)+(a4*2))%11);
    dv=11-mod;

    if(dv==10){
        cout << "O numero da agencia completo e: " << a1 << a2 << a3 << a4 << '-' << X << "\n";

    }
    if(dv!=10){
        cout << "O numero da agencia completo e: " << a1 << a2 << a3 << a4 << '-' << dv << "\n";
    }
    
    


    return 0;
}
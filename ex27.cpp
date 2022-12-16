#include <iostream>

using namespace std;

int main(){
    /*Um posto está vendendo combustíveis com a seguinte tabela de descontos:
    Álcool Até 25 litros, desconto de 2% por litro
    Acima de 25 litros, desconto de 4% por litro
    Gasolina Até 25 litros, desconto de 3% por litro
    Acima de 25 litros, desconto de 5% por litro
    Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível (codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,70 e o preço do litro do álcool é R$ 1,90.*/

    float gas, all, desc, val;
    char com;

    cout << "Deseja abastecer qual combustivel? [G] para gasolina / [A] para alcool \n";
    cin >> com;

    if(com=='G' || com=='g'){
        goto gasolina;
    }
    if(com=='A' || com=='a'){
        goto alcool;
    }
    
    gasolina:

    cout << "Quantos litros de gasolina deseja? ";
    cin >> gas;

    if(gas<=25){
        val=gas*2.70;
        desc=val/1.03;
        cout << "O valor equivalente a quantidade de gasolina desejada e de " << desc << " reais \n\n";
    }
    if(gas>25){
        val=gas*2.70;
        desc=val/1.05;
        cout << "O valor equivalente a quantidade de gasolina desejada e de " << desc << " reais \n\n";
    }

    return 0;

    alcool:

    cout << "Quantos litros de alcool deseja? ";
    cin >> all;

    if(all<=25){
        val=all*1.90;
        desc=val/1.02;
        cout << "O valor equivalente a quantidade de alcool desejada e de " << desc << " reais \n\n";
    }
    if(all>25){
        val=all*1.90;
        desc=val/1.04;
        cout << "O valor equivalente a quantidade de alcool desejada e de " << desc << " reais \n\n";
    }

     return 0;
}
#include <iostream>

using namespace std;

int main(){
    /*Escreva um programa que calcula o desconto previdenciário de um funcionário. Dado um salário, o programa deve retornar o valor do desconto proporcional ao mesmo. O cálculo segue a regra: o desconto é de 11% do valor do salário, entretanto, o valor máximo de desconto é 334,29, o que seja menor. */

    float sal, res, desc;

    cout << "Insira o valor do salario para que o calculo do desconto previdenciario seja calculado: ";
    cin >> sal;

    desc=sal*0.11;

    if(desc>334.29){
        cout << "O desconto e de 334.29 reais \n";
    }else{
        cout << "O desconto e de " << desc << " reais \n";
    }


    return 0;
}
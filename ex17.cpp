#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    /* Uma loja vende seus produtos no sistema entrada mais duas prestações, sendo a entrada maior do que ou igual às duas prestações, as quais devem ser iguais, inteiras e as maiores possíveis. Por exemplo, se o valor da mercadoria for R$ 270,00, a entrada e as duas prestações são iguais a R$ 90,00; se o valor da mercadoria for R$ 302,75, a entrada é de R$ 102,75 e as duas prestações são a iguais a R$ 100,00. Escreva um programa que receba o valor da mercadoria e forneça o valor da entrada e das duas prestações, de acordo com as regras acima. Observe que uma justificativa para a adoção desta regra é que ela facilita a confecção e o consequente pagamento dos boletos das duas prestações. */

  
    int p, val, ent, resto;
    char rtn;

    inicio:
    system("cls");

    cout << "Digite o valor do produto: ";
    cin >> val;

    p=val/3;
    resto=val%3;
    
    ent=p+resto;

    cout << "\nO valor da entrada a pagar e de " << ent << " reais, e o valor das duas prestacoes restantes e de " << p << " reais \n\n";
    cout << "Deseja calcular outro valor?[s/n] ";
    cin >> rtn;

    if(rtn=='s' || rtn=='S'){
        goto inicio;
    }

    return 0;
}
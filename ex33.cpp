#include <iostream>

using namespace std;

int main(){
    /*Uma Cia de pulverização utiliza avião para pulverizar lavouras. Os custos de pulverização dependem do tipo de praga e da área a ser contratada conforme a tabela:
    Tipo 1 – ervas daninhas R$ 50,00 por acre;
    Tipo 2 – gafanhotos R$ 100,00 por acre;
    Tipo 3 – broca R$ 150,00 por acre;
    Tipo 4 – todos acima R$ 250,00 por acre.
    Se a área a ser pulverizada for superior a 1000 acres, o fazendeiro tem um desconto de 5%. Em adição, qualquer fazendeiro cujo custo for maior do que R$ 750,00 tem um desconto de 10% sobre o valor que ultrapassar os R$ 750,00. Caso ambos os descontos se aplicam o da área é calculado antes. Fazer um algoritmo que leia: o tipo de pulverização (1 a 4) e área a ser pulverizada; e imprima o valor a ser pago*/

    float area, custo,desc, erva, gafanhotos, broca, all;
    char opc;

    erva=50.00;
    gafanhotos=100.00;
    broca=150.00;
    all=250.00;

    cout << "Insira a area total a ser pulverizada: ";
    cin >> area;
    cout << "Selecione o tipo de praga presente na area:\n" << "[1] Ervas daninhas \n[2] Gafanhotos \n[3] Broca \n[4] Todas as anteriores \n" << "Escolha: ";
    cin >> opc;

    if(opc=='1'){
        custo=erva*area;
        if(custo>750.00 && area<1001){
            desc=(((custo-750.00)/1.10)+750);
            cout << "O custo da pulverizacao sera de " << desc << " reais \n";   
        }
        if(area>1000){
            desc=((((custo/1.05)-750.00)/1.10)+750);
            cout << "O custo da pulverizacao sera de " << desc << " reais \n";
        }
    }
     if(opc=='2'){
        custo=gafanhotos*area;
        if(custo>750.00 && area<1001){
            desc=(((custo-750.00)/1.10)+750);
            cout << "O custo da pulverizacao sera de " << desc << " reais \n";   
        }
        if(area>1000){
            desc=((((custo/1.05)-750.00)/1.10)+750);
            cout << "O custo da pulverizacao sera de " << desc << " reais \n";
        }
    }
     if(opc=='3'){
        custo=broca*area;
        if(custo>750.00 && area<1001){
            desc=(((custo-750.00)/1.10)+750);
            cout << "O custo da pulverizacao sera de " << desc << " reais \n";   
        }
        if(area>1000){
            desc=((((custo/1.05)-750.00)/1.10)+750);
            cout << "O custo da pulverizacao sera de " << desc << " reais \n";
        }
    }
     if(opc=='4'){
        custo=all*area;
        if(custo>750.00 && area<1001){
            desc=(((custo-750.00)/1.10)+750);
            cout << "O custo da pulverizacao sera de " << desc << " reais \n";   
        }
        if(area>1000){
            desc=((((custo/1.05)-750.00)/1.10)+750);
            cout << "O custo da pulverizacao sera de " << desc << " reais \n";
        }
    }

    return 0;
}
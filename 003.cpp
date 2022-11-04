#include <iostream>

using namespace std;
//VARIAVEIS PODEM SER GLOBAIS OU LOCAIS, AS GLOBAIS PODEM SER UTILIZADAS EM QUALQUER PARTE DO CODIGO, JA AS LOCAIS SÓ PODEM SER UTILIZADAS DENTRO DA FUNÇAO EM QUE FORAM DETERMINADAS

int n1,n2; //VARIAVEIS GLOBAIS

int main(){
    
    //OPERADORES MATEMATICOS: + - / * % //TAMBEM PODEMOS UTILIZAR () PARA DAR PRIORIDADE À ALGUMA OPERTAÇAO
    
    int n3,n4; //VARIAVEIS LOCAIS
    int res, res2, res3;

    n1=23;
    n2=7;
    n3=4;
    n4=15;

    res=(n1+n2+n3+n4)-19;
    res2=n1+n2*n4;
    res3=res2%res;

    cout << "Operacao 1: " << res << "\n\n";
    cout << "Operacao 2: " << res2 << "\n\n";
    cout << "Resto da divisao da operacao 2 pela operacao 1: " << res3 << "\n\n";
    
    
    return 0;
}
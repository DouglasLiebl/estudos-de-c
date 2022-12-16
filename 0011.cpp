#include <iostream>

using namespace std;

int main(){

    int n=0;
    //se o codigo for executado ate a linha 10 o progama vai executar infinitamente pois n nao deixara de ser 0
    while(n++<10){      //a parada pode ser especifivada dirretamente na expressao: while(n++<10) porem apenas se for ++ ou --   
        cout << n << "\n";
                break; //no momento o programa esta contando +1 toda vez que e executado, porem pode ser utilizado cin >> n; dessa forma ele pedira um valor, repetira ele e ira parar de pedir apenas quando um numero maior que o da expressao
    }
    //antes de executar o comando while deve-se prestar atençao se a variavel a ser utilizada ja foi inicializada corretamente e se o metodo de parada ja foi especificado, tambem pode ser alinhado outro while dentro do primeiro
    cout << "\nContagem Finalizada \n\n";




    return 0;
}
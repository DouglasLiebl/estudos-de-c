#include <iostream>

using namespace std;

int main(){
    /*Os operadores and e or sao operadores logicos, ou seja, vao retornar verdadeiro ou falso
    AND precisa que todas operaçoes retornem verdadeiro para que ele retorne verdadeiro
    OR precisa que apenas uma operaçao retorne verdadeiro para que ele retorne verdadeiro
    Exemplo: Se o dia for de sol e o horario for antes do meio dia
    Utilizando o operador AND eu preciso que as duas condiçoes sejam concluidas
    Utilizando o operador OR eu preciso que apenas uma das condiçoes seja cumprida
    and=&&
    or=|| 
    Podemos usar negaçao utilizando o operrador !, pode ser utilizado antes de uma variavel para inverter o valor de true/false
    NOT=! 
    
    1=verdadeiro/true
    0=falso/false

    if(num==1)/if(num)
    if(num==0)/if(!num)
    */

    int num;

    num=8;
   
    if(num<4 || num>7 ){
        cout << "Valor aceito \n";
    }else{
        cout << "Nao aceito \n";
    }




    return 0;
}
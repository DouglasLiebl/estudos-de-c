#include <iostream>

using namespace std;

int main(){
    /*. No Futebol Americano, usa-se o Quarterback Rating como um índice que indica o desempenho do quarterback (quando maior, melhor). Ele é calculado como indicado a seguir: Calcula-se o percentual de passes completados em relação aos passes tentados pelo quarterback. Deste valor subtrai-se 0,3 e divide-se por 0,2. Este valor não deve ser maior que 2,375 ou menor que 0 (caso seja, ajusta-se o valor para 2,375 ou 0, respectivamente). 
    Em seguida, calcula-se a razão de jardas passadas pela quantidade de passes tentados. Deste valor, subtrai-se 3 e divide-se por 4. Novamente, este valor não deve ser maior que 2,375 ou menor que 0 (caso seja, procede-se como no caso anterior).Agora, calcula-se a razão de passes para touchdows pelo número de passes tentados. Divide-se o valor por 0,05. Mais uma vez, este valor não deve ser maior que 2,375 ou menor que 0 (caso seja, procede-se como de costume).Então, calcula-se a razão entre passes interceptados e o número de passes tentados. Deste valor, subtrai-se 0,095 e divide-se o resultado por 0,04. Como de praxe, este valor não deve ser maior que 2,375 ou menor que 0 (caso seja, atua-se como explicado).O quarterback rating é calculando somando-se as quatro parcelas anteriores, multiplicando a soma por 100 e dividindo-se o produto por 6.Escreva um programa, que leia o número de passes tentados, o número de passes completos, o número de jardas passadas, o número de passes para touchdown e o número de passes interceptados e informe o QB Rating do quarterback*/

    float pat, pac, jar, patc, pai;
    float vr1, vr2, vr3, vr4, qbr;

    cout << "Insira as informacoes solicitadas para o calculo do Quarterback Rating:\n" << "Passes tentados: ";
    cin >> pat;
    cout << "Passes completos: ";
    cin >> pac;
    cout << "Numero de jardas passadas: ";
    cin >> jar;
    cout << "Passes para touchdown: ";
    cin >> patc;
    cout << "Passes interceptados: ";
    cin >> pai;

    vr1=(((pac/pat)-0.3)/0.2);
    vr2=(((jar/pat)-3)/4);
    vr3=((patc/pat)/0.05);
    vr4=(((pai/pat)-0.095)/0.4);
    qbr=(((vr1+vr2+vr3+vr4)*100)/6);

    if(vr1>2.375){
        vr1=2.375;
    }
    if(vr1<0){
        vr1=0;
    }
    if(vr2>2.375){
        vr2=2.375;
    }
    if(vr2<0){
        vr2=0;
    }
    if(vr3>2.375){
        vr3=2.375;
    }
    if(vr3<0){
        vr3=0;
    }
     if(vr4>2.375){
        vr4=2.375;
    }
    if(vr4<0){
        vr4=0;
    }

    cout << "O Quarterback rating e de: " << qbr << "\n";

    return 0;
}
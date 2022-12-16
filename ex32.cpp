#include <iostream> 

using namespace std;

int main(){
    /*Em uma certificação são feitos são feitos 5 exames (I, II, III, IV e V). Escreva um programa que leia as notas destes exames e imprima a classificação do aluno, sabendo que a média é 70. Classificação:
    A – passou em todos os exames;
    B – passou em I, II e IV, mas não em III ou V;
    C – passou em I e II, III ou IV, mas não em V.
    Reprovado – outras situações.*/

    int n1, n2, n3, n4, n5;
    string nome;

    cout << "Insira o nome do Aluno: ";
    cin >> nome;
    cout << "Insira a nota do exame I: ";
    cin >> n1;
    cout << "Insira a nota do exame II: ";
    cin >> n2;
    cout << "Insira a nota do exame III: ";
    cin >> n3;
    cout << "Insira a nota do exame IV: ";
    cin >> n4;
    cout << "Insira a nota do exame V: ";
    cin >> n5;

    if(n1>=70 && n2>=70 && n3>=70 && n4>=70 && n5>=70){
        cout << "O aluno passou em todos os exames! \n";
    }
    if((n3<70 || n5<70) && (n1>=70 && n2>=70 && n4>=70)){
        cout << "O aluno passou em I, II e IV, mas nao em III ou V. \n";
    }
    if((n5<70) && (n3>=70 || n4>=70) && (n1>=70 && n2>=70) ){
        cout << "O aluno passou em I e II, III ou IV, mas nao em V. \njhg";
    }else{
        cout << "Reprovado \n";
    }






    return 0;
}
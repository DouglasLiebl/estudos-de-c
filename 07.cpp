#include <iostream>

using namespace std;

int main(){

    //Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias.

    int idade;

    cout << "Insira sua idade em dias: " << "\n";
    cin >> idade;

        int anos=idade/365;
        int res1=idade%365;
        int meses=res1/30;
        int dias=res1%30;
    
        cout << "Se a sua idade e " << idade << " entao voce tem " << anos << " anos, " << meses << " meses e " <<dias << " dias de idade \n";

    return 0;
}

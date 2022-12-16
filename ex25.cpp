#include <iostream>

using namespace std;

int main(){
    //Escreva um programa que leia uma letra e mostre se ela é vogal ou consoante.

    char abc;

    cout << "Digite uma letra: ";
    cin >> abc;

    if(abc=='a' || abc=='e' || abc=='i' || abc=='o' || abc=='u'){
        cout << "A letra digitada e uma vogal!\n";
    }else{
        cout << "A letra digitade e uma consoante!\n";
    }
    


    return 0;
}
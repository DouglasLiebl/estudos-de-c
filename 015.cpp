#include <iostream>

using namespace std;

int main(){
    //Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente longa. Assumindo que seja possível medir sua sombra e a do prédio no chão, e que você lembre da sua altura, faça um programa para ler os dados necessários e calcular a altura do prédio.

    float sa, sp, at, at2, ap;

    cout << "Insira a medida da sua sombra para que a equacao seja realizade: ";
    cin >> sa;
    cout << "Agora insira a medida da sombra do predio que voce obteve: ";
    cin >> sp;
    cout << "Por fim insira sua altura: ";
    cin >> at;

    at2=at*sp;
    ap=at2/sa;

    cout << "A altura do predio e de " << ap << " metros \n";

    return 0;
}
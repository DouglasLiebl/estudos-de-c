#include <iostream>

using namespace std;

int main(){
    //Escreva um algoritmo que leia 2 valores (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x=y=0)

    int x, y;

    cout << "Digite o valor de x e de y de um determinado plano cartesiano: \n" << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    if(x >0 && y > 0){
        cout << "Estas cordenadas estao localizadas no primeiro quadrante do plano \n";
    }
    if(x < 0 && y > 0){
        cout << "Estas cordenadas estao localizadas no segundo quadrante do plano \n";
    }
    if(x < 0 && y < 0){
        cout << "Estas cordenadas estao localizadas no terceiro quadrante do plano \n";
    }
    if(x >  0 && y <0){
        cout << "Estas cordenadas estao localizadas no quarto quadrante do plano \n";
    }
    if(x==0 && y==0){
        cout << "Estas coordenadas estao localizadas na origem do plano \n";
    }


    return 0;
}
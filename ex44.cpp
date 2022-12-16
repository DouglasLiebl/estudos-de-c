#include <iostream>

using namespace std;

int main(){
    /* A série de Fibonacci é formada pela sequencia: 
        • 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... */

    int tdesj, termo , ultimo, penultimo, stop;
    penultimo=1;
    ultimo=1;
    termo=1;
    stop=2;
    cout << "Qual termo deseja encontrar? ";
    cin >> tdesj;

    if(tdesj==1 || tdesj==2){
        cout << "O numero correspondente e " << termo << "\n"; 
    }else if(tdesj>2){
        while(termo>0){
            termo=penultimo+ultimo;
            penultimo=ultimo;
            ultimo=termo;
            stop++;

            if(stop==tdesj){
                break;
            }
        }
    }


    cout << termo;


    return 0;
}
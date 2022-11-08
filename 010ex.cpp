#include <iostream>

using namespace std;

int main(){

    int num;

    cout << "Insira um numero: \n";
    cin >> num;

    if(num<=15){
        int eq1=num*num;

        cout << "O quadrado do numero inserido e: " << eq1 << "\n\n";
    }

    if(num>15){
        int eq2=num/2;
        
        cout << "A metade do valor inserido e: " << eq2 << "\n\n";
    }


    return 0;
}

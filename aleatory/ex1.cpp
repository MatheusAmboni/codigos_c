#include <iostream>

using namespace std;

bool exist(int valores[], int tam, int valor){
    for(int i = 0; i<tam; i++){
        if(valores[i]==valor){
            return true;
        }
    return false;
    }
}

void Aleatorio(int numero[], int quantNumero, int Limite){
    srand(time(NULL));

    for(int i=0;i<quantNumero;i++){
        numero[i] = rand() % Limite;
    }
}

int main(){
    int numeros[100];
    Aleatorio(numeros, 100, 1000);

    cout << "Hello" << endl;
    return 0;
}
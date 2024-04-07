#include <iostream>
using namespace std;
void ler_vetor1(double v1[], int tam){
    for(int i = 0; i < tam; i++){
        cout<< "Digite um valor: ";
        cin>>v1[i];
    }
}

void imprimir_v1(double v1[], int tam){
    for(int i = 0; i < tam; i++){
        cout<< v1[i] << " | ";
    }
    cout<<endl;
}

double media_vetor(double v1[], double tam){
    double soma = 0;
    for (int i = 0; i < tam; i++){
        soma += v1[i];
    }
    double media = soma/tam;
    return media;
}

int main(){
    const int TAM = 5;
    double vetor1[TAM], vetor2[TAM];

    ler_vetor1(vetor1, TAM);
    imprimir_v1(vetor1, TAM);

    ler_vetor1(vetor2, TAM);
    imprimir_v1(vetor2, TAM);

    double media1 = media_vetor(vetor1, TAM);
    cout<<"A media do vetor 1 eh: "<< media1;
    double media2 = media_vetor(vetor2, TAM);
    cout<<"A media do vetor 1 eh: "<< media2;

    if(media1 > media2){
        cout<<"\nA maior media eh do vetor 1";
    }
    else{
        cout<<"A maior media eh do vetor 2";
    }
}
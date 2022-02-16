#include <iostream>
#include <ctime>
using namespace std;

void Vettore_negativo_int(int v[], int n){
    for (int i = 0; i < n; i++){
        v[i] =  -1;
    }
}

int Lunghezza_vettore_int(int v[], int n){
    int cont = 0;

    for (int i = 0; i < n; i++){
        if (v[i] >= 0){
            cont++;
        }
    }

    return cont;
}

void Genratore_random_int(int v[], int lunghezza_vettore, int numero_max_rand){
    srand(time(NULL));

    for (int i = 0; i < lunghezza_vettore; i++){
        int Random = rand()%numero_max_rand;
        v[i] = Random;
    }
}

void Stampa_Vettore_int(int v[], int n){
    for (int i = 0; i < n; i++){
        cout << v[i] << "\t";
    }
    cout << endl;
}

void Stampa_Vettore_char(char v[], int n){
    for (int i = 0; i < n; i++){
        cout << v[i] << "\t";
    }
    cout << endl;
}

void Generatore_random_char(char v[], int lunghezza_vettore){
    srand(time(NULL));
    for (int i = 0; i < lunghezza_vettore; i++){
        int Random = 65+rand()%25;
        v[i] = (char)Random;
    }
}

int Contatore_caratteri_uguali_char(char v1[], char v2[], int n){
    int conta = 0;
    int conta2 = 0;
    for (int i = 0; i < n; i++){
        if (v1[i] == v2[i]){
            conta++;
        }
        if (v1[i+1] != v2[i+1] && i+1 != n){
            conta2 = conta;
            conta = 0;
        }
    }
    return conta;
}

int main(){
    const int N = 100;
    int vettore[N];

    char vet1[N] = {'n', 'f', 'z', 'g', 't'};
    char vet2[N] = {'n', 'f', 'z', 'g', 't'};

    /*
    Generatore_random_char(vet, 10);
    Stampa_Vettore_char(vet, 10);
    cout << endl;
    Generatore_random_char(vet2, 10);
    Stampa_Vettore_char(vet2, 10);
    */

    Stampa_Vettore_char(vet1, 5);
    Stampa_Vettore_char(vet2, 5);

    int numero = Contatore_caratteri_uguali_char(vet1, vet2, 5);

    cout << numero;
}

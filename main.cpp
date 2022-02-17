#include <iostream>
#include <ctime>
using namespace std;

/**
 * @brief Funzione che riempie un vettore con un numero minore di 0
 * 
 * @param v vettore di tipo int
 * @param n lunghezza vettore
 */
void Vettore_negativo_int(int v[], int n){
    for (int i = 0; i < n; i++){
        v[i] =  -1;
    }
}

/**
 * @brief Funzione che restituisce la lunghezza di un vettore "per riconoscere i casonetti vuoti devono essere riempiti a un numero minore di 0"
 * 
 * @param v vettore di tipo int
 * @param n lunghezza vettore
 * @return int 
 */
int Lunghezza_vettore_int(int v[], int n){
    int cont = 0;

    for (int i = 0; i < n; i++){
        if (v[i] >= 0){
            cont++;
        }
    }

    return cont;
}

/**
 * @brief Funzione che genera numeri randomici da 0 a num_max_rand
 * 
 * @param v vettore di tipo int
 * @param lunghezza_vettore
 * @param num_max_rand numero massimo generato (da 0 a max)
 */
void Genratore_random_int(int v[], int lunghezza_vettore, int num_max_rand){
    srand(time(NULL));

    for (int i = 0; i < lunghezza_vettore; i++){
        int Random = rand()%num_max_rand;
        v[i] = Random;
    }
}

/**
 * @brief Funzione stampa vettore int
 * 
 * @param v vettore di tipo int
 * @param n quantità cassonetti stampati
 */
void Stampa_Vettore_int(int v[], int n){
    for (int i = 0; i < n; i++){
        cout << v[i] << "\t";
    }
    cout << endl;
}

/**
 * @brief Funzione stampa vettore char 
 * 
 * @param v vettore di tipo char
 * @param n quantità cassonetti stampati
 */
void Stampa_Vettore_char(char v[], int n){
    for (int i = 0; i < n; i++){
        cout << v[i] << "\t";
    }
    cout << endl;
}

/**
 * @brief Funzione che genera randomicamente una lettera MAIUSCOLA e inserisce il contenuto in un vettore di tipo char 
 * 
 * @param v vettore di tipo char
 * @param lunghezza_vettore quantità char generati
 */
void Generatore_random_char(char v[], int lunghezza_vettore){
    srand(time(NULL));
    for (int i = 0; i < lunghezza_vettore; i++){
        int Random = 65+rand()%25;
        v[i] = (char)Random;
    }
}

/**
 * @brief Funzione che conta i caratteri uguali tra due vettori di tipo char (v1[ ] e v2[ ]) \n 
 * 
 * 
 * @param v1  vettore di tipo char
 * @param v2  vettore di tipo char
 * @param n   lunghezza del vettore più corto
 * @return int caratteri uguali
 */
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

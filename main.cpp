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
void Stampa_vettore_int(int v[], int n){
    for (int i = 0; i < n; i++){
        cout << v[i] << "\t";
    }
    cout << endl;
}

/**
 * @brief Funzione che inverte il vettore inserito
 * 
 * @param v vettore di tipo int
 * @param n linghezza vettore
 */
void Inveriti_vettore_int(int v[], int n){
    int Temp;
    for (int i = 0; i < n/2; i++){
        Temp = v[i];
        v[i] = v[n-1-i];
        v[n-1-i] = Temp;
    }
}

/**
 * @brief Funzione stampa vettore char 
 * 
 * @param v vettore di tipo char
 * @param n quantità cassonetti stampati
 */
void Stampa_vettore_char(char v[], int n){
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
    
    for (int i = 0; i < lunghezza_vettore; i++){
        int Random = 65+rand()%25;
        v[i] = (char)Random;
    }
}

/**
 * @brief Funzione che controlla se c'è la presenza di una vocale maisucola
 * 
 * @param v vettore di tipo char
 * @param n lunghezza vettore
 * @return 1 if true 0 if false
 */
int Controlla_contenuto_vocale_maiuscola(char v[], int n){
    int valore = 0;
    for (int i = 0; i < n; i++){
        if (v[i] == 'A' || v[i] == 'E' || v[i] == 'I' || v[i] == 'O'|| v[i] == 'U'){
            valore = 1;
        }
    }
    return valore;
}

/**
 * @brief Funzione che conta i caratteri uguali tra due vettori di tipo char (v1[ ] e v2[ ]) \n 
 * 
 * 
 * @param v1  vettore di tipo char
 * @param v2  vettore di tipo char
 * @param n   lunghezza del vettore più corto
 * @return int caratteri uguali. Se vettori uguali return 0.
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
        if (conta == n){
            return 0;
        }
    }
    if (conta2 > conta){
        return conta2;
    }else{
        return conta;
    }
}

/**
 * @brief Funzione returna 1 se ci sono 3 consonanti di fila
 * 
 * @param v vettore di tipo char 
 * @param n lunchezza vettore
 * @return 1 se ture 0 se false
 */
int Controllo_tre_consonanti(char v[], int n){
    int contatore = 0;
    int contatore2 = 0;
    for (int i = 0; i < n; i++){
        if (v[i] != 'A' || v[i] != 'E' || v[i] != 'I' || v[i] != 'O'|| v[i] != 'U'){
            cout << "contatore in for = " << contatore << endl;
            contatore++;
            
        }
        if ((v[i+1] == 'A' || v[i+1] == 'E' || v[i+1] == 'I' || v[i+1] == 'O'|| v[i+1] == 'U') && i+1 != n){
            contatore2 = contatore;
            contatore = 0;
        }
    }

    if (contatore2 >= 3 || contatore >= 3){
        return 1;
    }
    else{
        return 0;
    }
    

    cout << "contatore = " << contatore << endl;
    cout << "contatore2 = " << contatore2 << endl;
}

int main(){
    system("cls");
    srand(time(NULL));
    const int N = 7;

    char vet1[N] = {'f', 'A', 't', 'f', 'A', 'd', 's'};
    char vet2[N];
    
    Stampa_vettore_char(vet1, N);

    int val = Controllo_tre_consonanti(vet1, N);

    cout << val;

}

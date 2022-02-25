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
    int cont = 0;
    int contatore2 = 0;
    for (int i = 0; i < n; i++){
        if (!(v[i] == 'A' || v[i] == 'E' || v[i] == 'I' || v[i] == 'O'|| v[i] == 'U')){
            cont++;
        }
        if (v[i] == 'A' || v[i] == 'E' || v[i] == 'I' || v[i] == 'O'|| v[i] == 'U'){
            if (cont > contatore2){
                contatore2 = cont;
                cont = 0;
            }else{
                cont = 0;
            }
            
        }
        cout << "Contatore: " << cont << endl;
    }
    if (cont > contatore2){
        contatore2 = cont;
    }

    if (contatore2 >= 3){
        return 1;
    }
    else{
        return 0;
    }
}

/**
 * @brief Funzione che controlla se ci sonon doppie nel codice
 * 
 * @param v vettore di tipo char
 * @param n lunghezza vettore
 * @return int 1 if true 0 if flase
 */
int Controllo_doppia(char v[], int n){
    for (int i = 0; i < n; i++){
        if (v[i] == v[i+1] && i+1 != n){
            return 1;
        }
    }
    return 0;
}

/**
 * @brief Funzione che ritorna 0 se non ci sono segni di separazione, invece se ci sono ritorna la quantità
 * 
 * @param v vettore di tipo char
 * @param n lunghezza vettore
 * @return int quantità segni di separzione
 */
int Controlla_segno_separazione(char v[], int n){
    int cont = 0;
    for (int i = 0; i < n; i++){
        if(v[i] == '?' || v[i] == '!' || v[i] == '.' || v[i] == ';' || v[i] == ',' || v[i] == ' '){
            cont++;
        }
    }
    return cont;
}

/**
 * @brief Funzione che sostituisce dei caratteri in un vettore con altri caratteri
 * 
 * @param v 
 * @param n 
 */
void Cambia_sequenza_in_vettore(char v[], int n){
    int contatore1 = 0;
    int contatore2 = 0;
    int inizio;
    char check;
    char v_riconosci[20];
    char v_cambia[20];
    cout << "Inserire - se vui interrompere la sequenza" << endl;
    do{
        cout << "Inserire lettera: ";
        cin >> check;
        if (check != '-'){
            v_riconosci[contatore1] = check;
            contatore1++;
        }
    }while(check != '-');

    cout << "Inserire contenuto con cui vuoi rimpiazzare la sequenza" << endl;
    do{
        cout << "Inserire lettera: ";
        cin >> check;
        if (check != '-'){
            v_cambia[contatore2] = check;
            contatore2++;
        }
    }while(contatore2 != contatore1);
    
    for (int i = 0; i < n; i++){
        if(v[i] == v_riconosci[0]){
            inizio = 0;
            for (int j = 0; j < contatore1; j++){
                if(v[i+inizio] == v_riconosci[j]){
                    inizio++;
                }
            }
            if(inizio==contatore1){
                for (int j = 0; j < inizio; j++){
                    v[i+j] = v_cambia[j];
                }
            }else{
                cout << "Non trovo la parte che vuoi sostituire: ";
                for (int k = 0; k < contatore1; k++){
                    cout << v_cambia[k] << " ";
                }
                cout << endl;
                for (int k = 0; k < n; k++){
                    cout << v[k] << " ";
                }
            }
        }
    }
}

void Oggi_piove(){
    char piove[10] = {'o', 'g', 'g', 'i', ' ', 'p', 'i', 'o', 'v', 'e'};
    char tempo[21] = {'d', 'o', 'm', 'a', 'n', 'i', ' ', 's', 'a', 'r', 'a', ' ', 'b', 'e', 'l', ' ', 't', 'e', 'm', 'p', 'o'};   

    char fusione[31];

    for (int i = 0; i < 10; i++){
        piove[i] = piove[i]-32;
    }

    for (int i = 0; i < 31; i++){
        if (i < 10){
            fusione[i] = piove[i];
        }else{
            fusione[i] = tempo[i-10];
        }
    }

    for (int i = 0; i < 31; i++){
        if (fusione[i] == 'a' || fusione[i] == 'e' || fusione[i] == 'o' || fusione[i] == 'u' || fusione[i] == 'A' || fusione[i] == 'E' || fusione[i] == 'I' || fusione[i] == 'O' || fusione[i] == 'U'){
            fusione[i] = 'i';
        }
        cout << fusione[i];
    }

   
}

int main(){
    system("cls");
    srand(time(NULL));
    const int N = 7;

    char vet1[N] = {'B', 'o', 'l', 'z', 'a', 'n', 'o'};

    Oggi_piove();

}

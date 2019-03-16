#include <iostream>
using namespace std;
struct indirizzo{
    char via[200];
    char civico[50];
    char cap[10];
    char citta[50];
    char provincia[5];
};

struct luogo {
    char nome[50];
    char categoria[20];
    struct indirizzo localita;
};

//che cosa deve fare questa funzione?
//dobbiamo stampare i dati del luogo che viene passato
void stampa(struct luogo l){
cout<< l.nome<<" "<< l.categoria<<" "<<endl;
cout<<l.localita.via<<" "<<l.localita.civico<<" "<<l.localita.cap<<" "<<l.localita.citta<<" "<<l.localita.provincia<<endl;
}

int main(){
struct luogo dati[3];

struct indirizzo ind_scuola={"via del pirata","50","12345","Bojon","VE"};
struct luogo scuola={"scuola pirata","liceo",ind_scuola};

struct indirizzo ind_casa={"via sportiveggiante","5/4","54321","Porto Tolle","VE"};
struct luogo casa={"casa sportiva","abitazione",ind_casa};

struct indirizzo ind_palestra={"via dei pigri","13","15243","Roma","VE"};
struct luogo palestra={"pigrafit","palestra",ind_palestra};

dati[0]=scuola;
dati[1]=casa;
dati[2]=palestra;

int n=0;
cin>>n;

switch(n){
case 0: stampa(dati[0]);
break;
case 1: stampa(dati[1]);
break;
case 2: stampa(dati[2]);
break;
default: cout<<"nessun indirizzo disponibile";
}
}


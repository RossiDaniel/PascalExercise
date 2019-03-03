#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

struct nome_articolo{
    char nome[100];
};

struct articolo {
    unsigned codice;
    struct nome_articolo structnome;
    unsigned prezzo;
};

struct fattura {
    unsigned codice;
    struct articolo article[100];
    unsigned numero_articoli;
    unsigned prezzotot;
};

char* stampa(int x){
    switch(rand()%16){
        case ( 0 ):
        char str[]={" Agende "};
        return str;
        case ( 1 ):
        char str[]={" Album di foto "};
        return str;
        case ( 2 ):
        char str[]={" Alimentazione e nutrizione "};
        return str;
        case ( 3 ):
        char str[]={" Annunci "};
        return str;
        case ( 4 ):
        char str[]={" Autunno "};
        return str;
        case ( 5 ):
        char str[]={" Biglietti "};
        return str;
        case ( 6 ):
        char str[]={" Biglietti da visita "};
        return str;
        case ( 7 ):
        char str[]={" Brochure "};
        return str;
        case ( 8 ):
        char str[]={" Budget "};
        return str;
        case ( 9 ):
        char str[]={" Business "};
        return str;
        case ( 10 ):
        char str[]={" Buste "};
        return str;
        case ( 11 ):
        char str[]={" Calendari "};
        return str;
        case ( 12 ):
        char str[]={" Certificati "};
        return str;
        case ( 13 ):
        char str[]={" Compleanno "};
        return str;
        case ( 14 ):
        char str[]={" Congratulazioni "};
        return str;
        case ( 15 ):
        char str[]={" Copertine fax "};
        return str;
    }
}

int main () {

srand(time(NULL));

struct articolo lsarticoli[100];
for(unsigned i=0; i<100;i++){

    struct nome_articolo art_name={stampa(rand()%16)};
    struct articolo p= {i,art_name,rand()%100};
    lsarticoli[i]=p;
}

struct fattura lsfatture[50];

for (unsigned i=0; i<50; i++){
    struct fattura f={rand()%1000};
    f.numero_articoli= rand()%10;
    f.prezzotot=0;
    for(unsigned j=0; j< f.numero_articoli; j++){
        f.article[j]=lsarticoli[rand()%100];
        f.prezzotot=f.article[j].prezzo+f.prezzotot;
    }
    lsfatture[i]= f;
}

struct fattura fmax=lsfatture[0];
for(unsigned i=1; i<50; i++){
    if(lsfatture[i].prezzotot> fmax.prezzotot){
        fmax= lsfatture[i];
    }
}
std::cout<< "codice: "<<fmax.codice;
std::cout<< "prezzo: "<<fmax.prezzotot<<endl;
for(unsigned i=0; i<fmax.numero_articoli; i++){
    std::cout<< "codice: "<<fmax.article[i].codice;
    std::cout<< "nome: "<<fmax.article[i].structnome.nome;
    std::cout<<"prezzo: "<<fmax.article[i].prezzo<<endl;
}

}
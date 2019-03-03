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

int main () {

srand(time(NULL));

struct articolo lsarticoli[100];
for(unsigned i=0; i<100;i++){
    struct nome_articolo art_name={"prosciutto"};
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


//lista delle fatture
//ogni fattura ha un certo numero di articoli

int counter[100];
for(int i=0; i<100; i++){
    counter[i]=0;
}

for(int i=0; i< 50; i++){
    struct fattura f=lsfatture[i];
    for(int j=0; j<f.numero_articoli; j++){
        counter[f.article[j].codice]++;
    }
}

for(int i=0; i<100; i++){
    std::cout<<counter[i]<<" ";
}


}

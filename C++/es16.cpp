#include<iostream>

struct Contatto{
    char nome[100];
    char cognome[100];
    char numero[100];
};

struct Rubrica{
    Contatto lista[100];
};


int main(){

    Rubrica r;
    for(int i=0; i<10; i++){
        Contatto p={"pippo","baudo","12345"};
        r.lista[i]=p;
    }
    std::cout<<"stampa rubrica"<<std::endl;
    for(int i=0; i<10; i++){
        std::cout<<"nome: "<<r.lista[i].nome<<" cognome: "<<r.lista[i].cognome<<" numero: "<<r.lista[i].numero<<std::endl;
    }
    
}
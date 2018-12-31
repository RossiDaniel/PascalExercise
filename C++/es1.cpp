#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

using namespace std;

int main(){
    //inizializzazione delle variabili
    int N=10;
    cin>> N;
    int A[10];
    //popolamento dell'array
    srand (time(NULL));
    for(int i=0; i<N; i++){
        A[i]=rand()%100;
        cout<<A[i]<<" ";
    }
    cout<<endl;
    //creazione variabili somma e prodotto
    int somma,prod=0;
    if(N>0){
        prod=A[0];
    }
    //esecuzione del ciclo
    for(int i=1; i<N; i++){
        if(i%2==0){
            prod= prod *A[i];
        }
        else{
            somma= somma+A[i];
        }
    }
    //stampa risultati
    cout<<"la somma è:"<<somma<<endl;
    cout<<"il prodotto è:"<<prod<<endl;
}
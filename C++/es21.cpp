#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

void stampa1(int pippo[],int pluto){
    for(int i=0;i<pluto; i++){
        if(pippo[i]<=20&&pippo[i]>0){
            cout<<pippo[i]<<" ";
        }
    }
}

void stampa2(int pippo[], int pluto){
    int num_pari=0;
    for(int i=0; i<pluto&&num_pari<20; i++){
        if(pippo[i]%2==0){
            cout<<pippo[i]<<" ";
            num_pari=num_pari+1;
        }
    }
}

void stampa3(int pippo[], int pluto){
    int num_dispari=0;
    for(int i=0;i<pluto&&num_dispari<20; i++){
        if(pippo[i]%2==1){
            cout<<pippo[i]<<" ";
            num_dispari=num_dispari+1;
        }
    }
}
int main(){

int index=0;
    
int A[400];
srand(time(NULL));
int n_l=rand()%200+200;
for(int i=0;i<n_l; i++){
    A[i]=rand()%50;
}

cin>>index;
switch(index){
    case 1: stampa1(A,n_l);
    break;
    case 2: stampa2(A,n_l);
    break;
    case 3:stampa3(A,n_l);
    break;
    default: cout<<"index non valido";
    break;
}

}



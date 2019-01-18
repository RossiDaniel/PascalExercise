#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main (){
    int OreStudio[30];
    srand (time(NULL));
    for(int i=0; i<30; i++){
        OreStudio[i]=rand()%5;
    }
    //primo punto
    int somma=0;
    for(int i=0; i<30; i++){
        somma=somma+OreStudio[i];
    }
    //secondo punto
    int max=0;
    for(int i=0; i<30; i++){
        if(OreStudio[i]>max){
            max=OreStudio[i];
        }
    }

    int max_index[30];
    int n=0;
    for(int i=0;i<30; i++){
        if(OreStudio[i]==max){
            max_index[n]=i;
            n=n+1;
        }
    }
    //terzo punto
    int min_index[30];
    int c=0;
    for(int i=0;i<30; i++){
        if(OreStudio[i]==0){
            min_index[c]=i;
            c=c+1;
        }
    }
}

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main (){
    int A[100][100];
    srand(time(NULL));
cout<<"   ";
    for(int i=0; i<100; i++){
        cout<<i%10<<" ";
    }
    cout<<endl<<endl;
    for(int i=0; i<100;i++){
        cout<<i<<" ";
        if(i<10){
            cout<<" ";
        }
        for(int j=0; j<100; j++){
            A[i][j]=rand()%10;
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    int nmax=-1;
    int xmax, ymax=0;
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            for(int y=0; y<100; y++){
                for(int x=0; x<100; x++){
                    int n=0;
                    bool ok=true;
                    for(int k=0; y+k<100 && x+k<100 && ok; k++){
                        if(A[y+k][j]==A[i][x+k]){
                            n=n+1;
                        }
                        else{
                                ok=false; 
                        }
                        
                    }
                    if(n>nmax){
                        nmax=n;
                        xmax=x;
                        ymax=i;
                    }
                }
            }
        }
    }
    cout<<"il match massimo e' di lunghezza "<<nmax<<" alle coordinate ( "<<xmax<<" , "<<ymax<<" )"<<endl;
    for(int l=0; l<nmax; l++){
        cout<<A[ymax][xmax+l]<<" ";
    } 
}
#include<iostream>
using namespace std;
int main ()
{
    int A[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>> A[i][j];
        }
    }
    int max_i= 0;
    int somma= 0;
    for(int i=0; i<4; i++){
        int c=0;
        for(int j=0; j<4; j++){
            c= c+A[i][j];
        }
        if(somma<c){
            somma=c;
            max_i=i;
        }
    }
    cout<< "la riga di somma massima e' "<<max_i<<endl;
}
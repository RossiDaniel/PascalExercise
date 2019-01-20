#include<iostream>
using namespace std;
int main (){
    int N=0;
    cin>> N;
    double A[100];
    for(int i=0; i<N; i++){
        cin>> A[i];
    }
     double sconto=0;
    switch (N)
    {
        case 1:
            sconto= 10;
        break;
        case 3:
            sconto= 20;
        break;
        case 5:
            sconto= 30;
        break;
        case 10:
            sconto= 35;
        break;
        
        default: 
            sconto= 40;	
        break;
    }
    double somma= 0;
    for(int i=0; i<N; i++){
        somma=somma + A[i];
    }
    cout<<sconto<<endl;
    cout<< "il costo iniziale e': "<<somma<<endl;
    cout<< " il costo scontato e': "<<(somma/100)*(100-sconto);
}
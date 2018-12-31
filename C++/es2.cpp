#include <iostream>
using namespace std;

int main (){
    int A[4][3];
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cin>> A[i][j];
        }
    }
    int B[4];
    for(int i=0; i<4; i++){
        B[i]=0;
        for(int j=0; j<3; j++){
            B[i]=B[i]+A[i][j];
        }
    }
    for(int i=0; i<4; i++){
        cout<< B[i] <<endl;
    }
    
}
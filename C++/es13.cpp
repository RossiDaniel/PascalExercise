#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main (){
    int A[10][10];
    bool B[10][10];
    srand (time(NULL));
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            A[i][j]=rand()%10;
        }
    }

    for(int i=0; i<10;i++){
        for(int j=0; j<10; j++){
            B[i][j]=true;
            for(int y=0; y<10 && B[i][j]; y++){
                B[i][j]=false;
                for(int x=0; x<10 &&!B[i][j]; x++){
                    if(A[i][x]==A[y][j]){
                        B[i][j]=true;
                    }
                }
            }
        }
    }
    
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
}
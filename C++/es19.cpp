#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void available_path(bool B[],int i, int j,int l1, int l2){
    if(j==0){
        B[0]=0;
    }
    if(j==l2-1){
        B[2]=0;
    }
}

bool search_path(bool A[100][100],int i, int j,int l1, int l2){
    cout<<"("<<i<<", "<<j<<"){"<<endl;
    if(i == l1-1){return true;}
    bool B[3]={1,1,1};
    available_path(B,i,j,l1,l2);
    int J=j-1;
    for(int z=0; z<3;z++){
        if(B[z] == 1 && A[i+1][J+z] == 1){
            bool result=search_path(A,i+1,J+z,l1,l2);
            if(result == true){
                return true;
            }
        }
    }
    cout<<"}"<<endl;
    return false;
}

bool input_data(){
    return rand()%2;
}

int main (){
    int l1;
    int l2;
    bool A[100][100];
    cin>>l1;
    cin>>l2;
    srand(time(NULL));

    for (int i=0; i<100 && i<l1; i++){
        for (int j=0; j<100 && j<l2; j++){
            A[i][j]= input_data();
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    bool ok=false;
    for (int i=0; i<100 && i<l1 && ok==false; i++){
        if(A[0][i]==1){
            ok=search_path(A,0,i,l1,l2);
        }
        cout<<"ok: "<<ok<<endl;
        cout<<endl;

    }
}
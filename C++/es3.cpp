#include <iostream>
using namespace std;
int main (){
    int A[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            A[i][j]= i*4+j+1;
        }
    }
    int max_i=0, min_i=0, max_j=0, min_j=0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(A[i][j]> A[max_i][max_j]){
                max_i= i;
                max_j= j;
            }
            if(A[i][j]< A[min_i][min_j]){
                min_i= i;
                min_j= j;
            }
        }   
    }
    cout<< max_i<<" "<<max_j<<endl;
    cout<< min_i<<" "<<min_j<<endl;
}
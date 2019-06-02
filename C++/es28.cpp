#include<iostream>
#include<stdlib.h>
using namespace std;

bool search_match(int*A,int a,int *B,int b,int dimB)
{
    if(b==dimB){
        return true;
    }
    else{
        if(A[a+b]==B[b])
        {
            return search_match(A, a, B, b+1, dimB);
        }
        else
        {
            return false;
        }
    }
}


                                //indice di A=a
int pattern_matching(int *A,int dimA, int a, int *B, int dimB)
{
    if(a==dimA-dimB+1){
        return -1;
    }
    else{
        if(search_match(A,a,B,0,dimB)){
            return a;
        }
        else
        {
            return pattern_matching(A,dimA,a+1,B,dimB);
        }
    }
}

int main(){
    int A[100]={0,1,0,1,2};
    int B[10]={1,0,1};
    
    cout<<pattern_matching(A,5,0,B,3);
}
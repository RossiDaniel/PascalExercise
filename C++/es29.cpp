#include<iostream>
#include<stdlib.h>
using namespace std;


int searchric(int l, int r,int A[]){
   if(l==r){
        A[0]=1;
        return 1;
    }
    int m = (l+r)/2;
    int n=searchric(l,m,A);
    for (int i=m+1;i<=r;i++){
        bool find=true;
        for(int j=0;j<n && find;j++){
            if(i%A[j] == 0){
                find=false;
            }
        }
        if(find){
            A[n]=i;
            n=n+1;
        }
    }
    return n;
}

bool numeroprimoric(int num){
    int l = 1;
    int r = num/2;
    int A[100000];

    int n=searchric(l,r,A);
    bool find = true;
    for(int i=0; i<n && find; i++)
    {
        if(num%A[i]==0)
        {
            find=false;
        }
    }
    return find;
}


bool numeroprimoit(int num){
    bool find=false;
    for(int i=1; i<num/2 && !find; i++)
    {
        if(num%i==0)
        {
            find=true;
        }
    }
    return find;
}



 int main(){
     int num = 24862048;
     cout<<numeroprimoric(num);
}


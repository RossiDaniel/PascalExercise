#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    int n=0;
    srand(time(NULL));
    while(n==0)
    {
    n=rand()%51;
    }

    for(int i=3; i< n; i=i+3){
        cout<<i<<" ";
    }
}


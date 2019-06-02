#include<iostream>
#include<stdlib.h>
using namespace std;


int divisione_ric(int x, int y){
    if(x<y){
        return 0;
    }else
    {
        return divisione_ric(x-y, y)+1;
    }
    
}

int divisione_it(int x,int y){
    int c=0;
    while(x>=y){
        x-=y;
        c=c+1;
    }   
    return c;
}


int divisione_resto_it(int x, int y)
{
    while(x>=y){
        x-=y;
    }
    return x;
} 

int divisione_resto_ric(int x, int y)
{
    if(x<y){
        return x;
    }else
    {
        return divisione_resto_ric(x-y, y);
    }
}

int main()
{
    cout<<divisione_ric(5,2);
}



#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

double X=0;

void moltiplica()
{
    double z=2;
    cout<<X<<endl;
}

void ciao(int& pulto,int& pippo){
    int scambio=0;
    scambio=pulto;
    pulto=pippo;
    pippo=scambio;
}

int main()
{
cout<<X<<endl;
X=9;
cout<<X<<endl;
moltiplica();

int x=10;
int y=11;

cout<<x<<" "<<y<<endl;
ciao(x,y);
cout<<x<<" "<<y<<endl;

int A[100];
A[0]=5;
cout<<A<<endl;
cout<<A+10;

}
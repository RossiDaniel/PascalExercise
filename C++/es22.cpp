#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

double ipot(double c1, double c2)
{
    return sqrt((c1*c1)+(c2*c2));
}
double area(double c1, double c2)
{
    return (c1+c2)/2;
}
double perimetro(int c1, int c2)
{
    return ipot(c1,c2)+c1+c2;
}

int main(){
    int i=3,j=4;
    cout << "Ipotenusa: " << ipot(i,j)<<endl;
    cout << "Area: " << area(i,j)<<endl;
    cout << "Perimetro: " <<perimetro(i,j);
}
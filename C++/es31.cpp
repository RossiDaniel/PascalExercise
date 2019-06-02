#include<iostream>
#include<stdlib.h>
using namespace std;

double add(double n1,double n2)
{
    double somma=n1+n2;
    return somma;
}

double sott(double n1, double n2)
{
    double sott=n1-n2;
    return sott;
}


double molt(double n1, double n2)
{
    double molt=n1*n2;
    return molt;
}


double div(double n1, double n2)
{
        
    double div=n1/n2;
    return div;
}


int main()
{
    double n1,n2=0;
    int operation=0;
    cout<<"inserisci 2 numeri"<<endl;
    cin>>n1;
    cin>>n2;
    cout<<"quale operazione vuoi eseguire?"<<endl;
    cin>>operation;
    double result=0;
    switch (operation)
    {
        case 1:
            result=add(n1,n2);
            cout<<n1<<" + "<<n2 <<" = "<<result;
        break;
        case 2:
            result=sott(n1,n2);
            cout<<n1<<" + "<<n2 <<" = "<<result;
        break;
        case 3:
            result=molt(n1,n2);
            cout<<n1<<" * "<<n2 <<" = "<<result;
        break;
        case 4:
            if(n2==0){
                cout<<"non si puo' eseguire l'operazione";
            }
            else{
                result=div(n1,n2);
            cout<<n1<<" / "<<n2 <<" = "<<result;
            }
        break;
        default:
            cout<<"operazione non disponibile";
            break;
    }

}


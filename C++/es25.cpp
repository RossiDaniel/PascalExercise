#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
struct CC
{
    char iban[4];
    char n_carta[4];
    unsigned int saldo;
};

struct CC ls_cc[20];

void generate ()
{
    srand(time(NULL));
    for (int i=0; i<20; i++)
    {
        unsigned int saldo=rand()%10000;
        struct CC cc={.iban={rand()%4}, .n_carta={rand()%4}, saldo};
        ls_cc[i]=cc;
    }

}

char* random_choice()
{
    return ls_cc[rand()%20].n_carta;
}

int search_cc(char carta[4])
{
    for (int i=0; i<20; i++)
    {
        if(ls_cc[i].n_carta==carta)
        {
            return i;
        }
    }
    return 20;
}
void prelevamento(char carta[4])
{
    unsigned int soldi=0;
    int i=search_cc(carta);
    cout<<"quanti soldi vuoi prelevare?"<<endl;
    cin>>soldi;
    if(ls_cc[i].saldo-soldi>0)
    {
        ls_cc[i].saldo-=soldi;
        cout<<"ecco i tuoi scheli"<<soldi<<endl;

    }else
    {
        cout<<"noi hai abbastanza scheli";
    }

}


void deposito(char carta[4])
{
    unsigned int soldi=0;
    int i=search_cc(carta);
    cout<<"quanti soldi vuoi depositare?"<<endl;
    cin>>soldi;

    ls_cc[i].saldo+=soldi;
    cout<<"il tuo nuovo saldo e': "<<ls_cc[i].saldo<<endl;
}

int prelievo_forzoso(int percentuale)
{

    int soldi_raccolti=0;
    for (int i=0; i<20; i++)
    {
        int soldi_prelevare=(ls_cc[i].saldo/100)*percentuale;
        //cout<<ls_cc[i].saldo;
        ls_cc[i].saldo-=soldi_prelevare;
        soldi_raccolti+=soldi_prelevare;
    }
    return soldi_raccolti;
}

int prelievo_percentuale(int scheli,int p,int r)
{
    cout<<p<<" "<<r<<endl;
    if(p==r)
    {
        return p;
    }
    int q=(r+p-1)/2;
    if(prelievo_forzoso(q)<scheli)
    {
      return prelievo_percentuale(scheli, q+1, r);
    }
    else
    {
        return prelievo_percentuale(scheli, p,q);
    }
}

int main ()
{
generate();
char* carta=random_choice();
cout<<prelievo_percentuale(100000,1,100);
}


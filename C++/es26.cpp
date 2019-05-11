#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

struct stringa{
    int len;
    char str[100];
    int max_len;
};

void leggi_it(struct stringa& s)
{
    char x=0;
    cin>>x;
    while (x!='X')
    {
        if(s.len<s.max_len)
        {
            s.str[s.len]=x;
            s.len=s.len+1;
        }

        cin>>x;
    }
}

void leggi_ric(struct stringa& s)
{
    char x=0;
    cin>>x;
    if(x!='X')
    {
        if(s.len<s.max_len)
        {
            s.str[s.len]=x;
            s.len=s.len+1;
        }
        leggi_ric(s);
    }
}

void reverse_it(struct stringa& s)
{
    for(int i=0; i<s.len/2;i++)
    {
        char tmp=s.str[s.len-1-i];
        s.str[s.len-1-i]=s.str[i];
        s.str[i]=tmp;
    }
}

void reverse_ric(struct stringa& s,int p,int r)
{
    if(p<s.len/2){
        char tmp=s.str[r];
        s.str[r]=s.str[p];
        s.str[p]=tmp;
        reverse_ric(s,p+1,r-1);
    }
}

void stampa_it(struct stringa s){
    for(int i=0; i<s.len; i++){
        cout<<s.str[i];
    }
}

void stampa_ric(struct stringa s,int c)
{
    if(c<s.len)
    {
        cout<<s.str[c];
        stampa_ric(s,c+1);
    }
}

int main ()
{
struct stringa s={0,{""},100};
leggi_ric(s);

reverse_ric(s,0,s.len-1);
stampa_ric(s,0);

}



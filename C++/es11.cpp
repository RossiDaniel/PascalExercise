#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main ()
{

    //madam, i'm adam
    char frase[1000000];
    bool ok=true;
    gets(frase);
    for(int i=0;i<strlen(frase) -i -1 && ok; i++){
        std::cout<<frase[i]<<" "<<frase[strlen(frase)-i-1]<<std::endl;
        std::cout<<i<<" "<<strlen(frase)-i-1<<std::endl;
        if(frase[i] != frase[strlen(frase)-i-1]){
            ok=false;
            std::cout<<"ciao"<<std::endl;
        }
    }
    if(ok){
        std::cout<<"frase palindroma"<<std::endl;
    }
    else{
        std::cout<<"frase non palindroma"<<std::endl;
    }
}
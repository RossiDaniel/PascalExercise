
#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char s1[]="ciao son";
    char s2[]="sono";
    bool ok=false;

    for(int i=0; i<strlen(s1)-strlen(s2)+1 && !ok; i++){
    ok=true;
    for(int j=0; j<strlen(s2) && ok; j++){

        if(s1[i+j] != s2[j]){
            ok=false;
        }
    }
    }

    if(ok){
    std::cout<<"match trovato"<<std::endl;
    }

}
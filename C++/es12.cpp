#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int is_perfect_square(int n) {
    if (n < 0)
        return 0;
    int root(round(sqrt(n)));
    if (n == root * root){
        return root;
    }
    else{
        return 0;
    }
}


int main(){
    char frase[100];
    char str[10][10];

    gets(frase);
    //strlen restituisce la lunghezza della stringa
    int len=strlen(frase);
    int root=is_perfect_square(len);
    if(root){
        for(int i=0; i< root; i++){
            for(int j=0; j<root;j++){
                str[i][j]=frase[root*j+i];
            }
        }

        for(int i=0; i< root; i++){
            for(int j=0; j<root;j++){
                        std::cout<<str[i][j];
                frase[i*root+j]=str[i][j]+2;
            }
        }
        std::cout<<std::endl;
        std::cout<<frase;
    }
    else{
        std::cout<<"non è un quadrato perfettto"<<std::endl;
    }

}

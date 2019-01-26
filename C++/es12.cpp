#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int is_perfect_square(int n) {
    if (n < 0)
        return 0;
    int root(round(sqrt(n)));
    cout<<root;
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
    cout<<len;
    int root=is_perfect_square(len);
    cout<<root;
    if(root){
        for(int i=0; i< root; i++){
            for(int j=0; j<root;j++){
                str[i][j]=frase[root*j+i];
            }
        }
        for(int j=0; j< root; j++){
            for(int i=0; i<root;i++){
                std::cout<<str[i][j];
            }
        }
    }
    else{
        std::cout<<"non è un quadrato perfettto"<<std::endl;
    }

}

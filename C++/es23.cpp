#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<time.h>
using namespace std;

struct coord{
    int x;
    int y;
};

struct tupla{
    int i;
    struct coord coor;
};

struct coppia{
    struct tupla i;
    struct tupla j;
    double distance;
};

struct coord random_coord()
{
    struct coord c={rand()%100, rand()%50};
    return c;
}
double dist(struct coord i, struct coord j)
{   
    return sqrt(double(pow((i.x-j.x),2)+pow((i.y-j.y),2)));
}

bool is_coord(struct coord i, struct coord j){
    return i.x == j.x && i.y == j.y;
}

int main()
{
    struct coord C[50];
    srand(time(NULL));
    for(int i=0; i<50; i++)
    {
        C[i]=random_coord();
    }
    struct coppia best = {{0,C[0]},{0,C[0]},0};
    for(int i=0; i<50; i++){
        for(int j=0; j<50; j++){
            struct coppia current={{i,C[i]},{j,C[j]},dist(C[i],C[j])};
            if(i<j && best.distance < current.distance){
                best= current;
            }
        }
    }
    
    for(int Y=0; Y<50; Y++){
        for(int X=0; X<200; X++){
            struct coord c={X,Y};
            if(is_coord(best.i.coor,c) || is_coord(best.j.coor,c)){
                cout <<"O";
            }
            else{
                bool ok=false;
                for(int i=0; i<50 && !ok;i++){
                    if(is_coord(c,C[i])){
                        ok=true;
                        cout<<"*";
                    }
                }
                if(!ok){
                    cout<<" ";
                }
            }
        } 
        cout<<endl;
    }
}




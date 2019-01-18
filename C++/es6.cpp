#include<iostream>
using namespace std;
//PRE=(cin contiene almeno 20 interi oppure  contiene due -1 consecutivi)
main()
{
  int A[20], n=0;  
  bool stop=false, sent=false;
  
    int v= 0;
  while(!stop && n<20){
      cin>> v;
      if(v==-1){
        if(sent){
            stop=true;
            sent=false;
            n--;
        }
        else{
            sent=true;
            A[n]=-1;
            n++;
        }
     }
     else{
        if(sent){
            sent=false;
        }
        A[n]=v;
        n=n+1;
      }
  }

  if(stop){
      cout<<"sentinella trovata entro i 20 valori"<<endl;
  }
  else{
      cout<<"sentinella non trovata"<<endl;
  }
  for(int i=0; i<n; i++){
      cout<<A[i]<<" ";
  }
  cout<<endl;
}
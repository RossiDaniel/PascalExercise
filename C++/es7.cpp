#include<iostream>
using namespace std;
int main (){
    int A[100];
    int n;
    cin>>n;
    for(int i=0;i<n; i++){
        cin>> A[i];
    }

                for(int i=0; i<n; i++){
                    cout<<A[i]<<" ";
                }
                cout<<n<<endl;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n; j++){
            cout<<i<< " "<<j<<endl;
            if(A[j]==A[i]){
                for(int k=j+1;k<n; k++){
                    A[k-1]=A[k];
                }
                n--;
                j--;
                for(int i=0; i<n; i++){
                    cout<<A[i]<<" ";
                }
                cout<<n<<endl;
            }
        }
    }
    
}
#include<iostream>
using namespace std;

int main(){
        int n;
    cout<<"enter";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j>=(n+1)/2){
                if(i<=(n+1)/2){
                    if(j==(i+2)){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                }
                else if(i>(n+1)/2){
                    if((2*n-(j+2))==i){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                }
            }
            else if(j<(n+1)/2){
                if(i<=(n+1)/2){
                    if(j==(n-(i+1))){
                        cout<<"*";
                    } 
                    else{
                        cout<<" ";
                    } 
                }
                else if(i>(n+1)/2){
                    if(j==((2*n)-(2*i))){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                }
                else{
                    cout<<" ";
                }
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

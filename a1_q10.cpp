#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int num=n;
    while(num!=1){
        for(int i=2;i<=num;i++){
            if ((num%i)==0){
                cout<<i<<" ";
                num=num/i;
                break;
            }
        }
    }
    return 0;
}

    

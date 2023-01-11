#include<iostream>
using namespace std;

int main(){
    int t;
    
    cout<<"enter the count of input numbers to be tested";
    cin>>t;
    int n=1;
    int num;
    while(n<=t){
        cout<<"enter the number ";
        cin>>num;
        n=n+1;
        int count=0;
        for(int i=1;i<=num;i++){
            
            if ((num%i)==0){
                count=count+1;
            }
        }
        if (count>2){
            cout<<"NOT PRIME"<<endl;
        }
        else{
            cout<<"PRIME"<<endl;
        }
    }
    return 0;
}

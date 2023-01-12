#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int num=n;
    while(num>0){
        cout<<num%10;
        num=num/10;
    }
    return 0;
}

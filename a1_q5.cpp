#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int num=n/10;
    int count=1;
    while(num>0){
        count=count+1;
        num=num/10;
        
    }
    cout<<count;
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int num1,lcm;
    int num2,gcd,small;
    cout<<"enter the number whose GCD is to be find";
    cin>>num1;
    cout<<"enter the number whose LCM is to be find";
    cin>>num2;
    for(int i=1; i<=num1,i<=num2 ; ++i){
        if (num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    cout<<"the GCD is: "<<gcd<<endl;
    if (num1>num2){
        small=num2;
    }
    else{
        small=num1;
    }
    for(int i=small;i<=num1*num2;++i){
        if (i%num1==0 && i%num2==0){
            lcm=i;
            break;
        }
    }
    cout<<"the LCM is: "<<lcm;

    return 0;
}

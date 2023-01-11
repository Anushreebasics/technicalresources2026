#include<iostream>
using namespace std;

int main(){
    int mar;
    cout<<"enter your marks";
    cin>>mar;
    if (mar>90){
        cout<<"execellent";
    }
    else if (mar<=90 && mar>80){
        cout<<"good";
    }
    else if (mar<=80 && mar>70){
        cout<<"fair";
    }
    else if (mar<=70 && mar>60){
        cout<<"meets expectation";
    }
    else if (mar<=60){
        cout<<"below par";
    }
    return 0;
}

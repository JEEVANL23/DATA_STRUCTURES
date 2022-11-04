#include<iostream>
using namespace std;

int fact(int n){

    int f = 1;
    int i;

    for(i=1;i<=n;i++){

        f = f*i;
        
    }
    return f;
}

int main(){

    int a,b;
    cout<<"enter the num to get its factorial"<<endl;
    cin>>b;
    a = fact(b);
    cout<<a<<endl;

    return 0;
}
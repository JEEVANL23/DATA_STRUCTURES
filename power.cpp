#include<iostream>
using namespace std;

int power(int m, int n){


    if(n==0){
        return 1;

    }
    return power(m,n-1)*m;
}


int main(){

    int a,b,c;
    cout<<"enter num to be powered"<<endl;
    cin>>b;
    cin>>c;
    a = power(b,c);
    cout<<a<<endl;


    return 0;
}
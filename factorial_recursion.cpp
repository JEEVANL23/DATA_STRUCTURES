#include<iostream>
using namespace std;

int fact(int n){

    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}


int main(){

    int a,i;
    cout<<"enter the num to get its factorial"<<endl;
    cin>>i;
    a = fact(i);
    cout<<a<<endl;

    return 0;
}
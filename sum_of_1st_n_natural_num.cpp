#include<iostream>
using namespace std;

int sum(int n){

    if(n==0){
        return 0;
    }
    else{
    return sum(n-1)+2;
    }
}


int main(){

        int r,a;
        cout<<"enter total numbers to be added : "<<endl;
        cin>>r;
        a = sum(r);
        cout<<a<<endl;



    return 0;
}
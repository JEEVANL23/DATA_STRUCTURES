#include<iostream>
using namespace std;

int sum(int n){

    int sum =0;
    int i;
    for ( i = 1; i <= n; i++)
    {
        /* code */
        sum = sum+i;
    }

    return sum;
    



}


int main(){

        int r,a;
        cout<<"enter total numbers to be added : "<<endl;
        cin>>r;
        a = sum(r);
        cout<<a<<endl;



    return 0;
}
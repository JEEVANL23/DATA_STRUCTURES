#include<iostream>
using namespace std;

int main(){


    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    int *p;

    p = &n;

    cout<<n<<endl;  // printing the n
    cout<<&n<<endl; // printing the address of n
    cout<<p<<endl;  // again printing address of n
    cout<<*p<<endl; // dereferencing the n - accessing data of variable n indirectly



    return 0;
}
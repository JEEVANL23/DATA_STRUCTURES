#include<iostream>
using namespace std;

int main(){

    int x;
    cout<<"enter x"<<endl;
    cin>>x;
    
    int &y = x;

    cout<<x<<endl;
    cout<<y<<endl;

    x++;

    cout<<x<<endl;
    cout<<y<<endl;

// any changes done in x or y will affect on both x and y


    return 0;
}
#include<iostream>
using namespace std;

int main(){

    int a[5] = {1,2,3,4,5};
    int i;
    for (i = 0; i < 5; i++)
    {
        /* code */
        cout<<a[i]<<endl;
    }
    

    cout<<a[2]<<endl;
    cout<<2[a]<<endl;
    cout<<*(a+2)<<endl;     // at place 2 is index can  be changed

    return 0;
}
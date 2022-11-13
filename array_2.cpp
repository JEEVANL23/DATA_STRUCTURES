#include<iostream>

using namespace std;

int main(){

    int a[5] = {1,2,3,4,5};

    int *p;
    p = new int[5];
    p[0] =1;
    p[1] =2;
    p[2] =3;
    p[3] =4;
    p[4] =5;


    int i;

    for ( i = 0; i < 5; i++)
    {
        /* code */
        cout<<a[i]<<endl;


    }

    cout<<endl;

    for ( i = 0; i < 5; i++)
    {
        /* code */
        cout<<p[i]<<endl;
    }
    
    




    return 0;
}
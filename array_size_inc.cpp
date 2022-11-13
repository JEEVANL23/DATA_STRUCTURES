#include<iostream>
using namespace std;

int main(){

    int *p,*q;

    p = new int[5];
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 7;
    p[4] = 10;

    q = new int[10];
    int i;
    for ( i = 0; i < 5; i++)
    {
        /* code */
        q[i] = p[i];
    }
    delete []p;
    p = q;
    q = NULL;
    for ( i = 0; i < 10; i++)
    {
        /* code */
        cout<<p[i]<<endl;
    }
    return 0;
}
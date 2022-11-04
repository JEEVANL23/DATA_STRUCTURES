#include<iostream>
using namespace std;

    struct rect{        // defination of a structure

        int len;        // 2 bytes
        int breadth;    // 2 bytes      total 4 bytes 
        
    };
int main(){

    struct rect r;      // declaration 

    struct rect r1 = {2,5};     // declare and initialization - stored in stack memory

    r.len = 15;
    r.breadth = 10;     // dot operator is used to access the data members

    cout<<r.len * r.breadth << endl;
    cout<<r1.len * r1.breadth << endl;









    return 0;
}
    
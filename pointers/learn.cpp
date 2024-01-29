#include <bits/stdc++.h>
using namespace std;

int main(){
    int x=0;
    int y=0;
    int *p_x = &x;
    cout<<" add of varible in pointer:"<<p_x; cout<<endl;
    cout<<"adding a value in pointer "<<p_x +1;// skiped one whole block.
    int **p_p_x = &p_x;
    cout<<"add of pointer: "<< &p_x<<endl;
    cout<<"add of p_p_x: "<< p_p_x<<endl;
    cout<<"add of *p_p_x: "<< *p_p_x<<endl;
    **p_p_x = 10;
    cout<<"value of x now"<<**p_p_x; 
    return 0;

}
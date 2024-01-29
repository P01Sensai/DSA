#include <bits/stdc++.h>
using namespace std;
void inc(int *x){
    (*x)++;
}
int main()
{

    int arr[10];
    arr[0] = 2;
    arr[1] = 4;
    inc(&arr[0]);
    cout<<"add of arr: "<< &arr;cout<<endl;
    cout<<"add of arr: "<< *arr;cout<<endl;
    cout << "arr[0] : " << &arr[0];cout<<endl;
    cout << "arr[1] : " << &arr[1];
    cout << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void printArr(vector <int> arr, int size){

    for(int i = 0 ;i < size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector <int> arr0;
    int ans = (sizeof(arr0)/sizeof(int));
    cout<<ans<<" "<<endl;
    vector <int> arr = {1,2,3,4,5};
    vector <int> arr1(10,-1);
    cout<<arr1.size()<<endl;
    cout<<"the capcity of empty vec - "<<arr0.capacity()<<endl;
    cout<<"the size of empty vec - "<<arr0.size()<<endl;

    printArr(arr1,10);


}
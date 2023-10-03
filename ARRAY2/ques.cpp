//move all negative number to the left side of an array
// solving using dutch national flag algo.
#include<bits/stdc++.h>
using namespace std;

void sol(int *arr, int size){

    int l=0;
    int h = size;
    while(l<h){
        if(arr[l]<0){
            l++;
        }
        if(arr[h]>0){
            h--;
        }
        else{
            swap(arr[l],arr[h]);
        }

    }
    for(int i =0;i<=size;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int arr[5] = {-1,2,3,-3,4};
    sol(arr,4);

    return 0;
}
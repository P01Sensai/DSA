#include <bits/stdc++.h>
using namespace std;
void printArr(int arr[], int size){

    for(int i = 0 ;i < size;i++){
        cout<<arr[i]<<" ";
    }
}
void inc(int arr[], int size){
    arr[0] = arr[0]+10;

}
 int main(){
    int array[1000] = {1,24,5,6};
    printArr(array , 4);
    inc(array , 4);
    cout<<endl;

    printArr(array , 4);
    return 0;


 }
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {-2,-1,-3};
    //int n = sizeof(arr);
    //cout<<n<<endl;
    int n = 3;

    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max<<endl;
    return 0;

}
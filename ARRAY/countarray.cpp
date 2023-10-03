#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,0,1,1,1,0,1,1,0,1,0,1,0};
    //int n = sizeof(arr);
    //cout<<n<<endl;
    int n = 13;
    int count0 = 0;
    int count1 = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count1++;
        }
        if(arr[i]==0){
            count0++;
        }
        
    }
    cout<<"number of Zero - "<<count0<<endl<<"number of one - "<<count1<<endl;
    return 0;

}
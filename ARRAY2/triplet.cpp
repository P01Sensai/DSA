#include <bits/stdc++.h>
using namespace std;

int main (){
    vector <int> arr{-1,0,1,2,-1,-4};
    //vector <pair<int,int>> ans;
    int count = 0;

    for(int i=0;i<arr.size();i++){
        for(int j = i+1; j<arr.size();j++){
            //cout<<"("<<arr[i] <<","<< arr[j] <<")"<<endl;
            for(int k= j+1; k< arr.size();k++){
                int sum = arr[i]+arr[j]+arr[k];
                if(sum == 0) {//cout<< arr[i] <<","<<arr[j]<<","<<arr[k]<<endl;
                //cout<<i<<" "<<j<<" "<<k<<endl;
                count++;}
            }

        }

    }
    cout<<count;
    // for(auto pair: ans){
    //     cout<< pair.first<<","<<pair.second<<endl;
    // }


    return 0;
}

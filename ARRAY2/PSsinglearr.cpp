//pair sum ques.
#include <bits/stdc++.h>
using namespace std;
void display(vector <pair<int,int>> ans){

    for(auto pair: ans){
        cout<< pair.first<<","<<pair.second<<endl;
    }
}
void pSum(vector <int> arr)
{
    vector <pair<int,int>> ans;
    

    for(int i=0;i<arr.size();i++){
        for(int j = i+1; j<arr.size();j++){
            //cout<<"("<<arr[i] <<","<< arr[j] <<")"<<endl;
            int sum = arr[i] + arr[j];
            if(sum == 7){
                ans.push_back({arr[i],arr[j]});//using pairs
                //cout<<"("<<arr[i] <<","<< arr[j] <<")"<<endl;//without using pairs
            }
            else {cout<<"no pair found "<<endl;}


        }
    }
    display(ans);
    // for(auto pair: ans){
    //     cout<< pair.first<<","<<pair.second<<endl;
    // }
}

    

int main (){
    vector <int> arr{1,2,3,7,8};
    // 
    pSum(arr);


    return 0;
}
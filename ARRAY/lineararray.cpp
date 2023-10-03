#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,66,87,88,78};
    //int n = sizeof(arr);
    //cout<<n<<endl;
    int n = 9;
    int find;
    cout<<"Input the finding element ";cin>>find;
    bool flag = 0;


    //int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] == find){
            flag = 1;
        }
    }
    if(flag == 0) cout<<" NOT FOUND";
    else cout<<"found";


    //cout<<max<<endl;
    return 0;

}
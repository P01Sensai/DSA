#include <bits/stdc++.h>
using namespace std;








class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int j = 0;
        for(int i=0;i<nums.size();i++){
            k = k - nums[i];
            count++;
            if(k<0){
                j++;
                i = j;
                cout<< j;
                count = 0;  
            }
            if(k==0){
                break;
            }
        }
        return count;
        
    }
};

int main (){
    Solution sln;

}
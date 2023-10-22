//finding square root using binary search, but use of sqrt function.
// i/p = 68 then output should be 8   we are not targeting for decimal.
/*  in sqrt quess  
there is few basixc steps which we will be sticking to

1.search space - wil give us a possible range of ans
2. predicate function - will check mid is  the answer or not */


#include <bits/stdc++.h>
using namespace std;


int sqrt(int x){


    int s = 0;
    int e = x-1;
    long long int mid = s + (e-s)/2;
    // multiplying sum numberwill getus out of range of an integer
    int ans = -1;


    while(s<=e){
        if(mid*mid == x) { 
            return mid;
        }
        else if(mid*mid < x){
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid-1;
        }

        mid = s+(e-s)/2;
    }
    return ans;
}


int main(){
    int n; cout<<"enter the number :";cin>>n;


    int ans = sqrt(n);

cout<<ans;

}
// dividing the number using binary search.
// i/p 2 number divident and divisor.

#include <bits/stdc++.h>
using namespace std;
int binarydiv(int divident, int divisor){
    int s = 0;
    int e = divident;
    int mid = s+(e-s)/2;
    int ans = -1;
    

    while(s<=e)
    {
        if(mid * divisor == divident){
            return mid;
        }
        if (mid*divisor < divident){
            ans = mid;
            s = mid +1;
            
        }else {
            e = mid-1;
        }
        mid = s+(e-s)/2;
        
    }
    return ans;   

}

int main(){
    int x=28,y=-7;
    int ans = binarydiv(abs(x),abs(y)); // taking only positive arguments using absolute function abs()
    if((x<=0 && y>=0) || (x>=0 && y<=0) ) {// in case of negative numbers
        cout<< -ans <<endl;
    }
    else {
        cout<< ans<<endl;
    }
    //cout<< ans;
}
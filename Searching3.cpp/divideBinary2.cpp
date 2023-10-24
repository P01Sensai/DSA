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
double decimal(int divident, int divisor){
    double Q = binarydiv(divident, divisor);
    int precision = 10;
    double step = 0.1;

    for(int i = 0;i<= precision;i++){
        double j = Q;//store the value

        while(j*divisor <= divident){
            Q = j; // updating decimal value in Q
            j+=step;
        }
        step = step/10;
    }
    return Q;
}

int main(){
    int x=9,y=7;
    double ans = decimal(abs(x),abs(y)); // taking only positive arguments using absolute function abs()
    if((x<=0 && y>=0) || (x>=0 && y<=0) ) {// in case of negative numbers
        cout<< -ans <<endl;
        
    }
    else {
        //cout<< ans<<endl;
        printf("%0.10f", ans);// cout doest print decimal value more than 5.
    }
    //cout<< ans;
}
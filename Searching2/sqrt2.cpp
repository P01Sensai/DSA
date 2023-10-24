

#include <bits/stdc++.h>
using namespace std;

double decimal(int n){
    double Q = sqrt(n);
    int precision = 10;
    double step = 0.1;

    for(int i = 0;i<= precision;i++){
        double j = Q;//store the value

        while(j*j <= n){
            Q = j; // updating decimal value in Q
            j+=step;
        }
        step = step/10;
    }
    return Q;
}


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


    double ans = decimal(n);

cout<<ans;

}
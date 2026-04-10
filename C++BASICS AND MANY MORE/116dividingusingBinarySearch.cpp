#include<iostream>
using namespace std;

int solve(int dividend,int divisor){

    int start = 0;
    int end = abs(dividend);
    int ans = 0;

    while(start <= end){

        int mid = start + (end - start)/2;

        if(abs(mid * divisor) == abs(dividend)){
            return mid;
        }

        if(abs(mid * divisor )< abs(dividend)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    if(dividend<0 & divisor<0){
        return ans;
    }
    if(dividend<0 && divisor>=0){
        return -ans;
    }
    if(dividend>=0 && divisor<0){
        return -ans;
    }


    return ans;
}

int main(){

    int dividend = -22;
    int divisor = 7;

    int ans = solve(dividend,divisor);

    cout<<"quotient : "<<ans<<endl;

    return 0;
}
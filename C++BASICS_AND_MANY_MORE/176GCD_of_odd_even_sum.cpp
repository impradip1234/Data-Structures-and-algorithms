#include<iostream>
using namespace std;

class Solution {
public:
    int sumOdd(int n){
        // int count=0;
        // int sum=0;
        // int num=1;
        // while(count<n){
        //     if(num%2!=0){
        //         sum=sum+num;
        //         num++;
        //         count++;
        //     }
        //     else{
        //         num++;
        //     }
        // }
        // return sum;

        return n*n;
    }

    int sumEven(int n){
        // int count=0;
        // int sum=0;
        // int num=1;
        // while(count<n){
        //     if(num%2==0){
        //         sum=sum+num;
        //         num++;
        //         count++;
        //     }
        //     else{
        //         num++;
        //     }
        // }
        // return sum;

        return n*(n+1);
    }

    int findGCD(int a,int b){
        if(a==0) return b;
        if(b==0) return a;
        while(a>0 && b>0){
            if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
        }
        return a==0 ? b : a;
    }

    int gcdOfOddEvenSums(int n) {
        int sum_of_odd=sumOdd(n);
        int sum_of_even=sumEven(n);

        int gcd=findGCD(sum_of_odd, sum_of_even);
        return gcd;
    }
};

int main(){
    int n=4;

    Solution sol;
    int ans=sol.gcdOfOddEvenSums(n);
    cout<<ans;
    
}
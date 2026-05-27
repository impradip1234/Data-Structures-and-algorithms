#include<iostream>
#include<vector>
using namespace std;

// class Solution {
// public:
//     bool isPrime(int i){
//         for(int j=2;j<=i/2;j++){
//                 if(i%j==0){
//                     return false;
//                 }
//             }
//             return true;
//     }
//     int countPrimes(int n) {
//         int count=0;
//       for(int i=2;i<n;i++){
//         if(isPrime(i)){
//             count++;
//         }
//       } 
//       return count; 
//     }
// };

//method : 02
class Solution {
public:
    int countPrimes(int n) {
        if(n==0) return 0;
        vector<bool>prime(n,true);//all are prime marked already.
        prime[0]=prime[1]=false;
        int ans=0;
        for(int i=2;i<n;i++){
            if(prime[i]){
                ans++;
                int j=2*i;
                while(j<n){
                    prime[j]=false;
                    j+=i;
                }
            }
        }
      return ans; 
    }
};


int main(){
    // approach : 01  -> Naive approach (check if n is prime or not)
    // int n=1;
    // for(int i=2;i<=n/2;i++){
    //     if(n%i==0){
    //         cout<<"not a prime number"<<endl;
    //         return 0;
    //     }
    // }
    // cout<<"prime number";
    // return 0;

    int n=3;
    Solution sol;
    int ans=sol.countPrimes(n);
    cout<<ans;
}
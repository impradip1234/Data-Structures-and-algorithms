#include<iostream>
#include<vector>
using namespace std;
bool canPlaceFlower(vector<int>flowerBed, int n){
    int count=0;
    for(int i=0;i<flowerBed.size();i++){
        if(flowerBed[i]==0){
        bool leftEmpty=(i==0 || flowerBed[i-1]==0);
        bool rightEmpty=(i==flowerBed.size()-1 || flowerBed[i+1]==0);
        if(leftEmpty && rightEmpty){
            flowerBed[i]=1;
            count++;
        }
    }
    }
    return count>=n;
}
int main(){
    vector<int>flowerBed={1,0,1,0,1};
    int n=1;
    bool ans=canPlaceFlower(flowerBed,n);
    if(ans){
        cout<<n<<" flower can plant flowe"<<endl;
    }
    else{
        cout<<n<<" flower can not plant flower"<<endl;
    }
}
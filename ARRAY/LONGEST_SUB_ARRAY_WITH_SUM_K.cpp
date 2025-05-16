#include<bits/stdc++.h>
using namespace std;
int longestSubArrayWithSumK(vector<int> &arr,long long k){
    int n=arr.size(),cnt=0,sum=0,pre=0,maxi1=0;
    vector<int>sto;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        cnt++;
        if(sum==k){
            sto.emplace_back(cnt);
            maxi1=max(maxi1,cnt);
            sum=0;
            cnt=0;
        }
        else if(sum>k){
            if(pre!=i){
                sum=0;
                cnt=0;
                pre=i;
                 i--;
            }
        }
    }
    /*int maxi=0;
    for(auto i:sto){
        maxi=max(maxi,i);
    }*/
    return maxi1;
}
int main(){
    vector <int> arr={8,15,17,0,11};
    int k=17;
    cout << longestSubArrayWithSumK(arr,k);
}
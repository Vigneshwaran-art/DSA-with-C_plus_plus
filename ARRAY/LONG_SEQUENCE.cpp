#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> &nums){
    int n=nums.size(),c_num=0,c_seq=0,longest=0;
    if(nums.empty()){
        return 0;
    }
    unordered_set<int> setarr={nums.begin(),nums.end()};
    for(auto i : setarr){
        if(setarr.find(i-1)==setarr.end()){
            c_num=i;
            c_seq=1;
            while(setarr.find(c_num+1)!=setarr.end()){
                c_num+=1;
                c_seq+=1;
            }
            longest=max(longest,c_seq);
        }
    }return longest;
}
int main(){
    vector <int> nums={100,4,200,1,3,2};
    cout << longestConsecutive(nums);
}
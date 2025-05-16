#include<bits\stdc++.h>
using namespace std;
int majorityElement(vector<int> &nums){
    int n=nums.size();
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }
    for(auto it : mpp){
        if(it.second > n/2)
            return it.first;
    }
    return -1;
}
int majorityElement2(vector<int> &nums){
    int n=nums.size();
    int M_el = nums[0];
    int cnt=0;
    for(int i=0;i<n;i++){
        if(nums[i]==M_el) cnt++;
        else cnt--;
        if(cnt==0){
            M_el=nums[i+1];
        }
    }
    int cnt1=0;
    for(auto it : nums){
        if(M_el==it) cnt1++;
    }
    if(cnt1>n/2) return M_el;
    else return -1;
}
int main(){
    vector<int> nums={7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    cout << majorityElement2(nums);
}

#include <bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> pos,neg;
    for(int i = 0; i < n; i++){
        if(nums[i]>0) pos.emplace_back(nums[i]);
        else neg.emplace_back(nums[i]);
    }
    for(int j=0;j<n/2;j++){
        nums[j*2]=pos[j];
        nums[(j*2)+1] = neg[j];
    }
    return nums;
}
vector<int> rearrangeArray1(vector<int> &nums){//optimal 1
    int n=nums.size(),pos=0,neg=1;
    vector<int> res(n);
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            res[pos]=nums[i];
            pos+=2;
        }
        else{
            res[neg]=nums[i];
            neg+=2;
        }
    }
    return res;
}
int main()
{
    vector<int> nums = {3,1,-2,-5,2,-4};
    vector<int> res1 = rearrangeArray1(nums);
    for (auto it : res1)
    {
        cout << it << " ";
    }
}
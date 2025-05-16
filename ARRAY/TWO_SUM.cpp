#include<bits/stdc++.h>
using namespace std;
string twoSum(vector<int>& nums, int target) {
    int n=nums.size(),sum=0;
    vector <int>res;
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if(i!=j){
                sum=nums[i]+nums[j];
                if(sum==target){
                    res.emplace_back(i);
                    res.emplace_back(j);
                    cout << i << " " << j ;
                    return "YES";
                }
            }
        }
    }
}
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size(),sum=0;
        vector <int>res;
        for(int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                if(i!=j){
                    sum=nums[i]+nums[j];
                    if(sum==target){
                        res.emplace_back(i);
                        res.emplace_back(j);
                        return res;
                    }
                }
            }
        }
    }
};
string TwoSum(vector<int> nums,int target){
    int i=0,j=nums.size()-1,n=nums.size();
    sort(nums.begin(),nums.end());
    while(i!=j){
        if(nums[i]+nums[j]==target)
            return "YES";
        else if (nums[i]+nums[j]<target)
            i++;
        else
            j--;
    }
    return "NO";
}
int main(){
    vector<int>nums={2,6,5,8,11};
    int target = 14;
    //cout << twoSum(nums,target);
    /*Solution a;
    vector<int> result = a.twoSum(nums,target);*/
    cout << TwoSum(nums,target);
}
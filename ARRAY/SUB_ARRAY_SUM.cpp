#include<bits/stdc++.h>
using namespace std;
int maxSubArray1(vector<int> &nums){
    int n=nums.size(),sum=0,maxi=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=0;
            for(int k=i;k<j;k++){
                sum+=nums[k];
            }
            maxi=max(maxi,sum);
        }
    }
    return maxi;
}
int maxSubArray2(vector<int> &nums){
    int n=nums.size(),sum=0,maxi=0;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            maxi=max(maxi,sum);
        }
    }
    return maxi;
}
int maxSubArray3(vector<int> &nums){
    int maxi=INT_MIN,sum=0,n = nums.size() ,start=-1,arr_start=-1,arr_end=-1;
    for(int i=0;i<n;i++){
        if(sum==0) start=i;
        sum+=nums[i];
        if(sum>maxi) {
            maxi=sum;

            arr_start=start; // To get the sub array values.
            arr_end=i;

        }
        if(sum<0) sum=0;
    }
    return maxi;
}
int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray3(nums);
}
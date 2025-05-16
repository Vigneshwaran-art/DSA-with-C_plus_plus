#include<bits/stdc++.h>
using namespace std;
int pairWithMaxSum(vector<int> &arr){
    int n=arr.size() , maxi=INT_MIN, sum=0;
    for(int i=0;i<n-1;i++){
        sum=arr[i]+arr[i+1];
        maxi=max(sum,maxi);
        sum=0;
    }
    return maxi;
}
int main(){
vector<int> arr={5, 4, 3, 1, 6};
cout << pairWithMaxSum(arr);
}
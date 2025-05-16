#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int mid,int h){
    vector <int> temp;
    int left=l,right=mid+1;
    while(left<=mid && right <=h){
        if(arr[left]<=arr[right]){
            temp.emplace_back(arr[left]);
            left++;
        }
        else{
            temp.emplace_back(arr[right]);
            right++;
    }
    }
    while(left<=mid){
            temp.emplace_back(arr[left]);
            left++;
    }
    while(right<=h){
            temp.emplace_back(arr[right]);
            right++;
    }
    for(int i=l;i<=h;i++){
        arr[i]=temp[i-l];
}
}
void mergeSort(int arr[],int l,int h){
    if(l>=h) return;
    int mid = (l+h)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,h);
    merge(arr,l,mid,h);
}
int main(){
    int arr[]={23,41,0,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int l=0,h=n-1;
    mergeSort(arr,l,h);
    for(int i:arr){
        cout << i << " ";
    }
}
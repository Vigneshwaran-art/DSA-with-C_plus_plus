#include<bits/stdc++.h>
using namespace std;

void Selection2(vector<int>&arr){
    int n=arr.size();
    for (int i = 0; i < n - 1; i++) {
    int min = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }
  for (auto it : arr){
      cout << it << " ";
}
}
int main(){
  cout << "Enter : ";
  int n;
  cin >> n;
  int a[n];
  vector<int>arr;
  for(int i=0;i<n;i++){
    cin >> a[i];
    arr.emplace_back(a[i]);
  }
  Selection2(arr);
}
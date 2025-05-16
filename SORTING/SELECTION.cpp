#include<bits/stdc++.h>
using namespace std;
int Selection(){
    int arr[]={11,4,233,12,564};
    int n=sizeof(arr)/sizeof(arr[0]);
    /*for(int i=0;i<n-1;i++){
        int min=a[i];
        int loc=i;
        for(int j=i+1;j<n;j++){
            if(min > a[j]){
                min =a[j];
                loc=j;
        }
        int temp = a[i];
        a[i]=a[loc];
        a[loc]=temp;
        }
    }
    for(int ai:a){
        cout << ai << " ";
    }*/

    for (int i = 0; i < n - 1; i++) {
    int mini = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[mini]) {
        mini = j;
      }
    }
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}
void Selection2(vector<int>&arr,int n){
    int arr[]={11,4,233,12,564};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++) {
    int mini = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[mini]) {
        mini = j;
      }
    }
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}
int main(){
  vector<int>arr;
  int n,a[n];
  cout << "Enter : ";
  for(int i=0;i<n;i++){
    cin >> a[i];
    arr.emplace_back(a[i]);
  }
  for(auto it:arr){
      cout << it;
  }
}
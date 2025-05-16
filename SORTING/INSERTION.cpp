#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
      for(int j=i;j>0;j--){
        if(arr[j-1]>arr[j]){
          int temp=arr[j];
          arr[j]=arr[j-1];
          arr[j-1]=temp;
        }
      }
    }
    for(int i=0;i<n;i++){
      cout << arr[i] << " ";
    }
}
int main(){
    cout << "Enter : ";
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
  }
  insertionSort(arr,n);
}
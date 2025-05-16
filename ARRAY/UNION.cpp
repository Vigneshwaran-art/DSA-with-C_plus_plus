#include<bits/stdc++.h>
using namespace std;
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int i = 0, j = 0; // pointers
    vector < int > Union; // Uninon vector
    int n=a.size() , m=b.size();
    while (i < n && j < m) {
    if (a[i] <= b[j]) // Case 1 and 2
    {
        if (Union.size() == 0 || Union.back() != a[i])
        Union.push_back(a[i]);
        i++;
    } else // case 3
    {
        if (Union.size() == 0 || Union.back() != b[j])
        Union.push_back(b[j]);
        j++;
    }
  }
  while (i < n) // IF any element left in arr1
  {
        if (Union.back() != a[i])
         Union.push_back(a[i]);
        i++;
  }
  while (j < m) // If any elements left in arr2
  {
        if (Union.back() != b[j])
        Union.push_back(b[j]);
        j++;
  }
    return Union;
}
int main(){
    cout << "Enter : " << endl;
    int n,m;
    cin >> n >> m;
    int arr[n] , arr1[m];
    vector <int> a,b;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        a.emplace_back(arr[i]);
    }
    for(int i=0;i<m;i++){
        cin >> arr1[i];
        a.emplace_back(arr1[i]);
    }
    sortedArray(a,b);
}
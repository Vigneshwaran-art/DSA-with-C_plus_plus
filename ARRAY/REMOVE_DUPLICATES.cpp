#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr, int n) {
	int currentElement=arr[0];
    for(int i=1;i<n;i++){
        if(currentElement==arr[i]){
            arr.erase(arr.begin()+i);
            n--;
            i--;
        }
        else{
            currentElement=arr[i];
        }
    }
    return arr.size();
}
int main(){
    cout << "Enter : " << endl;
    int n;
    cin >> n;
    int arr[n];
    vector <int> a;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        a.emplace_back(arr[i]);
    }
    cout << removeDuplicates(a,n);
}
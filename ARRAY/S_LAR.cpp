#include<bits/stdc++.h>
using namespace std;
int slarge(vector <int> a,int n){
    int count =0;
    int loc=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<n-1;j++){
            if(a[loc]<a[j+1]){
                loc=j+1;
            }
        }
        count++;
        if(count ==1){
            a[loc]=(-1) * a[loc];
        }
        if(count==2)
            return a[loc];
    }
}
int ssmall(vector<int> a,int n){
    int count =0;
    int loc=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<n-1;j++){
            if(a[loc]>a[j+1]){
            loc=j+1;
            }
        }
        count++;
        if(count ==1){
            a.erase(a.begin()+loc);
        }
        loc=0;
    }
    return a[loc];
}
vector <int> sorder(vector <int> a,int n){
    vector <int> result;
    result.push_back(slarge(a,n));
    result.push_back(ssmall(a,n));
    return result;
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
    //cout << slarge(a,n) << " ";
    //cout << ssmall(a,n);
    vector <int> a3 = sorder(a,n);
    for(auto i : a3){
        cout << i << " ";
    }
}
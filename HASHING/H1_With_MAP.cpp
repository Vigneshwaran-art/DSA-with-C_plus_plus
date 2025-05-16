#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10]={2,2,3,6,4,2,2,7,9,2};
    map<int,int>mpp;
    for(int i=0;i<10;i++){
        mpp[a[i]]++;
    }
    for(auto it:mpp){
        cout << it.first << "->" << it.second << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[]={1,2,3,1,1,4};
    n=6;
    map<int ,int> map;
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }
    int hf=0 , lf=n;
    int maxele=0,minele=0;
    for(auto it : map){
        if(it.second > hf){
            hf=it.second;
            maxele = it.first;
        }
        if(it.second < lf){
            lf = it.second;
            minele = it.first;
        }
    }
    cout << "Higher Frequency : " << maxele << endl;
    cout << "Lower Frequency  : " << minele ;
}
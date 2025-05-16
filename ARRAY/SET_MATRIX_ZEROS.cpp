#include<bits/stdc++.h>
using namespace std;
void markRow(int i,int m,vector<vector<int>> &matrix){
    for(int j=0;j<m;j++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}
void markcol(int j,int n,vector<vector<int>> &matrix){
    for(int i=0;i<n;i++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}
void setZeroes(vector<vector<int>>& matrix) {
    int n=matrix.size(),m=matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                markRow(i,m,matrix);
                markcol(j,n,matrix);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=0;
            }
        }
    }
}
int main(){
    vector < vector<int> > matrix={{1,1,1,1},{1,0,0,1},{1,1,0,1},{1,1,1,1}};
    setZeroes(matrix);
    int n=matrix.size(),m=matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << matrix[i][j] << " " ;
        }
        cout <<  endl;
    }
}
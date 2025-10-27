#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter dimensions of two matrix : ";
    int n,m,m1,l;
    cin>>n>>m>>m1>>l;
    if(m!=m1) 
    {
        cout<<"matrix multiplication can not be done.";
        return 0;
    }
    cout<<"Enter matrix element ";
    int mat[n][m];
    int mat2[m1][l];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<l;j++){
            cin>>mat2[i][j];
        }
    }
    int result[n][l],i,j;
    for(i=0;i<n;i++){
       
        for(j=0;j<l;j++){
            result[i][j]=0;
            for(int k=0;k<m;k++){
                result[i][j]+=mat[i][k]*mat2[k][j];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
           cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
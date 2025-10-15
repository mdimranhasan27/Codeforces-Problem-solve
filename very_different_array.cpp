#include<bits/stdc++.h>
using namespace std;
void c_sort(int array[],int size);
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr1[n],arr2[m];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        c_sort(arr1,n);
        for(int i=0;i<m;i++){
            cin>>arr2[i];
        }
        c_sort(arr2,m);

        int ans=0;
        for(int k=0;k<n;k++){
        ans+=max(abs(arr1[k]-arr2[m-k-1]),abs(arr1[k]-arr2[n-k-1]));
        }
        cout<<ans<<endl;
        
    
    }
    return 0;
}
void c_sort(int array[],int size)
{
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0; j<size-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}
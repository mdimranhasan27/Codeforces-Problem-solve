// C++ program to remove  
// duplicates in-place 
#include<iostream> 
#include<vector>
using namespace std; 
  
// Function to remove duplicate  
// elements. This function returns  
// new size of modified array. 
int removeDuplicates(int arr[], int n) 
{ 
    if (n==0 || n==1) 
        return n; 
  
    // To store index of next  
    // unique element 
    int j = 0; 
  
    // Doing same as done in Method 1 
    // Just maintaining another updated  
    // index i.e. j 
    for (int i = 0; i < n - 1; i++) 
        if (arr[i] != arr[i + 1]) 
            arr[j++] = arr[i]; 
  
    arr[j++] = arr[n - 1]; 
  
    return j; 
} 
  
// Driver code 
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        int n1,m,a;
        cin>>n1>>m;
    int arr[n1*m] ;
    for(int i=0;i<n1*m;i++){
        cin>>arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    
  
    // removeDuplicates() returns new  
    // size of array.
     n = removeDuplicates(arr, n); 
     vector<int>v={arr,arr+n}
     int tg=sizeof(v)/v[0];


  
    }
  
    return 0; 
} 
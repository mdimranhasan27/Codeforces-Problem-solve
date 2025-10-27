#include<bits/stdc++.h>
using namespace std;
int maximum_value(int arr[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    return max;

}
int minimum_value(int arr[],int n){
    int min=MAX_INPUT;
    for(int i=0;i<n;i++){
        if(arr[i]<min) min=arr[i];
    }
    return min;

}
int sum_value(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;

}

float average_value(int arr[],int n){
    float sum=0;
    for(int i=0;i<n;i++){
         sum+=arr[i];
    }
    return sum/n;

}

void sin_value(int arr[],int n){
    for(int i=0;i<n;i++){
        double rad=arr[i]*M_PI/180;
        cout << "sin(" << arr[i] << " degrees) = " << sin(rad) << endl;

    }
    
}


int main(){
    int arr[5]={5,0,30,60,90};

    int max=maximum_value(arr,5);
    cout<<"maximum value = "<<max<<endl;
    int min=minimum_value(arr,5);
    cout<<"minimum value = "<<min<<endl;
    float avg=average_value(arr,5);
    cout<<"average value = "<<avg<<endl;
    int sum=sum_value(arr,5);
    cout<<"sum value = "<<sum<<endl;
    sin_value(arr,5);

    
    






    return 0;
}
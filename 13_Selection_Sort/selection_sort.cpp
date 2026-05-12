#include<iostream>
using namespace std;

void Selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int SmallIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[SmallIndex]){  
                SmallIndex=j; 
            }
        }
        swap(arr[i], arr[SmallIndex]); 
    }
}

void Display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    
    int* arr = new int[n];
    
    for(int i=0; i<n; i++){
        cout<<"Enter value of Index "<<i<<": ";
        cin>>arr[i];
    }
    
    cout<<"\nBefore Sorting:"<<endl;
    Display(arr, n);
    
    Selection_sort(arr, n);
    
    cout<<"\n\nAfter Selection Sorting:"<<endl;
    Display(arr, n);
    cout<<endl;
    
    delete[] arr;
    
    return 0;
}

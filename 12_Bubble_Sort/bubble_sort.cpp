#include<iostream>
using namespace std;

void Bubble_Sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){ 
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]); 
            }
        }                        
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
    
    Bubble_Sort(arr, n);
    
 
    cout<<"\n\nAfter Bubble Sorting:"<<endl;
    Display(arr, n);
    cout<<endl;
    
    delete[] arr; 
    
    return 0;
}

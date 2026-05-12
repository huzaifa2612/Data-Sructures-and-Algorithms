#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr; 
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
    
    insertionSort(arr, n);
    
    cout<<"\n\nAfter Insertion Sorting:"<<endl;
    Display(arr, n);
    cout<<endl;
    
    delete[] arr; 
    
    return 0;
}

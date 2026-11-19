#include<iostream>
using namespace std;


int main(){

    int arr[] = {1,3,4,5,3};
    int n = 5;

    // bubble sort ascending bubble sort

    for(int i = 0; i< n-1 ; i++){
        for(int j =0; j< -i-1; j++){
            if(arr[j]>arr[j+1]){
                // swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
            }
        }

    }
    // print sorted array

    for(int i = 0; i< n; i++){
        cout<< arr[i]<< " ";

    }
    return 0;
}


// bubble sort recap other way to write 


void bubbleSort(int arr[], int n){

    for(int i = 0; i< n-1; i++){
        for(int j = 0; j< -i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}


int main(){
    int arr[] = {12,3,4,5,2};
    int n = 5;
    bubbleSort(arr, n);

    return 0;
}
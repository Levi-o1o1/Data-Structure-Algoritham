// in selection sort we find out first shortes element than swap with first element if it > than or not like that

#include<iostream>
using namespace std;


void SelectionSort(int arr[], int n){ // time comp  O(n^2)

    for(int i =0; i< n-1; i++){
        int small = i;
        for(int j =0; j< n; j++){
            if(arr[j]< arr[small]){
                small = j;
            }
        }
        swap(arr[i], arr[small]);
    }





}


int main(){
       int n = 6;
       int arr[] = {12,3,4,5,6,1};
       SelectionSort(arr, n);

       return 0;

}
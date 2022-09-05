#include<iostream>
using namespace std;

//int arr[5] = {99, 11, 77, 22, 88};
int key;
int j;
int n = 5;

void insertion_sort(int arr[]){
    for(int i = 1; i<n; i++){
        key = arr[i];
        j = i - 1;
        // filter out all numbers greater than the key, filter them all to the right by one index
        // the next one to the left (the next j, the element at next j is smaller than the key), so jump out for loop
        // # j is gonna keep getting smaller, keep decrement by one until it denote the element smaller than the key
        // # and only then will it jump out of this for loop
        // # so when it jumps out of this for loop, it means that this element at the current j is smaller than the key
        // # exception that we are at the end. j >= 0 becaomes false
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }

        //arr[j+1] = key;
        if(j != i-1){
            arr[j+1] = key;
            //break;
            //return;
        }
    }

    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<" "<<endl;
}

int main(){

    int arr[5] = {99, 11, 77, 22, 88};
    insertion_sort(arr);

    int b[5] = {9, 7, 3, 6, 2};
    insertion_sort(b);

    int c[5] = {245, 15, 450, 1, 5};
    insertion_sort(c);
    return 0;
}
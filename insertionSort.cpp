#include<bits/stdc++.h>
using namespace std ;

void insertionSort(vector<int> & arr){
    for(int i =1 ; i<arr.size()-1;i++){
        int temp = arr[i];
        int loc = i - 1;
        while(arr[loc]>temp && loc > -1){
            arr[loc+1] = arr[loc];
            loc -= 1;
        }
        loc += 1 ;
        arr[loc]=temp;
    }
}

int main(){
    vector<int> arr = {1,3,5,3,4,5};
    insertionSort(arr);
    for(int i = 0 ;i<arr.size() ; i++){
        cout << arr[i] << " ";
    }
}
#include<bits/stdc++.h>
using namespace std ;

void selectionSort(vector<int> & arr){
    for(int i = 0 ; i<arr.size()-1;i++){
        int min = arr[i];
        int loc = i ;
        for(int j = i+1 ; j<arr.size() ; j++){
            if(arr[j]<min){
                min = arr[j];
                loc = j ;
            }
        }
        swap(arr[i],arr[loc]);
    }
}

int main(){
    vector<int> arr = {1,3,5,3,4,5};
    selectionSort(arr);
    for(int i = 0 ;i<arr.size() ; i++){
        cout << arr[i] << " ";
    }
}
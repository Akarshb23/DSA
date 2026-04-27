#include<bits/stdc++.h>
#include<vector>
using namespace std;

void bubbleSort(vector<int>& arr){
    bool swapped;
    for(int i = 0 ; i<arr.size();i++){
        swapped = false;
        for(int j = 0; j<arr.size()-1 ;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true ;
            }
        }
        if(!swapped)
            break;
    }
}

int main(){
    vector <int> arr = {3 , 2 ,5 , 1 , 21 , 34 ,12 , 123 , 53, 4};
    bubbleSort(arr);
    for(int i = 0 ; i< arr.size();i++){
        cout << arr[i] << " ";
    }
} 
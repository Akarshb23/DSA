#include<bits/stdc++.h>
#include<vector>
using namespace std;

void countSort(vector<int> & arr , int n , int  p){
    vector<int> count(10,0);
    for(int i = 0 ; i<n ;i++){
        count[(arr[i]/p)%10]++;
    }
    for(int j = 1 ; j<10 ;j++){
        count[j] += count[j-1];
    }
    vector<int> B(n);
    for(int k = n-1 ; k>=0 ; k-- ){
        B[--count[(arr[k]/p)%10]] = arr[k];
    }
    for(int i = 0 ; i<n ;i++){
        arr[i] = B[i];
    }


}

void radixSort(vector<int>& arr ,int n ){
    int max = *max_element(arr.begin(), arr.end());
    for(int p = 1 ; max/p > 0 ; p = p*10){
        countSort(arr , n , p);
    }
    
}

int main(){
    vector <int> arr = {3 , 2 ,5 , 1 , 21 , 34 ,12 , 123 , 53, 4};
    radixSort(arr , arr.size());
    for(int i = 0 ; i< arr.size();i++){
        cout << arr[i] << " ";
    }
} 
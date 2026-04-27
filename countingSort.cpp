#include<bits/stdc++.h>
using namespace std;

vector<int> countingSort(vector<int> &A, int n, int k){
    
    vector<int> C(k+1,0);  
    vector<int> B(n);       

 
    for(int i = 0; i < n; i++){
        C[A[i]]++;
    }

    
    for(int i = 1; i <= k; i++){
        C[i] += C[i-1];
    }


    for(int i = n-1; i >= 0; i--){
        C[A[i]]--;
        B[C[A[i]]] = A[i];
    }

    return B;
}

int main(){
    vector<int> arr = {1,2,4,5,1,2};

    vector<int> ans = countingSort(arr, arr.size(), 5);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}
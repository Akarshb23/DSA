#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin >> n  ;
    int Arr[n];
    for(int i = 0 ; i<n ; i++){
        cin >> Arr[i] ;
    }
    for(int i = 0 ; i<n-1 ; i++){
        int min = Arr[i];
        int loc = i ;
        for(int j = i+1 ; j<n ; j++){
            if(Arr[j]<min){
                min = Arr[j];
                loc =  j;
            }
        }
        swap(Arr[i],Arr[loc]);
    }
    for(int p : Arr){
        cout << p << " ";
    }
    return 0 ;
}
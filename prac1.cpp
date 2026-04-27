#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n , key ;
    cin >> n >> key ;
    int Arr[n];
    for(int i = 0 ; i<n ; i++){
        cin >> Arr[i] ;
    }
    int low = 0 ; 
    int high = n -1 ;
    int mid = low+(high-low)/2;
    while(low <=high){
        if(Arr[mid]==key){
            cout << "Element found at " << mid ;
            break;
        }
        else if(Arr[mid]<key){
            low = mid + 1 ;
        }
        else{
            high = mid - 1;
        }
        mid = low + (high-low)/2;
    }
    if(low>high)
        cout << "Element not found";
    return 0 ;
}
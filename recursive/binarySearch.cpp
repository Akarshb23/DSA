/* binary Search recursion */
#include<bits/stdc++.h>
using namespace std ;
int BinarySearch(vector<int> &arr , int left , int right , int key){
    
    if(left>right)
        return -1;
    int mid = left + (right-left)/2;
    if(arr[mid]>key)
        BinarySearch(arr,left, mid -1 , key);
    else if(arr[mid]<key)
        BinarySearch(arr,mid+1 , right , key);
    else
        return mid ;
}


int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int key ;
    cin >> key;
    int left = 0 , right = arr.size()-1;
    cout << BinarySearch(arr,left,right,key) << endl;
    
    
}
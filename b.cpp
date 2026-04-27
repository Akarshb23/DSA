//binary search
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int l=0,h=n-1;
    int ans=-1;
    while(l<=h) {
        int mid = l+(h-l)/2;
        if(arr[mid]==key) {
            ans=mid;
            break;
        }
        else if(arr[mid]>key) {
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }

    if(ans == -1) cout<<"element not found";
    else cout<<"element found at index: "<<ans;

    return 0;

}
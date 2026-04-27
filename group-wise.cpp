#include <bits/stdc++.h>
using namespace std;
int main() {
	int t ;
	cin >> t ;
	while(t--){
	    int N ;
	    cin >> N ;
	    int a[N];
	    for(int i = 0 ;i<N ;i++){
	        cin >> a[i];
	    }
	    int maxi = a[0] ;
	    int mini = a[0];
	    int sum = a[0];
	    for(int i = 1 ; i<N ; i++){
	        if(a[i]>maxi)
	            maxi = a[i];
	        if(a[i]<mini)
	            mini = a[i];
	        sum += a[i];
	    }
        double avg = (double)sum/N;
	    cout << maxi << " " << mini << " " << sum << " " << avg << endl ;
	}
    return 0 ;
}
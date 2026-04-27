/* factorial */
#include<bits/stdc++.h>
using namespace std ;

long long int fact(int n){
    if(n == 0 || n == 1)
        return 1;
    return n * fact(n-1);
}
int main(){
    int N ;
    cin >> N ;
    long long int result = fact(N);
    cout << result << endl ;
    
}
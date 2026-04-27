/* sum of digits*/
#include<bits/stdc++.h>
using namespace std ;

long long int sumOfDigits(int n){
    long long int sum = 0 ;
    while(n>0){
        int digit = n%10;
        sum += digit;
        n/=10;
    }
    return sum ;
    
}
int main(){
    long long int N ;
    cin >> N ;
    long long int result = sumOfDigits(N);
    cout << result << endl;
    
    
}
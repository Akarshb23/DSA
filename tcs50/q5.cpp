/* reverse a integer */
#include<bits/stdc++.h>
using namespace std ;

int rev(int n){
    int temp = 0;
    while(n>0){
        int digit = n%10;
        temp = temp*10 + digit ;
        n/=10;
    }
    return temp;

}
int main(){
    int N ;
    cin >> N ;
    int result = rev(N);
    cout << result << endl ;
    
}
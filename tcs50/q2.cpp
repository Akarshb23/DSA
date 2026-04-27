/* prime or not */
#include<bits/stdc++.h>
using namespace std ;

bool Prime(int n){
    int count = 0 ;
    if(n== 0 || n == 1)
        return false;
    for(int i = 2 ; i*i <= n ;i++){
        if(n%i == 0)
            count++;
    }
    if(count == 0)
        return true;
    else
        return false;
}
int main(){
    int N ;
    cin >> N ;
    bool result = Prime(N);
    if(result)
        cout << "The number is prime" << endl;
    else
        cout << "The number is not prime" << endl;
}
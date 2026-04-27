/* even odd */
#include<bits/stdc++.h>
using namespace std ;

bool Even(int n){
    if(n%2==0)
        return true;
    else
        return false;
}
int main(){
    int N ;
    cin >> N ;
    bool result = Even(N);
    if(result)
        cout << "The number is even" << endl;
    else
        cout << "The number is odd" << endl;
}
/* palindrome number */
#include<bits/stdc++.h>
using namespace std ;

bool palindrome(int n){
    string s = to_string(n);
    int l = 0 , r = s.size()-1;
    while(l<=r){
        if(s[l++]!=s[r--])
            return false;

    }
    return true ;
}
int main(){
    int N ;
    cin >> N ;
    bool result = palindrome(N);
    if(result)
        cout << "The number is Palindrome" << endl;
    else
        cout << "The number is not Palindrome" << endl;
    
}
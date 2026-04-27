/*  count vowels and consonants */
#include<bits/stdc++.h>
using namespace std ;

vector<int> Count(string & s){
    vector<int> ans(2,0);
    for(char c : s ){
        c = tolower(c);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            ans[0]++;
        }
        else
            ans[1]++;
    }
    return ans ;
}
int main(){
    string s ;
    cin >> s ;
    vector<int> ans = Count(s);
    for(int i = 0 ; i<2 ; i++){
        cout << ans[i] << " ";
    }
    
    
}
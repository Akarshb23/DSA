/* armstrong number */
#include<bits/stdc++.h>
using namespace std ;

bool Armstrong(int n){
    int ori = n ;
    int temp = 0;
    string y = to_string(n);
    int z = y.size();
    while(n>0){
        int digit = n%10;
        temp += int(round(pow(digit,z)));
        n/=10;
    }
    if(temp == ori )
        return true ;
    else
        return false;
}
int main(){
    int N ;
    cin >> N ;
    bool result = Armstrong(N);
    if(result)
        cout << "The number is Armstrong" << endl;
    else
        cout << "The number is not Armstrong" << endl;
    
}
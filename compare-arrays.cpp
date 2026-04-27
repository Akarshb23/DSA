#include <bits/stdc++.h>
using namespace std;
int main() {
	int N , M ;
    cin >> N >> M ;
    vector<int> ans ;
    vector<int> a(N) , b(M);
    for(int i = 0; i<N ;i++) cin >> a[i];
    for(int i = 0;i<M ;i++) cin >> b[i];
    for(int i = 0 ; i<M ;i++){
        int count = 0 ;
        for(int j = 0 ; j<N ; j++){
            if(a[j]>b[i])
                count++;
        }
        ans.push_back(count);
    }
    for(int i = 0 ; i < M ; i++){
        cout << ans[i] << " ";
    }
    return 0 ;
}
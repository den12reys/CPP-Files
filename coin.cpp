#include <bits/stdc++.h>
using namespace std;

int main(){
    int q; cin >> q;
    while(q--){
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int max_of_three = max({a,b,c});
        if((n-(3*max_of_three-a-b-c))%3 == 0) cout << 1 <<'\n';
        else cout << 0 <<'\n';
    }
    return 0;
}
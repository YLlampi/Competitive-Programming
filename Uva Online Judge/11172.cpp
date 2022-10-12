#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int m,n;cin>>m>>n;
        if(m<n) cout << "<" << '\n';
        else if(m>n) cout << ">" << '\n';
        else cout << "=" << '\n';
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void solve(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin>>n;
    map<int,int> mp;
    for(int i = 0; i < n; i++) {
        int a; cin>>a;
        mp[a]++;
    }

    int cont = 0;
    bool band = true;
    for(auto& i : mp) {
        if(i.second % 2 != 0) {
            cout << i.first << ' ';
            cont++;
            band = false;
        }
        
    }
    if(band){
            cout << ":D";
        }
    cout << endl;
    cout << cont << endl;
    cout << n - cont << endl;

    return 0;
}
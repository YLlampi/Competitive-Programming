#include <bits/stdc++.h>
using namespace std;

void solve(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    map<int,int> mp;
    int n; cin>>n;
    while(n--) {
        int a; cin>>a;
        mp[a]++;
    }

    for(auto& i : mp) {
        cout << i.first << ' ' << i.second << endl;
    }


    return 0;
}
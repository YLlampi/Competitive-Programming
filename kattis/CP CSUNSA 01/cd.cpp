#include <bits/stdc++.h>
using namespace std;

void solve(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    while(cin>>n>>m and n and m){
        unordered_set<int> st;
        for(int i = 0; i < n; i++){
            int as; cin>>as;
            st.insert(as);
        }

        int cont = 0;
        for(int i = 0; i < m; i++){
            int as; cin>>as;
            if(st.count(as)) cont++;
        }
        cout << cont << '\n';
    }


    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void solve(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int a, b; cin>>a>>b;

    vector<string> arr(a);
    set<string> st2;
    for(int i = 0; i < a; i++) {
        cin>>arr[i];
    }

    for(int i = 0; i < b; i++) {
        string num; cin>>num;
        st2.insert(num);
    }

    int cont = 0;
    vector<string> cad;

    for(int i = 0; i < a; i++) {
        if (st2.find(arr[i]) == st2.end()) {
            cont++;
            cad.push_back(arr[i]);
        }
    }

    sort(cad.begin(), cad.end());

    cout << cont << endl;
    for(auto& i : cad) {
        cout << i << ' ';
    }

    cout << endl;
    

    return 0;
}
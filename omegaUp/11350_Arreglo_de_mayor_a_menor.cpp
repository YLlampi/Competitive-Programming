#include <bits/stdc++.h>
using namespace std;

void solve(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    
    vector<int> arr;
    int a;
    while(cin>>a) {
        arr.push_back(a);
    }

    sort(arr.begin(), arr.end(), greater<int>());

    for(auto& i : arr) {
        cout << i << ' ';
    }
    cout << endl;
    
    return 0;
}
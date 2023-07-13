#include <bits/stdc++.h>
using namespace std;

void solve(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int a,b; cin>>a>>b;

    vector<int> arr(a);
    for(int i = 0; i < a; i++) {
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());

    int cont = 0;
    int cs = 0;
    for(int i = 0; i < a; i++) {
        cont += arr[i];
        if(cont <= b) {
            cs++;
        } else break;
    }

    cout << cs << endl;

    return 0;
}
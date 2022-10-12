#include <bits/stdc++.h>
using namespace std;

void solve(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while(cin>>n){
        vector<int> arr(n);
        vector<int> ar(n-1);
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        for(int i = 1; i < n; i++){
            ar[i-1] = abs(arr[i-1]-arr[i]);
        }

        sort(ar.begin(), ar.end());
        bool band = true;
        for(int i = 0; i < ar.size(); i++){
            if(i+1 != ar[i]){
                band = false;
                break;
            }
        }
        if(band) cout << "Jolly" << '\n';
        else cout << "Not jolly" << '\n';
    }


    return 0;
}
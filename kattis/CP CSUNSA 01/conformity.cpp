#include <bits/stdc++.h>
using namespace std;

void solve(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cont = 0;
    int n;
    int ms = -1;
    map<vector<int>, int> mp;
    vector<int> arr(5);
    cin>>n;
    int m = n;
    while(n--){
        for(int i = 0; i < 5; i++){
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        mp[arr]++;     
    }

    for(auto i : mp) if(ms < i.second) ms = i.second;
    for(auto i : mp) if(ms == i.second) cont++;
    cout << ms*cont << '\n';


    return 0;
}
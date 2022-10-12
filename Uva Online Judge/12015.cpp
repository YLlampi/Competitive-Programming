#include <bits/stdc++.h>
using namespace std;

void solve(){

}

map<string,int> mp;
vector<pair<string,int>> arr;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin>>n;
    for(int j = 0; j < n; j++){
        string cad;
        int p;
        for(int i = 0; i < 10; i++){
            cin>>cad>>p;
            arr.push_back(make_pair(cad,p));
        }
        int max = -1;
        for(auto i : arr){
            if(max < i.second) max = i.second;
        }
        cout << "Case #"<<j+1<<":\n";
        for(auto i : arr){
            if(max == i.second) cout << i.first << '\n';
        }
        arr.clear();
    }


    return 0;
}

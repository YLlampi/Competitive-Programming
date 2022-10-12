#include <bits/stdc++.h>
using namespace std;

void solve(){

}

map<char,int> mp={
    {'B',1},
    {'F',1},
    {'P',1},
    {'V',1},
    {'C',2},
    {'G',2},
    {'J',2},
    {'K',2},
    {'Q',2},
    {'S',2},
    {'X',2},
    {'Z',2},
    {'D',3},
    {'T',3},
    {'L',4},
    {'M',5},
    {'N',5},
    {'R',6}
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string cad;
    while(cin>>cad){
        int ant = -1;
        for(int i = 0; i < cad.size(); i++){
            auto it = mp.find(cad[i]);
            if(it != mp.end() and mp[cad[i]] != ant){
                cout << mp[cad[i]];
            }
            if(it == mp.end()) ant = -1;
            else ant = mp[cad[i]];
        }
        cout << '\n';
    }

    return 0;
}
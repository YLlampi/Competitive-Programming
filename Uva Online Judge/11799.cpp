#include <bits/stdc++.h>
using namespace std;

void solve(){

}

int main(){
    int a; cin>>a;
    for(int j = 0; j < a; j++){
        int b;
        int m = -1;
        cin>>b;
        for(int i = 0; i < b; i++){
            int c; cin>>c;
            if(m < c) m = c;
        }
        cout << "Case " << j+1 << ": " << m << '\n';
    }


    return 0;
}
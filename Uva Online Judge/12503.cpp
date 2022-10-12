#include <bits/stdc++.h>
using namespace std;

void solve(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n+1];
        string cad;
        int pos = 0;
        for(int i = 0; i < n; i++){
            cin>>cad;
            if(cad[0] == 'R') {arr[i+1] = 1; pos++;}
            else if(cad[0] == 'L') {arr[i+1] = -1; pos--;}
            else{
                string a; int num;
                cin>>a>>num;
                arr[i+1] = arr[num];
                pos += arr[num];
            }
        }
        cout << pos << '\n';
    }

    return 0;
}
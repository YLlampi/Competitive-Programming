#include <bits/stdc++.h>
using namespace std;

void solve(){

}

int main(){
    int a,b;
    while(cin>>a>>b and a and b){
        for(int i = 0; i < b; i++){
            int d,f; cin>>d>>f;
            
            if(d-1 <= 0){
                cout << "* ";
            }
            else{
                 cout << d-1 << ' ';
            }
            if(f+1 >= a){
                cout << '*';
            }
            else{
                cout << f+1;
            }
            cout << '\n';
        }
        cout << "-\n";
    }


    return 0;
}
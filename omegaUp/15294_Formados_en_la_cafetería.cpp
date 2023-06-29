#include <bits/stdc++.h>
using namespace std;

void solve(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    queue<string> alumnos;
    queue<string> trabajadores;

    int n; cin>>n;

    string a,b,c;

    while(n--){
        cin>>a;
        if(a == "LLEGA") {
            cin>>b>>c;
            if(b == "ALUMNO") {
                alumnos.push(c);
            } else {
                trabajadores.push(c);
            }
        }else {
            if(trabajadores.empty()) {
                cout << alumnos.front() << '\n';
                alumnos.pop();
            }
            else {
                cout << trabajadores.front() << '\n';
                trabajadores.pop();
            }
        }
    }

    return 0;
}
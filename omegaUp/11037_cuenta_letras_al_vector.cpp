#include <bits/stdc++.h>
using namespace std;

void solve(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string cadena; cin>>cadena;
    vector<int> frecuencia(26, 0);
    for(int i = 0; i < cadena.size(); i++) {
        int indice = cadena[i] - 'a';
        frecuencia[indice]++;
    }

    for(int i = 0; i < 26; i++) {
        cout << frecuencia[i] << ' ';
    }
    cout << endl;
    for(int i = 0; i < 26; i++) {
        if(frecuencia[i] != 0){
            char letra = 'a' + i;
            cout << "La letra " << letra << " aparece " << frecuencia[i] << " veces" << endl;
        }
    }


    return 0;
}
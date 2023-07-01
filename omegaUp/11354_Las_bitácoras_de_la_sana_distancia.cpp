#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin>>n;
    queue<int> tiempos;
    for(int i = 0; i < n; i++) {
        int aux; cin>>aux;
        tiempos.push(aux);
    }

    vector<string> numeros(n);
    for(int i = 0; i < n; i++) {
        cin>>numeros[i];
    }
    
    int cont_numeros = 0;

    stack<string> st;
    st.push(numeros[cont_numeros++]);
    
    vector<string> orden_salida;
    
    while(not st.empty()) {
        orden_salida.push_back(st.top());
        st.pop();

        for(int i = 0; i < tiempos.front() and cont_numeros < n; i++) {
            st.push(numeros[cont_numeros++]);
        }
        tiempos.pop();
    }

    for(auto& i : orden_salida) {
        cout << i << endl;
    }
    
    return 0;
}
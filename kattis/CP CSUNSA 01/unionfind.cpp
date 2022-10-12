#include <bits/stdc++.h>
using namespace std;

vector<int> arr(1000012, -1);

int find(int a) {
    if(arr[a] < 0) {
        return a;
    }

    arr[a] = find(arr[a]);
    return arr[a];
}

void unionFind(int a, int b) {
    a = find(a);
    b = find(b);

    if(a == b) {
        return;
    }

    if(arr[a] == arr[b]) {
        arr[a] += arr[b];
        arr[b] = a;
        return;
    }

    if(arr[a] > arr[b]) {
        arr[b] += arr[a];
        arr[a] = b;
        return;
    }

    if(arr[a] < arr[b]) {
        arr[a] += arr[b];
        arr[b] = a;
        return;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n,m; cin>>n>>m;
    while(m--){
        char c;
        int a, b;
        cin>>c>>a>>b;
        if(c == '?'){
            if(find(a) == find(b)) cout << "yes" << '\n';
            else cout << "no" << '\n';
        }else{
            unionFind(a,b);
        }
    }
    

    return 0;
}
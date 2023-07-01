#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    std::cin >> n;
    
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::sort(arr.begin(), arr.end());

    std::vector<int> num_menor;
    num_menor.reserve(n);
    int menor = 0;
    for (int i = 0; i < n; i++) {
        while (menor < n && arr[menor] < arr[i]) {
            menor++;
        }
        num_menor.push_back(menor);
    }

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';

    for (int i = 0; i < n; i++) {
        std::cout << num_menor[i] << ' ';
    }
    std::cout << '\n';

    return 0;
}

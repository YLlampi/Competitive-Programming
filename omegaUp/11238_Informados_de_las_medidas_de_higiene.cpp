#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);

    int a, b;
    std::cin >> a >> b;

    std::vector<int> arr(a);
    for (int i = 0; i < a; ++i) {
        std::cin >> arr[i];
    }

    std::vector<int> prefixSum(a);
    prefixSum[0] = arr[0];
    for (int i = 1; i < a; ++i) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    for (int i = 0; i < b; ++i) {
        int info;
        std::cin >> info;
        int j = std::lower_bound(prefixSum.begin(), prefixSum.end(), info) - prefixSum.begin();
        std::cout << j + 1 << ' ';
    }

    return 0;
}

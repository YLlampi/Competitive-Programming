#include <iostream>
#include <unordered_map>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    std::cin >> n;

    std::unordered_map<int, int> frequency;
    int maxFrequency = 0;
    int mode = 0;

    for (int i = 0; i < n; i++) {
        int m;
        std::cin >> m;
        frequency[m]++;

        if (frequency[m] > maxFrequency) {
            maxFrequency = frequency[m];
            mode = m;
        }
    }

    std::cout << mode << std::endl;

    return 0;
}
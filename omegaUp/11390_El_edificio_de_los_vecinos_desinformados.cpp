#include <iostream>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, m;
    std::cin >> n >> m;

    bool arr[n+1];
    bool arr_dos[n+1];

    std::fill(arr, arr + n + 1, true);
    std::fill(arr_dos, arr_dos + n + 1, true);

    for (int i = 0; i < m; i++) {
        int a, b;
        std::cin >> a >> b;
        arr[a] = false;
        arr_dos[b] = false;
    }

    int arr_tres_count = 0;
    int arr_cuatro_count = 0;
    int arr_tres[n+1];
    int arr_cuatro[n+1];
    for (int i = 1; i < n + 1; i++) {
        if ((arr[i] == false && arr_dos[i] == true) || (arr[i] == true && arr_dos[i] == true)) {
            arr_tres[arr_tres_count++] = i;
        }
        if (arr[i] == true) {
            arr_cuatro[arr_cuatro_count++] = i;
        }
    }
    std::sort(arr_tres, arr_tres + arr_tres_count);
    std::sort(arr_cuatro, arr_cuatro + arr_cuatro_count);

    arr_tres_count = std::unique(arr_tres, arr_tres + arr_tres_count) - arr_tres;
    arr_cuatro_count = std::unique(arr_cuatro, arr_cuatro + arr_cuatro_count) - arr_cuatro;

    std::cout << arr_tres_count << " " << arr_cuatro_count << '\n';
    for (int i = 0; i < arr_tres_count; i++) {
        std::cout << arr_tres[i] << ' ';
    }
    std::cout << '\n';
    for (int i = 0; i < arr_cuatro_count; i++) {
        std::cout << arr_cuatro[i] << ' ';
    }
    std::cout << '\n';

    return 0;
}

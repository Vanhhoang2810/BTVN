#include <iostream>
using namespace std;

int binary_search(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binary_search(arr, l, mid - 1, x);
        return binary_search(arr, mid + 1, r, x);
    }
    return -1;
}

int main() {
    int r;
    cin >> r;
    int arr[r];
    for (int i = 0; i<n; i++) {
        cin >> arr[n];
    }
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr, 0, n - 1, x);
    (result == -1) ? cout << "Khong tim thay " << x << endl
                   : cout << "Tim thay " << x << " tai vi tri " << result << endl;
    return 0;
}

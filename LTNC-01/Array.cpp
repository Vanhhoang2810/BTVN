#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    
    int* array = new int [n];
    int* arr = new int [n];
    
    for (int i = 0; i<n; i++) {
        cin >> array[i];
    }
    
    for (int i = 0; i<n; i++) {
        arr[i] = array[n - i - 1];
        cout << arr[i] << " ";
    }
    
    return 0;
}

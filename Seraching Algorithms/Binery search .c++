#include <iostream>
using namespace std;

int main() {
    int a[10], n, key, i, low, high, mid, flag = 0;
    
    cout << "Enter the size of an array: ";
    cin >> n;
    
    cout << "\nEnter the sorted array elements: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cout << "\nEnter the element you want to search: ";
    cin >> key;
    
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    
    while (low <= high) { // Changed condition from < to <=
        if (key == a[mid]) {
            flag = 1;
            break;
        }
        else if (key < a[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
        mid = (low + high) / 2;
    }
    
    if (flag == 1) {
        cout << "Element " << key << " is found at position " << mid << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
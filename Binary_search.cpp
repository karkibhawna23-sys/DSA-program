#include <iostream>
using namespace std;

int main() {
    int n, key, count = 0;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter key element: ";
    cin >> key;

    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;
        count++;

        if(arr[mid] == key) {
            cout << "Present " << count;
            return 0;
        }
        else if(key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    cout << "Not Present " << count;

    return 0;
}
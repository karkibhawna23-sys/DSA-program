#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int n, key;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cin >> key;

        int low = 0, high = n - 1;
        int first = -1, last = -1;

        // Find first occurrence
        while(low <= high) {
            int mid = (low + high) / 2;
            if(arr[mid] == key) {
                first = mid;
                high = mid - 1;
            }
            else if(arr[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
        }

        low = 0; 
        high = n - 1;

        // Find last occurrence
        while(low <= high) {
            int mid = (low + high) / 2;
            if(arr[mid] == key) {
                last = mid;
                low = mid + 1;
            }
            else if(arr[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
        }

        if(first == -1)
            cout << "Key not present" << endl;
        else
            cout << key << " " << (last - first + 1) << endl;
    }

    return 0;
}
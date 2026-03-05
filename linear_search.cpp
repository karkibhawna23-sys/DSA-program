#include <iostream>
using namespace std;

int main() {
    int n, key, count = 0;
    
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter key element: ";
    cin >> key;

    for(int i = 0; i < n; i++) {
        count++;
        if(arr[i] == key) {
            cout << "Present " << count;
            return 0;
        }
    }

    cout << "Not Present " << count;

    return 0;
}
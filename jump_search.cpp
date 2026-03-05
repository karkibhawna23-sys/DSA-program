#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int n, key, count = 0;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cin >> key;

        int i = 0;
        bool found = false;

        while(i < n && arr[i] < key) {
            count++;
            i += 2;
        }

        int start = i - 2;
        if(start < 0) start = 0;

        for(int j = start; j <= i && j < n; j++) {
            count++;
            if(arr[j] == key) {
                found = true;
                break;
            }
        }

        if(found)
            cout << "Present " << count << endl;
        else
            cout << "Not Present " << count << endl;
    }

    return 0;
}

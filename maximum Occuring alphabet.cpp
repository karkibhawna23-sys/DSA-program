#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int n;
        cin >> n;

        char arr[n];
        int count[26] = {0};

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            count[arr[i] - 'a']++;
        }

        int maxCount = 0;
        char maxChar;

        for(int i = 0; i < 26; i++) {
            if(count[i] > maxCount) {
                maxCount = count[i];
                maxChar = 'a' + i;
            }
        }

        if(maxCount <= 1)
            cout << "No Duplicates Present" << endl;
        else
            cout << maxChar << "-" << maxCount << endl;
    }

    return 0;
}
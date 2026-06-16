#include <iostream>
#include <vector>
using namespace std;

int smallbig(const vector<int>& arr) {
    int n = arr.size();
    int small = arr[0];
    int big = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] < small) {
            small = arr[i];
        }
        if (arr[i] > big) {
            big = arr[i];
        }
    }

    int result = abs(small - big);
    return result;
}

int main() {
    int n;
    int Testcase;
    cin >> Testcase;
    for (int j=0;j<Testcase;j++){
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k = smallbig(arr)+1;
    cout << k << endl;
}
    return 0;
}
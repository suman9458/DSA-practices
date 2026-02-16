#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int s = 0;
    int e = n;
    bool found = false;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        long long sqr = 1LL * mid * mid;

        if (sqr == n) {
            cout << "Perfect square root = " << mid << endl;
            found = true;
            break;
        } else if (sqr > n) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    if (!found) {
        cout << n << " is not a perfect square." << endl;
    }

    return 0;
}


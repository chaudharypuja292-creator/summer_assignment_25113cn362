#include <iostream>
using namespace std;

int main() {
    int x, n;
    long long ans = 1;

    cout << "Enter x and n: ";
    cin >> x >> n;

    for (int i = 1; i <= n; i++) {
        ans = ans * x;
    }

    cout << x << "^" << n << " = " << ans;

    return 0;
}
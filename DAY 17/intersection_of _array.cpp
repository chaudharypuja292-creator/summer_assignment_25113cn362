#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    int n1 = 4, n2 = 4;

    set<int> s1;

    for (int i = 0; i < n1; i++) {
        s1.insert(arr1[i]);
    }

    cout << "Intersection: ";

    for (int i = 0; i < n2; i++) {
        if (s1.count(arr2[i])) {
            cout << arr2[i] << " ";
            s1.erase(arr2[i]); // avoid duplicates
        }
    }

    return 0;
}
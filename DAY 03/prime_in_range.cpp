#include<iostream>
using namespace std;

int main(){
    int start, end;

    cout << "Enter start and end: ";
    cin >> start >> end;

    for(int i = start; i <= end; i++) {
        if(i <= 1)
            continue;

        bool isPrime = true;

        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime)
            cout << i << " ";
    }

    return 0;
};
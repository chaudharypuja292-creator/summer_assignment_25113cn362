#include<iostream>
using namespace std;

int main(){
    
     int num, rem;
    int product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0) {
        rem = num % 10;
        product = product * rem;
        num = num / 10;
    }

    printf("Product of digits = %d", product);

    return 0;
};
#include <stdio.h>


int sum_of_digits(int n) {
   
    if (n == 0) {
        return 0;
    }
   r
    return (n % 10) + sum_of_digits(n / 10);
}

int main() {
    int number;
    printf("enter number: ");
    scanf("%d",&number);
    printf("Sum of digits of %d is %d\n", number, sum_of_digits(number));
    return 0;
}

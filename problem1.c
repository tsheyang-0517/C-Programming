#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int digits[9999];
    int num=0;

    int temp=n;
    while (temp > 0) {
        digits[num++] = temp%10;
        temp /= 10;
    }

    for (int i = 0;i < num/2;i++) {
        int temp = digits[i];
        digits[i] = digits[num-1-i];
        digits[num-1-i] = temp;
    }

    if (n % 3 == 0 && n % 5 == 0) {
        for (int i = 0;i < num/2;i++) {
            int temp = digits[i];
            digits[i] = digits[num-1-i];
            digits[num-1-i] = temp;
        }
        for (int i = 0;i < num;i++) {
            if (digits[i]%2 == 0) {
                digits[i] = 0;
            }
        }
    }
    else if (n%3 == 0) {
        for (int i = 0;i < num/2;i++) {
            int temp = digits[i];
            digits[i] = digits[num-1-i];
            digits[num-1-i] = temp;
        }
    }
    else if (n%5 == 0) {
        for (int i = 0;i < num;i++) {
            if (digits[i]%2 == 0) {
                digits[i] = 0;
            }
        }
    }

    for (int i = 0; i < num;i++) {
        printf("%d", digits[i]);
    }
    printf("\n");

    return 0;
}

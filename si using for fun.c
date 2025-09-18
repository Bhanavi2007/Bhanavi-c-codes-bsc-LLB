#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter principal amount for set %d: ", i + 1);
        scanf("%f", &principal);

        printf("Enter annual interest rate (e.g., 5 for 5%%) for set %d: ", i + 1);
        scanf("%f", &rate);

        printf("Enter time in years for set %d: ", i + 1);
        scanf("%f", &time);

        simple_interest = (principal * rate * time) / 100;

        printf("Simple Interest for set %d: %.2f\n\n", i + 1, simple_interest);
    }

    return 0;
}

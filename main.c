#include <stdio.h>

int main() {
    int month;
    printf("Enter the month : ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Invalid month\n");
        return 1;
    }

    int days;

    switch (month) {
        case 2:
            days = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            days = 31;
            break;
    }

    printf("Number of days in month %d: %d\n", month, days);

    return 0;
}


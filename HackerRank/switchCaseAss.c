#include <stdio.h>

int main() {
    int day;
    while(1) {
        printf("Enter day number (1-7, 0 to quit): ");
        scanf("%d", &day);

        if (day == 0)
            break;

        switch (day) {
            case 1:
                printf("The given day %d is Monday\n", day);
                break;
            case 2:
                printf("The given day %d is Tuesday\n", day);
                break;
            case 3:
                printf("The given day %d is Wednesday\n", day);
                break;
            case 4:
                printf("The given day %d is Thursday\n", day);
                break;
            case 5:
                printf("The given day %d is Friday\n", day);
                break;
            case 6:
                printf("The given day %d is Saturday\n", day);
                break;
            case 7:
                printf("The given day %d is Sunday\n", day);
                break;
            default:
                printf("Enter a valid day!!\n");
                break;
        }
    }
    

    return 0;
}
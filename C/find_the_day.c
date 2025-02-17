#include <stdio.h>

int main()
{
    int A, B, C, Remainder, year, month, day;
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // Days in each month
    
    // Input the certain date
    printf("Enter the date (Day/Month/Year): ");
    scanf("%d %d %d", &day, &month, &year);

    //A: last two digits of the year
    A = year % 100;

    //B: leap year count till the given year in the century
    B = A / 4;

    //Adjust for leap years in February of the given year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        daysInMonth[1] = 29;
    }

    //C: day count till the given date in the year
    C = 0;
    for (int i = 0; i < month - 1; i++) {
        C += daysInMonth[i];
    }
    C += day;

    // Final operation & printing the day of the week
    Remainder = ((A + B + C) % 7);

    printf("The day is: ");
    if (Remainder == 1) {
        printf("Saturday\n");
    } else if (Remainder == 2) {
        printf("Sunday\n");
    } else if (Remainder == 3) {
        printf("Monday\n");
    } else if (Remainder == 4) {
        printf("Tuesday\n");
    } else if (Remainder == 5) {
        printf("Wednesday\n");
    } else if (Remainder == 6) {
        printf("Thursday\n");
    } else if (Remainder == 0) {
        printf("Friday\n");
    }

    return 0;
}
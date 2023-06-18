//Number of days lapsed
//Count no. of days


#include <stdio.h>
#include <stdlib.h>


//check leap year or not
int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int get_days_in_month(int month, int year) {
    if (month == 2) {
        return is_leap_year(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

int main() {
    char date[11];  // As the input is always in the format "DD/MM/YYYY"
    int day, month, year;

    printf("Enter the date (in DD/MM/YYYY format): ");
    scanf("%s", date);

    // Extracting day, month, and year from the input string

    day = atoi(date);
    month = atoi(date + 3);
    year = atoi(date + 6);

    // Calculating the number of days elapsed

    int days_elapsed = 0;
    for (int m = 1; m < month; m++) {
        days_elapsed += get_days_in_month(m, year);
    }

    days_elapsed += day ;

    printf("Number of days elapsed: %d\n", days_elapsed);

    return 0;
}



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char time[9];  // As the input is always in the format "hh:mm:ss"
    unsigned long hours, minutes, seconds, totalSeconds;

    printf("Enter the time (in hh:mm:ss format): ");
    scanf("%s", time);

    // Tokenizing the time string
    char* token = strtok(time, ":");
    hours = strtoul(token, NULL, 10);
    token = strtok(NULL, ":");
    minutes = strtoul(token, NULL, 10);
    token = strtok(NULL, ":");
    seconds = strtoul(token, NULL, 10);

    // Calculating the total number of seconds
    totalSeconds = hours * 3600 + minutes * 60 + seconds;

    printf("Total seconds: %lu\n", totalSeconds);

    return 0;
}

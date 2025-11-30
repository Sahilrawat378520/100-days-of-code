//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
int main() {
    char date[20];
    char day[3], month[3], year[5];
    int i = 0, j = 0, k = 0;
    printf("Enter date (dd/mm/yyyy): ");
    fgets(date, sizeof(date), stdin);
    while (date[i] != '/' && date[i] != '\0') {
        day[j++] = date[i++];
    }
    day[j] = '\0';
    i++;
    j = 0;
    while (date[i] != '/' && date[i] != '\0') {
        month[j++] = date[i++];
    }
    month[j] = '\0';
    i++;
    j = 0;
    while (date[i] != '\n' && date[i] != '\0') {
        year[j++] = date[i++];
    }
    year[j] = '\0';
    printf("%s-", day);
    if (month[0] == '0') k = month[1] - '0';
    else k = (month[0] - '0') * 10 + (month[1] - '0');
    if (k == 1) printf("Jan-");
    else if (k == 2) printf("Feb-");
    else if (k == 3) printf("Mar-");
    else if (k == 4) printf("Apr-");
    else if (k == 5) printf("May-");
    else if (k == 6) printf("Jun-");
    else if (k == 7) printf("Jul-");
    else if (k == 8) printf("Aug-");
    else if (k == 9) printf("Sep-");
    else if (k == 10) printf("Oct-");
    else if (k == 11) printf("Nov-");
    else if (k == 12) printf("Dec-");
    printf("%s\n", year);
    return 0;
}

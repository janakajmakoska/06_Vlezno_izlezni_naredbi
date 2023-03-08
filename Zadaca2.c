#include <stdio.h>
#include <string.h>

int main() {
    char input[11];
    printf("Внесете датум во формат gg/mm/dd, gg-mm-dd или gg+mm+dd: ");
    scanf("%s", input);

    char delimiter;
    int year, month, day;
    sscanf(input, "%d%c%d%c%d", &day, &delimiter, &month, &delimiter, &year);

    // Претвори ја нумеричката вредност на месецот во име на месецот
    char* months[] = {"јануари", "февруари", "март", "април", "мај", "јуни",
                      "јули", "август", "септември", "октомври", "ноември", "декември"};
    char* month_name = months[month - 1];

    // Испечати го датумот со име на месецот
    printf("%d %s %d", day, month_name, year);
    return 0;
}

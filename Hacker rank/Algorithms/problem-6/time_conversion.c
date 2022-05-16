#include <stdio.h>
#include <string.h>

int main()
{
    long long int hour = 0, minute = 0, second = 0;
    char str[10];

    ///take string until get new line
    scanf("%[^\n]%*c",str);

    /// convert first two character to string
    /// and put it to inside hour
    hour = (str[0] - '0') * 10 + (str[1] - '0');
    minute = (str[3] - '0') * 10 + (str[4] - '0');
    second = (str[6] - '0') * 10 + (str[7] - '0');

    /// covert time with military time
    if (hour < 12 && str[8] == 'P') hour += 12;
    if (hour == 12 && str[8] == 'A') hour = 0;

    ///The 0 means to pad the field using zeros
    ///and the 2 means that the field is two characters wide,
    /// so for any numbers that take less than 2 characters to display,
    ///it will be padded with a 0

    printf("%02lld:%02lld:%02lld\n", hour, minute, second);

    return 0;
}

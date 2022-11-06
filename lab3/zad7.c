#include <stdio.h>

int isLeap(int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        return 1;

    return 0;
}

int main()
{
    int day, month, year;
    scanf("%d %d %d", &day, &month, &year);
    if (day <= 0 || month <= 0 || year <= 0)
    {
        return 1;
    }
    if (month >= 1 && month <= 12)
    {
        int selector = month % 2;
        if (month == 2)
        {
            if (isLeap(year) == 1)
            {
                if (day <= 29)
                {
                    printf("true\n");
                    return 0;
                }
            }
            if (day <= 28)
            {
                printf("true\n");
                return 0;

            }
        }
        else if ((selector == 1 || month == 8) && month <= 8)
        {
            if (day <= 31) {
                printf("true\n");
                return 0;
                
            }
        }
        else if (month > 8 && selector == 0)
        {
            if (day <= 31) {
                printf("true\n");
                return 0;
                
            }
        }else if ((selector == 0 || month != 8) && month <= 8) {
            if (day <= 30) {
                printf("true\n");
                return 0;
                
            }
        }else if (month > 8 && selector == 1)
        {
            if (day <= 30) {
                printf("true\n");
                return 0;
                
            }
        }
    }
    printf("false\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int min_diff(int day_temp[], int night_temp[], int n)
{
    int difference;
    int i, index = 0;

    difference = abs(day_temp[0] - night_temp[0]);

    for (i = 1; i < n; i++)
    {
        if (difference > abs(day_temp[i] - night_temp[i]))
        {
            difference = abs(day_temp[i] - night_temp[i]);
            index = i;
        }
    }
    return index;
}

int max_diff(int day_temp[], int night_temp[], int n)
{
    int difference;
    int i, index = 0;

    difference = abs(day_temp[0] - night_temp[0]);

    for (i = 1; i < n; i++)
    {
        if (difference < abs(day_temp[i] - night_temp[i]))
        {
            difference = abs(day_temp[i] - night_temp[i]);
            index = i;
        }
    }
    return index;
}

int main()
{
    int day_temp[30] = {17,18,18,19,19,20,18,19,19,18,18,18,17,16,15,15,15,16,17,17,15,14,15,14,13,14,15,15,15,14
    };

    int night_temp[30] = {9,11,11,6,5,5,4,9,9,9,9,8,8,9,9,8,8,7,7,6,7,7,8,8,7,7,7,7,7,4
    };

    int smallest = min_diff(day_temp, night_temp, 30);
    int largest  = max_diff(day_temp, night_temp, 30);

    printf("Largest difference: %d November 2025\n", largest + 1);
    printf("Smallest difference: %d November 2025\n", smallest + 1);
    printf("Devam etmek icin ENTER'a basin...");
    getchar();


    return 0;
}

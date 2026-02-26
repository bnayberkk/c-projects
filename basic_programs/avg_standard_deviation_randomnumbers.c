#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float average(int array[], int size);
float standardDeviation(int array[], int size);

int main() {
    int numbers[20];
    int i;

    srand(710); //numara
    
    for (i = 0 ; i < 20; i++) {
        numbers[i] = rand() % 100 + 1;
    }

    //sayılar yazdırılır virgülle ayırır
    for (i = 0; i < 20; i++) {
        printf("%d", numbers[i]);
        if (i != 19) {
            printf(", ");
        }
    }
    printf("\n");

    float avg = average(numbers, 20);
    float stdDev = standardDeviation(numbers, 20);

    printf("Average: %.2f ", avg);
    printf("Standard deviation: %.2f\n", stdDev);

system("pause");

    return 0;
}

//ortalama ve sapma hesaplama
float average(int array[], int size) {
    int sum = 0;
    int i;

    for (i = 0; i < size; i++) {
        sum += array[i];
    }

    return (float)sum / size;
}

float standardDeviation(int array[], int size) {
    float avg = average(array, size);
    float sum = 0;
    int i;

    for (i = 0; i < size; i++) {
        sum += (array[i] - avg) * (array[i] - avg);
    }

    return sqrt(sum / size);
}


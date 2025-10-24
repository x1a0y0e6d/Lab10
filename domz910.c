#include <stdio.h>
#include <math.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "RUS");
    char symbol;
    int radius;

    printf("Введите символ: ");
    scanf(" %c", &symbol);

    printf("Введите радиус: ");
    scanf("%d", &radius);

    int height = radius;
    int base = (int)(radius * sqrt(3));

    double step = (double)base / height;
    for (int i = 0; i < height; i++) {
        int symbols = (int)((i + 1) * step);
        for (int j = 0; j < symbols; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}

int ex2() {
    setlocale(LC_ALL, "RUS");
    char symbol;
    int radius;

    printf("Введите символ: ");
    scanf(" %c", &symbol);

    printf("Введите радиус: ");
    scanf("%d", &radius);

    int height = radius;
    int base = (int)(radius * sqrt(3));
    float c = 2 * radius;

    double step = (double)base / height;
    for (int i = 0; i < height; i++) {
        int symbols = (int)((i + 1) * step);
        for (int j = 0; j < symbols; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }

    char choice;
    printf("S-площадь, P-периметр: ");
    scanf(" %c", &choice);

    if (choice == 'S' || choice == 's') {
        float S = (height * base) / 2.0;
        printf("Площадь: %.2f\n", S);
    }
    else if (choice == 'P' || choice == 'p') {
        float P = height + base + c;
        printf("Периметр: %.2f\n", P);
    }

    return 0;
}
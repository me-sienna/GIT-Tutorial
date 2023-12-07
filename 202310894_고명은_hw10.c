#include <stdio.h>
#define NUM_CITIES 3

struct City 
{
    char name[50];
    char country[50];
    int population;
};

int main(void) 
{
    struct City cities[NUM_CITIES];
    printf("Input three cities:\n");
    for (int i = 0; i < NUM_CITIES; ++i) 
    {
        printf("Name > ");
        fgets(cities[i].name, sizeof(cities[i].name), stdin);

        printf("Country > ");
        fgets(cities[i].country, sizeof(cities[i].country), stdin);

        printf("Population > ");
        scanf_s("%d", &cities[i].population);
        getchar();
    }

    printf("\nPrinting the three cities:\n");
    for (int i = 0; i < NUM_CITIES; ++i) 
    {
        printf("%d. %s in %s with a population of %d people\n", i + 1, cities[i].name, cities[i].country, cities[i].population);
    }

    return 0;
}

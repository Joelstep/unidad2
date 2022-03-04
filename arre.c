#include <stdint.h>
#include <stdio.h>
void Promedio(uint32_t *dir, int *num);


int main(void)
{
    uint32_t arr[7] = {2,4,5,2,6,2,7};
    uint32_t *dira = arr;

    int promedio = 0;

    printf("Dire del arr: %p\n", dira);
    printf("arreglo: %p\n", arr);
    printf("promedio: %p\n", &promedio);

    for(int i = 0; i < 7; i++)
    {
        printf("elemento %d\n: %d\n", i + 1, *(dira + i));
    }
    
    Promedio(dira, &promedio);

    printf("promedio: %d\n", promedio);
    printf("Direccion prom: %p\n", &promedio);
}

void Promedio(uint32_t *dir, int *num)
{
    for(int i = 0; i < 7; i++)
    {
        *num = *num + *(dir + i);
    }
    printf("total: %d\n", *num);

    *num = *num / 7;
}
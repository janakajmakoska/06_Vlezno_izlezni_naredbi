#include <stdio.h>
int main ()
{
    int temp;
    float celsius;
    printf("Vnesi temperatura\n");
    scanf("%d",&temp);
    celsius = 5.0 /9.0 * (temp - 32);
    printf("%d F %10.3f C",temp,celsius);
    return 0;
}
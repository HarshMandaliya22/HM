#include <stdio.h>
void main()
{
    int num1 = 0, num2 = 0;

    printf("Enter the value of num1 :");
    scanf("%d", &num1);

    printf("Enter the value of num2 :");
    scanf("%d", &num2);

    if (num1 > num2)
        {
            printf("Num1 is greater than num2");
        }
    else 
    {
        printf("NUm 2 is greater than num1");
    }
}

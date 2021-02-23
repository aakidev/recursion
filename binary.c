#include<stdio.h>
int binary(int number)
{
    if (number == 0)
        return 0;
    else
        return (number % 2 + 10 *
                binary(number / 2));
}

int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    printf("\n");
    printf("%d", binary(number));
    return 0;
}

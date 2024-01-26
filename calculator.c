#include <stdio.h>
int main()
{
    float a, b;
    int c;
    printf("enter first number: ");
    scanf("%f", &a);
    printf("enter second number: ");
    scanf("%f", &b);
    printf("enter operation to be performed \n 1 for additon\n 2 for subtraction \n 3 for multiplication \n 4 for division\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("addition :%f", a + b);
        break;
    case 2:
        printf("subtraction: %f", a - b);
        break;
    case 3:
        printf("multipication: %f", a * b);
        break;
    case 4:
        printf("division: %f", a / b);
        break;

    default:
        printf("Invalid operator");
        break;
    }
}
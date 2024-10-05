#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a, b;
    char d, lad = 'Y';
    while (lad=='y' | lad=='Y')
    {
        printf("Enter A : ");
        scanf("%f", &a);
        printf("Enter B : ");
        scanf("%f", &b);
        printf("Enter operation : ");
        scanf(" %c", &d);
        switch (d)
        {
        case '+':
            printf("The sum of two are %.3f\n", a + b);
            break;
        case '-':
            printf("The diffrence of two are %.3f\n", a - b);
            break;
        case '*':
            printf("The multiplication of two are %.3f\n", a * b);
            break;
        case '/':
            printf("The division of two are %.2f \n", a / b);
            break;
            // if the input is given wrong
        }
        printf("Do you want to continue (Y/N)\n");
        scanf(" %c", &lad);
        if (lad == 'Y'| lad == 'y')
        {
            continue;
        }
        else
        {
            break;
        }
    }
    return 0;
}

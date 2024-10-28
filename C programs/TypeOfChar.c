#include <stdio.h>
#include <conio.h>

int main()
{   
    char l = 'Y';
    while (1)
    {
        char c;
        printf("Enter a character: ");
        scanf(" %c", &c);  // Space before %c to consume any trailing newline
        
        if (c >= 'a' && c <= 'z')
        {
            printf("Entered character is a lowercase letter.\n");
        }
        else if (c >= 'A' && c <= 'Z')
        {
            printf("Entered character is an uppercase letter.\n");
        }
        else if (c >= '0' && c <= '9')
        {
            printf("Entered character is a number.\n");
        }
        else
        {
            printf("Entered character is a special character.\n");
        }

        printf("Do you want to check more (Y/N): ");
        scanf(" %c", &l);  // Use %c for a character input
        
        if (l == 'N' || l == 'n')
        {
            break;
        }
    }
    return 0;
}

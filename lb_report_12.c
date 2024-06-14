#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);

    if (x >= 'a' && x <= 'z')
    {
        char value = x - 25;
        printf("You Enter Lowercase- %c :: Uppercase - %c", x, x - 32);
    }
    else if (x >= 'A' && x <= 'Z')
    {
        printf("You Enter Uppercase - %c ::Lowercase - %c", x, x + 32);
    }

    return 0;
}
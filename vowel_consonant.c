#include <stdio.h>

int main()
{
    char x;

    printf("Input a character: ");
    scanf("%c", &x);

    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
        x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
    {
        printf("It is a Vowel");
    }
    else
    {
        printf("It is a Consonant");
    }

    return 0;
}

#include <stdio.h>
void main()
{
    char name;
    scanf("%c",&name);
    switch(name)
    {
    case 'a':
    case 'A':
        printf("vowel");
        break;
    case 'e':
    case 'E':
        printf("vowel");
        break;
    case 'i':
    case 'I':
        printf("vowel");
        break;
    case 'o':
    case 'O':
        printf("vowel");
        break;
    case 'u':
    case 'U':
        printf("vowel");
        break;
    defult:
        printf("consonant");
    }
}

#include <stdio.h>
#include <string.h>

int main()
{
    char ch[10];
    printf("Enter string: ");
    scanf("%s",ch);
    strrev(ch);
    printf("%s",ch);
    return 0;
}

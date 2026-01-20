#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch[10];
    char temp;
    int i,j,l;
    printf("Enter the string: ");
    scanf("%s",ch);
    l=strlen(ch);
    i=0;
    j=l-1;
    while(i<j)
    {
        temp=ch[i];
        ch[i]=ch[j];
        ch[j]=temp;
        i++;
        j--;
    }
    puts(ch);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{

char name[10];
printf("Enter the name: ");
scanf("%s",name);

char surname[10];
printf("enter the surname: ");
scanf("%s",surname);
int i=0;
int flag=0;

while(name!=NULL || surname!=NULL)
{
    if(name[i]!=surname[i])
    {
        flag=1;
        break;
    }
    i++;
}
if(flag==0)
    printf("Strings are equal");
else
    printf("String are not equal");
    return 0;
}

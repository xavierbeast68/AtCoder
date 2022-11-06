#include <cstdio>
#include <ctype.h>
#include <string.h>

int main()
{
    char day[10];
    scanf("%s",day);
    for(int i = 0; i<strlen(day); i++)
    {
        day[i] = tolower(day[i]);
    }
    if(strlen(day)<=6)
    {
        printf("%d\n", (strcmp(day,"monday")==0?5:1));
    }
    else
    {
        printf("%d\n", (strcmp(day,"tuesday")==0?4:(strcmp(day,"wednesday")==0?3:2)));
    }
}
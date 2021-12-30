#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        for(int j=l/2;j<=i+l/2;j++)
        {
            printf("%c",s[j%l]);
        }
        printf("\n");
    }
}
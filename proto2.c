#include<stdio.h>
#include<string.h>
int main()
{
    char s[20]="GATEWallah";
    printf("%s",s+4);
    s[4]=0;
    printf("%s",s);
    return 0;
    
}
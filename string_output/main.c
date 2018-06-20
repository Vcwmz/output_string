#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/************This is first method *********************
int len(char a[])
{
    int i=0;
    while(a[i]!='\0')
        i++;
    return i;
}
void reverse(char a[],char b[])
{
    int i;
    for(i=len(a);i>0;i--)
    {
    b[len(a)-i]=a[i-1];
    }
    b[len(a)]='\0';
}

int main()
{
    char a[512],b[512];
    printf("please input the string you want to reverse output\n");
    scanf("%s",a);
    reverse(a,b);
    printf(b);
    return 0;
}
/*******************************************************/


void reverseandprint(char *a)
{
    int i=0;
    while(*(a+i)!='\0')
    {
     i++;
    }
    i--;
    for(i;i>=0;i--)
        printf("%c",*(a+i));

}
int main()
{
        char a[512],b[512];
        printf("please input the string you want to reverse output\n");
        scanf("%s",a);
        reverseandprint(a);

        return 0;
}

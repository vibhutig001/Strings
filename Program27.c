#include<stdio.h>

void strToggleX(char str[])
{
    int iCnt=0;
    
    while(*str!='\0' )
    {
       if(*str>='a' && *str<='z' )
       {
            *str=*str-32;
       }
       else if(*str>='A' && *str<='Z' )
       {
            *str=*str+32;
       }
       str++;
    }
}
int main()
{
    char Arr[20];
    
    printf("Enter string :");
    scanf("%[^'\n']s",Arr);

    strToggleX(Arr);//strlen(100)

   printf("Updated String is : %s\n",Arr);
    return 0;
}
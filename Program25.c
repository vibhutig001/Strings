#include<stdio.h>

void strUpr(char str[])
{
    int iCnt=0;
    
    while(*str!='\0' )
    {
       if(*str>='a' && *str<='a')
       {
            *str=*str-32;
       }
       str++;
    }
}
int main()
{
    char Arr[20];
    
    printf("Enter string :");
    scanf("%[^'\n']s",Arr);

    strUpr(Arr);//strlen(100)

   printf("Updated String is : %s\n",Arr);
    return 0;
}
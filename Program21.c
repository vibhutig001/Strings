#include<stdio.h>
//Case insensitive
int CountSpace(char str[])
{
    int iCnt=0;
    int iSum=0;
    while(*str!='\0' )
    {
       if(*str==' ')
       {
            iCnt++;
       }
       str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet=0;
    
    printf("Enter string :");
    scanf("%[^'\n']s",Arr);

    iRet=CountSpace(Arr);//strlen(100)

    printf("space are is : %d\n",iRet);

    return 0;
}
#include<stdio.h>
//count number of character in string
int strlenX(char str[])
{
    int iCnt=0;
    while(*str!='\0')//*str=H
    {
        iCnt++;
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

    iRet=strlenX(Arr);//strlen(100)

    printf("Length of string is : %d\n",iRet);

    return 0;
}
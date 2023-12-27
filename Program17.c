#include<stdio.h>
//problem
int CountDigit(char str[])
{
    int iCnt=0;
    int iSum=0;
    while(*str!='\0' )
    {
        if(*str>='0'  && *str<='9')
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

    iRet=CountDigit(Arr);//strlen(100)

    printf("Digits are is : %d\n",iRet);

    return 0;
}
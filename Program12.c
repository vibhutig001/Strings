#include<stdio.h>
//count number of character in string
int Counta(char str[])
{
    int iCnt=0;
    while(*str!='\0')//*str=H
    {
        if(*str=='a')
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

    iRet=Counta(Arr);//strlen(100)

    printf("count of a letter is : %d\n",iRet);

    return 0;
}
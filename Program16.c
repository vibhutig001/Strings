#include<stdio.h>
//problem
int Capital(char str[])
{
    int iCnt=0;
    int iSum=0;
    while(*str!='\0' )
    {
        if(*str>='A'  && *str<='Z')
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

    

    iRet=CountCapital(Arr);//strlen(100)

    printf("small letter is : %d\n",iRet);

    return 0;
}
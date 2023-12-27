#include<stdio.h>
//Case sensitive
int CountVowel(char str[])
{
    int iCnt=0;
    int iSum=0;
    while(*str!='\0' )
    {
        if(*str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U')
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

    

    iRet=CountVowel(Arr);//strlen(100)

    printf("vowels letter is : %d\n",iRet);

    return 0;
}
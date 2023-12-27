#include<stdio.h>
//Case insensitive
void CountVowel(char str[])
{
    int iCnt=0;
    
    while(*str!='\0' )
    {
        if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'||*str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U')
        {
            *str = '_';
        }
        str++;
    }
   
}
int main()
{
    char Arr[20];
 
    printf("Enter string :");
    scanf("%[^'\n']s",Arr);
    CountVowel(Arr);//strlen(100)

    printf("Updated string is %s: ",Arr);

    return 0;
}
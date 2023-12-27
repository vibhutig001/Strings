#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char cValue)
{
    if((cValue>='a') && (cValue<='z'))
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    char ch='\0';
    bool bRet=false;

    printf("Enter the character :");
    scanf("%c",&ch);

    bRet=CheckSmall((ch));
    if(bRet==true)
    {
        printf("Its a small letter");
    }
    else{
        printf("Its not small letter");
    }

    return 0;
}

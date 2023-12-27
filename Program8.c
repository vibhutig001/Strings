#include<stdio.h>
int main()
{
    char Arr[20];
    printf("Enter string :");
    scanf("%[^'\n']s",Arr);
    printf("Enttered string %s\n",Arr);
    return 0;
}
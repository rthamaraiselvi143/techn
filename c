#include <stdio.h>

int main()
{
    int B;
    printf("enter the number :");
    scanf("%c",&B);
    if(B=='a'|| B=='e'|| B=='i'|| B=='o' || B=='u' || B=='A' || B=='E' || B=='I' || B=='O' || B=='U')
    printf("\n %c is vowel",B);
    else
    printf("\n %c is costant",B);

    return 0;
}

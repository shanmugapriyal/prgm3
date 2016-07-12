#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        printf(" alphabet.");
    else
        printf("not an alphabet.");

    return 0;
}
Contact GitHub API Training Shop Blog About

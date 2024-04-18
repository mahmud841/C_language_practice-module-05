/*Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD"*/


#include <stdio.h>
int main() 
{
    int j;
    scanf("%d", &j);
    int digit= j/1000;
    // printf("%d\n", digit);
    if(digit%2==0)
    {
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
    return 0;
}
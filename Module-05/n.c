/*
#include <stdio.h>
int main() 
{
    char a = 'q';
    printf("%d", a);
    return 0;
}
*/

/*
#include <stdio.h>
int main() 
{
    char a = 'z';
    printf("%d", a);
    return 0;
}

*/

#include <stdio.h>
int main() 
{
    char a;
    scanf("%c", &a);

    if(a>='a' && a<='z')
    {
        int ans=a-32;
        printf("%c", ans);
    }
    else{
        int ans= a+32;
        printf("%c", ans);
    }
    return 0;
}
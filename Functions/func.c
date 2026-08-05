//functions 101
#include <stdio.h>
void check()
{
    char nation;
    scanf("%c", &nation);
    if (nation == 'i')
    {
        printf("namaste");
    }
    else if (nation == 'f')
    {
        printf("bonjour");
    }
}

int main()
{

    check();
    return 0;
}

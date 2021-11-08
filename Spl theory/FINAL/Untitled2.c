#include<string.h>
struct phentry{
    char name ;
    int num;
    char adrs;
            };

int main()
{
    struct phentry phnbk;
    gets(phnbk.name);
    scanf("%d",&phnbk.num);
    scanf("%s",&phnbk.adrs);
    puts(phnbk.name);
    printf("%d",phnbk.num);
    printf("%s",phnbk.adrs);

}

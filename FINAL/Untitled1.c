#include<string.h>
int main()
{
int i=0,vowel=0,con=0;
char s[100];
while(s[i]!='\0'){
gets(s[i]);
i++;
}
if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
{
vowel++;
}

else
    con++;
printf("%d",vowel);
printf("%d",con);
}


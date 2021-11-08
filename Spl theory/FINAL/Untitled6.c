int main()
{

char str1[100]="String Copy",str2[100]="String Concat";
int a,b;
if(strlen(str1)==strlen(str2)) printf("Equal Length");
else {
a=strcmp(str1,str2);
b=strcmp(str2,str1);
if(a==b) {printf("Same string\n");
}else if(a>b) {printf("%s\n",str1);}
else printf("%s\n",str2);
}
}

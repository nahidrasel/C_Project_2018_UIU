int main()
{
char str1[30]="Hello",str2[30];
int len=0,i,j,k=0;
for(i=0;str1[i]!='\0';i++){
len++;
}
for(j=len-1;j>=0;j--){
str2[k]=str1[j];
k++;
}
puts(str1);
puts(str2);
}

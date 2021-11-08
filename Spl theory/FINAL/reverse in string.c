#include<string.h>
int main(){
char a[13];
char a1[13];
int i=0,j,k=0,m,len=0;
gets(a);
while(a[i]!='\0'){

len++;
i++;
}
for(j=len-1;j>=0;j--){
        a1[j]=a[i];
        k++;}
        for(;k<=a1[k]!='\0';k++){
puts(a);
puts(a1);
}
if(a1[k]==a[i]){
    printf("Palindrome");
    }
    else {printf("Not Palindrome");
}
}

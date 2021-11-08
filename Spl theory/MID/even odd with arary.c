int main()
{
int arr[10]={},n,even,odd;
int index;
scanf("%d",&n);
for(index=1;index<=n;index++){
scanf("%d",&arr[index]);
}
for(index=1;index<=n;index++){
        if(arr[index]%2==0){
                even=even+1;
printf("%d is even ",arr[index]);
}
        else {
            odd=odd+1;
printf("%d is odd ",arr[index]);
}
}
}

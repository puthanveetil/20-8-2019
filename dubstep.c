#include<stdio.h>
#include<string.h>
int main(){ 
char s[301];
int n,i=0;
scanf("%s",s);
n=strlen(s);
while(i<n){
if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
i=i+3;
printf(" ");}
else
{
printf("%c",s[i]);
i++;
}
}
return(0);
}
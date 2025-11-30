//Q100: Print all sub-strings of a string.
#include<stdio.h>
#include<string.h>
int main(){
char str[100];
int i,j,k,len;
printf("Enterastring:");
fgets(str,sizeof(str),stdin);
len=strlen(str);
if(len>0&&str[len-1]=='\n'){
str[len-1]='\0';
len--;
}
if(len==0){
printf("Nosubstringstodisplay.\n");
return 0;
}
for(i=0;i<len;i++){
for(j=i;j<len;j++){
for(k=i;k<=j;k++){
printf("%c",str[k]);
}
if(!(i==len-1&&j==len-1)){
printf(",");
}
}
}
printf("\n");
return 0;
}

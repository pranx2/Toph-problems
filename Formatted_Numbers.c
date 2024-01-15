#include<stdio.h>
#include<string.h>
int main(){
   char num[9];
   gets (num);//user input = 1234567;
   int str[20];
   int count=0,j=0;
   for(int i=strlen(num)-1;i>=0;i--){
   if (count==3){
      str[j++]=',';
      str[j++]=num[i];
      count=0;
   }
      else str[j++]= num[i];
      count++;
   }
   for(int i=j-1;i>=0;i-- ){
   printf("%c",str[i]);
   }
   return 0;
   }
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"stack.c"
int main()
{
  stack s;
  creatstack(&s);
  char  w[100];
  printf("Enter a word:");
  scanf("%s",w);
//  char r[100];
//  int j=0;
//  for(int i=strlen(w)-1;i>=0;i--){
//    r[j++]=w[i];
//  }
//  r[j] = '\0';
//  int found=0;
//  for(int i=0;i<strlen(w);i++){
//    if(r[i]!=w[i]){
//        found=1;
//    }
//  }
//  if(found==1){
//    printf("Two strings are not equal\n");
//  }
//  else{
//     printf("Two strings are equal (Palindrome)\n");
//  }


  for(int i=0;i<strlen(w);i++){
     if(!fullstack(s)){
        push(&s,w[i]);
     }
  }
   char r[100];
    for(int i=0;i<strlen(w);i++){
     if(!emptystack(s)){
        r[i]=pop(&s);
     }
  }
  if(strcmp(w,r)==0){ // للمقارنه
      printf("Two strings are equal (Palindrome)\n");
  }
   else{
    printf("Two strings are not equal\n");
   }

    return 0;
}

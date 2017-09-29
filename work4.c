#include <stdio.h>
#include <string.h>

//headers

int main(){
  char src[256]="hello";
  char dest[8]="lol";
  
  printf("tests strcpy(char * src, char * dest)\n");
  printf("this is src: %s\n",src);
  printf("this is dest: %s\n",dest);

  strcpy(src,dest);

  printf("this is src after call: %s\n\n",src);
  printf("this is dest after call: %s\n\n",dest);

  printf("tests strncpy(char * dest, char * src,int n):\n\n");
  //not my joke:
  char s[256]= "What do computers and acs have in common?";
  char d[256]= "they are useless when u open windows";

  printf("this is s: %s\n\n",s);
  printf("this is d: %s\n\n",d);

  strncpy(s,d,10);

  printf("this is s after call: %s\n\n",s);
  printf("this is d after call: %s\n\n",d);
  
  return 0;

}

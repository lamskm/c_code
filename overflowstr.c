#include <stdio.h>
#include <string.h>
int main()
{ 
  char *source = "abcdef"; // source points to memory containing "abcde\0"
  char s1[4] = "123";     // s1[0]='1', s1[1]='2', s1[2]='3', s1[3]='\0'
  char s2[4] = "";        // s2[0]='\0'
  strcpy(s1,source);
  printf("s1=%s\n",s1);
  printf("s2=%s\n",s2);
}

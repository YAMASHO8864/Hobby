#include <stdio.h>
#include <string.h>
void savecommand(char fn*){
  fopen("%s.dat","w");
  fprintf("YAMASHO");
  fclose("%s.dat");
}
int main(void){
  char fn[50];
  scanf("%s",&fn);
  savecommand(fn);
  return 0;
}

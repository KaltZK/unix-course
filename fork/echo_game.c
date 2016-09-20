#include <unistd.h>
#include <stdio.h>
int main(void){
  static char buffer[50];
  pid_t pid;
  while(scanf("%s", buffer)==1){
    pid = fork();
    if(pid < 0){
    puts("fork failed");
  }else if(pid > 0){
      while(1){
        puts(buffer);
        sleep(5);
      }
      break;
    }
  }
  return 0;
}

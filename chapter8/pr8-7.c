#include<unistd.h>
#include<stdio.h>
#include<signal.h>
void handler(int sig){
  return;
}
unsigned int snooze(unsigned int secs){
  unsigned int res = sleep(secs);

  printf("Slept for %d of %d secs\n", res, secs);
}

int main(){
  signal(SIGINT, handler);
  snooze(1000);
  return 0;
}

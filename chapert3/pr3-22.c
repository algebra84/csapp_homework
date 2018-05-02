#include<stdint.h>
#include<stdio.h>
long factor_maxint32(){
  long m = 1;
  long n = 2;
  while(INT32_MAX/m >= n){
    m*=n;
    n++;
  }
  return n;
}

long factor_maxint64(){
  long m = 1;
  long n = 2;
  while(INT64_MAX/m >= n){
    m*=n;
    n++;
  }
  return n;
}

int main(){
  printf("%ld,%ld\n",factor_maxint32(), factor_maxint64());
  return 1;
}

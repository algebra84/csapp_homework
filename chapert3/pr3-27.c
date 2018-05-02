long fact_for(long n){
  long i;
  long result = 1;
  for(i = 2; i <= n; i++)
    result *= i;
  return result;
}

long fact_for_dowhile(long n){
  if(n < 2)
    return 1;
  long i = 2;
  long val = 1;
  do{
    val *= i;
    i++;
  }while(i <= n);
  return val;
}

long factor_for_lg_goto(long n){
  long i = 2;
  long result = 1;
  if(n < 2)
    goto end;

 loop:
    result *= i;
    i++;
    if(i <= n)
      goto loop;
 end:
    return result;
}

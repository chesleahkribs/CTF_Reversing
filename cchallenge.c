#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void main(void)

{
  unsigned int holder; 
  int counter;
  uint fibonacci;
  unsigned int start_num;
  int input; 
  
  printf("Enter a number:\n");
  scanf("%d", &input);

  //printf("INput: %d", &input); 
  start_num = 0;
  fibonacci = 1;
  counter = 1;
  do{
    counter = counter + 1;
    printf("counter: %d", counter); 
    holder = fibonacci;
    fibonacci = start_num + fibonacci;
    start_num = holder;
  } while (counter < input);
  printf("%ld\n" ,(ulong)fibonacci);
  return;
}
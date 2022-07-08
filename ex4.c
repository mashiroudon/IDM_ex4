#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COUNT 3

int main(void){
  int i;
  int num;
  int heads_sum=0;
  int tails_sum=0;
  char name[20];

  //name_added
  printf("Who are you?\n");
  scanf("%s", name);
  printf("Hello, %s!\n", name);

  srand(time(NULL));

  printf("Tossing a coin...\n");
  
  for(i=0; i < COUNT; i++){
    num=rand();
    num%=2;

    //num equals 0 -> heads, num equals 1 -> tails
    if(num == 0){
      printf("Round %d: Heads\n", i+1);
      heads_sum++;
    }
    else{
      printf("Round %d: Tails\n", i+1);
      tails_sum++;
    }
  }

  printf("Heads: %d, Tails: %d\n", heads_sum, tails_sum);

  //victory_added
  if(heads_sum > tails_sum) printf("You won\n");
  else printf("You lost\n");

  return 0;
}

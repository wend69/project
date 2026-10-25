//this is just part of learning C progress
#include <stdio.h>

int main(void){
  int foo;
  int bar = 11;
  int a = 1, b = 2 , c = 5;
  a = bar + (b * c);
  printf("%d\n", a);
  printf("hello this is testing the pointers in C here's address of bar: %p\n", &bar );

  int numbers[5];
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;
  numbers[4] = 5;
  printf("total of 5 , last item's index is %d\n", numbers[4]);





  char fooo[1][1][3]={
    {'a', 'b', 'c'}
  };
  printf("%c\n", fooo[0][0][2]);


  int cubes[2][2][3] = {
    { // <-- This outer set of brackets matches the FIRST [2] (Layer 0)
        {1, 2, 3}, // <-- This matches the SECOND [2] (Row 0)
        {4, 5, 6}  // <-- This matches the SECOND [2] (Row 1)
    },
    { // <-- This matches the FIRST [2] (Layer 1)
        {7, 8, 9}, // <-- Row 0 in Layer 1
        {10, 11, 12} // <-- Row 1 in Layer 1
    }
};
  printf("%d\n", cubes[1][1][2]);
  printf("%d\n", cubes[0][1][0]);
  
  if (cubes[1][1][2]=12){
    printf("data from cubes equal to %d\n", cubes[1][1][2]);
  }
dima@dima ~/project/c ❯ ./main                
  int something = 11;
  int somethingelse = 11; 
  if (something > somethingelse){
    printf("if something is greater than something else then its good\n");
  } else if(something==somethingelse){
    printf("well just happens to be a tie!?\n");
  }
  else{
    printf("whatever happens , just happens...\n");
  }

  int ec = 1;
  int ec2 = 2;
  int ec3 = 3;
  if (ec2 > ec && ec2 < ec3){
    printf("2 is greater than 1 , 3 is greater than 2\n");
  } if(ec3 != ec2 || ec > ec2){
    printf("its not equal, and sum shi\n");

  }

  return 0;
}

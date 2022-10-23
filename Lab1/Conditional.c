// conditional-statements.c
#include <stdio.h>
int main() {
  float score = 8.4;
  if(score < 5) {
     printf("You need to improve your score!");
  }
  else if(score < 8) {
     printf("That's OK!");
  }
  else if(score < 9) {
     printf("Good!");
   }
   else {
     printf("Excellent!");
   }
}
// Author: Yeman Xu ybx5148@psu.edu
// Collaborator: Jiahui Lan jzl6335@psu.edu
// Collaborator: Daniel Mikita djm6907@psu.edu
// Collaborator: Chenkuan Liao czl5899@psu.edu
// Section: 1
// Breakout: 8
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
int main(void) {
char *  grade = readline("Enter your CMPSC 131 grade: ");
double grade1 = atof(grade);
  if (grade1>=93.0){
    puts ("Your letter grade for CMPSC 131 is A.");
  }
  else if (grade1>=90.0){
   puts ("Your letter grade for CMPSC 131 is A-."); 
  }
  else if (grade1>=87.0){
   puts ("Your letter grade for CMPSC 131 is B+."); 
  }
  else if (grade1>=83.0){
   puts ("Your letter grade for CMPSC 131 is B."); 
  }
  else if (grade1>=80.0){
   puts ("Your letter grade for CMPSC 131 is B-."); 
  }
  else if (grade1>=77.0){
   puts ("Your letter grade for CMPSC 131 is C+."); 
  }
  else if (grade1>=70.0){
   puts ("Your letter grade for CMPSC 131 is C."); 
  }
  else if (grade1>=60.0){
   puts ("Your letter grade for CMPSC 131 is D."); 
  }
  else {
   puts ("Your letter grade for CMPSC 131 is F."); 
  }
  return 0;
}
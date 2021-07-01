#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include<string.h>

string ari(string paragraph){
  int n = strlen(paragraph);
  int i = 0,score;
  int words=0,characters=0,sentences=0;
  while(paragraph[i]!='\0'){
    if(isalnum(paragraph[i])){
      characters++;
    }
    if(paragraph[i]==" "){
      words++;
    }
    if(paragraph[i]=='!' || paragraph[i]=='?' || paragraph[i]=='.'){
      sentences++;
    }
  }

  score = ceil(4.71*(characters/words) + 0.5*(words/sentences) - 21.43);
  
  
  switch(score){
    case 1: string level = "Kindergarten";break;
    case 2: string level = "First/Second Grade";break;
    case 3: string level = "Third Grade";break;
    case 4: string level = "Fourth Grade ";break;
    case 5: string level = "Fifth Grade ";break;
    case 6: string level = "Sixth Grade";break;
    case 7: string level = "Seventh Grade";break;
    case 8: string level = "Eighth Grade";break;
    case 9: string level = "Ninth Grade";break;
    case 10: string level = "Tenth Grade ";break;
    case 11: string level = "Eleventh Grade";break;
    case 12: string level = "Twelfth grade";break;
    case 13: string level = "College student";break;
    case 14: string level = "Professor";break;
  }
  
  return(level);
}

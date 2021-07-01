#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include<string.h>

string ari(string paragraph){
  int i = 0;
  int words=0,characters=0,sentences=0;
  string level;
  while(paragraph[i]!='\0'){
    if(isalnum(paragraph[i])){
      characters++;
    }
    if(isspace(paragraph[i])){
      words++;
    }
    if(paragraph[i]=='!' || paragraph[i]=='?' || paragraph[i]=='.'){
      sentences++;
    }
    i++;
  }

  int score = ceil( ( 4.71 * (characters/words)) + ( 0.5* (words/sentences)) - 21.43 ) ;;
  
  
  switch(score){
    case 1: level = "Kindergarten";break;
    case 2: level = "First/Second Grade";break;
    case 3: level = "Third Grade";break;
    case 4: level = "Fourth Grade ";break;
    case 5: level = "Fifth Grade ";break;
    case 6: level = "Sixth Grade";break;
    case 7: level = "Seventh Grade";break;
    case 8: level = "Eighth Grade";break;
    case 9: level = "Ninth Grade";break;
    case 10: level = "Tenth Grade";break;
    case 11: level = "Eleventh Grade";break;
    case 12: level = "Twelfth grade";break;
    case 13: level = "College student";break;
    case 14: level = "Professor";break;
  }
  
  return(level);
}

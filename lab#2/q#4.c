# include <stdio.h>
# include <ctype.h>

int main (){
  char name[] = "ned UNIVERSITYit";
  for (int i = 0; i < strlen(name); i++){
    if (islower ( name[i])){
      name[i] = toupper(name[i]);
    }else{
      name[i] = tolower(name[i]);
      
    }
  }
  printf("edited: %s",name);
  
  
  return 0;
}
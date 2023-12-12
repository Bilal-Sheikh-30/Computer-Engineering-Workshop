// Create a header file called that provides functions for reading and writing files. Define
// functions for reading text from a file, writing text to a file, and checking file existence.
// Implement these functions in a source file and use them in a program.

# include <stdio.h>
# include "file_operations.h"
int main(){
  const char *filename = "example.txt";
  writeInFile(filename, "hey my name is bilal");
  if(fileExist(filename)){
    readFile(filename);
  }
}
#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main(int argc, char** argv) { // give the numbers via command line

  int pid = fork(); // make a new process
   if(pid == 0){ //check if child
       execvp("./multiply",argv); // run multiply with the same argument
  }
    
   return 0; 

} 
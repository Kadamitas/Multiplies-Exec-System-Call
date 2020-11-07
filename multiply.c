#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char ** argv){ //takes in a command line argument, and multiplies a list of numbers given
    int multiplier = 1; //default value since anything multiplied by 1 is itself
    if(argc == 1){ //check for arguments
        printf("Nothing given \n ");
        return 1;
    }
    for(int i = 1; i < argc; i++){ // go thru all the commandline arguments
        multiplier *= atoi(argv[i]); // it multiplies the current iteration with the saved multiplied value
    }
    printf("%d\n",multiplier); // prints out the final result
return 0;
}
/*
Write and compiler C program “multiply.c” to multiply N integer numbers. Write another short C
program using the required system calls to create a child process that will run the “multiply”
executable program. 

This was hard to read, so I am unsure if this is what Khaled wants





*/
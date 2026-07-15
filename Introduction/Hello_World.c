/*
    The typical simple program that displays on the screen "Hello World". I will attempt to personally explain things (in a )
*/

/*
    This first line, as the name suggests "includes" stdio.h file to our program, this file is called a "header file" into our program. 
    It also isn't C, that's why it doesn't end in ;
*/
#include <stdio.h> // "stdio" means "standard input/output"
main(){
    printf("Hello World"); // Writes a string "Hello world" using the fuction printf
    // We can write the same thing this way too, by summoning the string with multiple times
    printf("||Hello");
    printf(" ");
    printf("World");
}
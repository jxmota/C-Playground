/*
    The typical simple program that displays on the screen "Hello World". I will attempt to personally explain things (in a )
*/

/*
    This first line, as the name suggests "includes" stdio.h file to our program, this file is called a "header file" into our program. 
    It also isn't C, that's why it doesn't end in ;
*/
#include <stdio.h> // "stdio" means "standard input/output"
// main is where all programs start in C, we need to write void main to avoid warning (learn why later)
void main(){
    printf("Hello World"); // Writes a string "Hello world" using the fuction printf
    // We can write the same thing this way too, by summoning the string with multiple times
    printf("||Hello");
    printf(" ");
    printf("World");

    printf("\nTo change lines we use \\n meaning 'new line'\n");
    printf("Está um dia \n \"LINDO LÁ FORA\"\n"); // The way to write "" without causing an error, is to write \"
    printf("\t haloo\v hi\n teehee\n");

    /*
        \n Newline
        \b Backspace
        \\ How to write \
        \" How to write "
        \' How to write '
        \? How to write ?
        %% How to write %
        \t Horizontal table
        \v Vertical table
    */

}
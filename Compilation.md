# Compile Info

gcc program1.c -o program1

We can use either gcc or cc 
cc - Historically the generic C compiler on UNIX (may appear on old textbooks, like the one I'm using)
gcc - Means "GNU Compiler Collection", mostly used nowadays and what is recommended

program1.c - The program we want to compile

-o program1 - This allows us to choose the name we want for our program, so for example: "-o BatataFritas" means our exc. file will be called BatatFritas.out
              Otherwise, if we just write gcc program1.c the exc. file will just be called a.out

For bigger programs there is also the make file (to do later)
make program31
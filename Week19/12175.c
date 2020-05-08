 Suppose you have a C program whose main function is in main.c and has other functions in the files input.c and output.c:

   1. What command(s) would you use on your system to compile and link this program?
-   gcc main.c input.c output.c -o run
   2. How would you modify the above commands to link a library called process1 stored in the standard system library directory?
-   gcc main.c input.c output.c -o run -lprocess1
   3. How would you modify the above commands to link a library called process2 stored in your home directory?
-   gcc main.c input.c output.c -o run -lprocess1 -L/home/ process2.c   
   4. Some header files need to be read and have been found to located in a header subdirectory of your home directory and also in the current working directory. How would you modify the compiler commands to account for this? 
-   gcc main.c input.c output.c -I/home/header 

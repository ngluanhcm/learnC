/*
Exercise 12336
Read ordinary text a character at a time from the program's standard input, and print it with each line
reversed from left to right. Read until you encounter end-of-data (see below).
You may wish to test the program by typing
prog5rev | prog5rev
to see if an exact copy of the original input is recreated.
To read characters to end of data, use a loop such as either
char ch;
while( ch = getchar(), ch >= 0 ) /* ch < 0 indicates end-of-data 

or
char ch;
while( scanf( "%c", &ch ) == 1 ) /* one character read 

gcc 12336.c -o 12336 -lm
./12336
*/
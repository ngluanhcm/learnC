/*
Exercise 12346
Write a function ``replace'' which takes a pointer to a string as a parameter, which replaces all spaces in that string by minus
signs, and delivers the number of spaces it replaced.
Thus
char *cat = "The cat sat";
n = replace( cat );
should set
cat to "The-cat-sat"
and
n to 2.

gcc 12346.c -o 12346 -lm
./12346
*/
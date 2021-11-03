This file is a README.md to Repository

0x0F. C - Function pointers
For Holberton school by Juan Posada @JuanSeb35904130

 By Alexandre Gautier   Ongoing project - started 11-03-2021, must end by 11-04-2021 (in about 13 hours) - you're done with 0% of tasks.    Checker will be released at 11-03-2021 12:00 PM  QA review fully automated.

Resources / Read or watch:
Function Pointer in C
Pointers to functions
Function Pointers in C / C++
why pointers to functions?
Everything you need to know about pointers in C


QUIZ

Question #0
Which one is a pointer to a function?
int func(int a, float b);
int *func(int a, float b);
X    int (*func)(int a, float b);
(int *)func(int a, float b);

Question #1
To store the address of this function:
void neyo(void);
to the variable f of type pointer to a function that does not take any argument and does not return anything, you would do (check all correct answers if there is more than one):

X    f = neyo;
X    f = &neyo;
*f = neyo;
*f = &neyo;

Question #2
If f is a pointer to a function that takes no parameter and returns an int, you can call the function pointed by f this way (check all correct answers if there is more than one):
X   f();
X   (*f)();
f;

Question #3
This void (*anjula[])(int, float) is:
A pointer to a function that takes an int and a float as parameters and returns nothing
A pointer to a function that takes an array of int and float as a parameter and returns nothing
A pointer to a function that takes an int and a float as parameters and returns an empty array
X  An array of pointers to functions that take an int and a float as parameters and returns nothing
A pointer to an array of functions that take an int and a float as parameters and returns nothing

Question #4
What does a pointer to a function point to (check all correct answers if there is more than one)?
data
X	 code
The first character of the name of the function
The first byte of code of the function

precision and width in **printf** function

precision
when using floating point number format specifier

eg: %.2f, %.3f (decides how long precision is needed for floating point numbers)

width
specifies the maximum number of character to print. if character count is lower than max, it pads with spaces

*for practice*
loops and conditions

// if condition

if (SOME_CONDITION){
  DO_THIS
}else{
  DO_THIS_INSTEAD
}

// for loop

for (TYPE INIVAL; STOP_VALUE; INCRE/DECRE){
  DO_THIS
}

// while loop

while (SOME_CONDITION_ISTRUE){
  DO_THIS
}

// do-while loop

do {
  THIS_THING
}while(THIS_CONDITION_ISTRUE)

// switch statement

switch (SOME_CONDITION){
  case(1):
  DO_THIS
  break

  case(2):
  DO_THIS
  break

  default:
  DO_THIS
}

* there isnt actually boolean type in C. if an integer is 0, then it *false* and any other integer is *true*

* we can use symbolic constants/ symbolic names to avoid magic numbers in programs.
#define name replacement text

name --> can think of like a variable name
replacement text --> any sequence of characters or numbers to replace *name*

* a character written between a single quote is equal to the value of the same character in the machine's character set

1-15.c not done

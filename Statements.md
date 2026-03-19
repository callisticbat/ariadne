#### **Statements**

A type of instructions that causes the computer to perform some actions



#### **Preprocessor**

program that process the source code before the actual compilation



* When writing comments describe why did that specific statement was made like that
* characters are included between single-quotes('') while texts are included between double-quotes("")



#### **Object**

Memory region in the Random Access memory(RAM) is called an object

when assigned a name to an object, it's called a '**variable'**



* We use Initialization to define a variable and assign a value to that variable at the same time
* we can define a variable and assign values to it later(default-initialization)



###### **There are few forms of initialization:**

###### **I   Copy initialization**

 	int x = 10;



###### **II  Direct initialization**

 	int y(34);



###### **III Direct list initialization**

 	int a{3};



###### **IV  Value initialization**

 	int b{}; *//This initialization assign the value 0 for the respective variable and can be changed at any time*





* **buffer** is a memory space for temporarily storing data before processing, writing or printing it to the console



#### **Undefined behaviors**

**(avoiding these behaviors is crucial)**



##### **Here are few reasons for undefined behaviors:**

1. uninitialized variables
2. not adding header files to the specific source files
3. passing signed values to the unsigned integers
4. ..



* A name of a variable(or function, type, or other kind of item) is called an **IDENTIFIER**



* Literals are values that are inserted directly into the source code. These values usually appear directly in the executable code (unless they are optimized out).Objects and variables represent memory locations that hold values. These values can be fetched on demand.



#### **Arity**

the number of operands an operator takes as input is called the arity of that operator



operators ==> +, -, \*, /, =, ==, >>(extraction operator), <<(insertion operator)

operands ==> 4, 234, 1, 9 etc.



###### **unary**

\-5 (here operator- has only one operand(5))



###### **binary**

4 + 5 (here operator+ has two operands, one in left hand side and other in right hand side)



###### **ternary**

there is only one in C++ (conditional operator)



###### **nullary**

also there is only one operator in C++ (throw operator)





##### **Chaining operators**

ex: 5 \* 6 + 7

here according to PEMDAS, operator\* works on 5 and 6 to produce 30 and result becomes an operand to the operator+ to produce the final result 37



\_\_\_\_\_\_\_\_\_\_\_\_\_



* when a program executes it runs the main() function from top to bottom. we can define our functions before(or after using forward declaration) the main function and when inside the main function we can **call** earlier defined functions to those specific tasks. after executing them, main function will continue from the point where it previously stopped for the function call



* nested functions are not allowed in C++ (which means defining functions inside a function is illegal)
* also it's illegal to call the main() function inside another function





* trying to return a value from a **void** function could lead to a compile error as **void** functions do not return any values to the caller function



* When a function is called, all of the parameters of the function are created as variables, and the value of each of the arguments is copied into the matching parameter (using copy initialization). This process is called **pass by value**. Function parameters that utilize pass by value are called value parameters



* make sure to add type when adding parameters to a function



* A function **parameter** is a variable used in the header of a function and **arguments** are the values that are being copied(by copy-initialization) to the **parameters** in the runtime of a function



* A parameter without a name is called an **unnamed parameter** and function parameters that have not used in the body of the function are called **unreferenced parameters**



* when a function becomes too complicated to handle, we can make sub-functions of it and it's called **refactoring**





C++ source files ------> |preprocessor| ------- translation unit -------> |compiler| ------- assembly code -------> |assembler| ------- object files(machine code) ---------> |linker| ---------> executable files





##### **Namespace**

namespace is an another scope region which allows us to create identifiers in purpose of disambiguation. which means identifiers declared in a one namespace are distinct from identifiers declared in an another namespace



for an example, **cout** lives inside the **std** namespace. when we using the cout we have to tell the compiler its namespace.(which is std(standard) in this case)so we can write it as **std::cout << "Hello underworld.\\n"**

here **::** is called as the **scope resolution operator**



it's always better to use namespace prefixes rather than a using-directive





##### **Scope region**

scope regions provides us a space to declare unique identifiers which doesn't conflict.(identifiers with the same name cannot exist in the scope region

ex: there should be no identical identifiers inside a function)



##### **Macro**

macro is a rule that defines how input text is converted into replacement text before compilation

there are 2 basic types of macros;



1. object-like macros
2. function-like macros



* function-like macros work almost as the normal functions and use of it is discouraged



object-like macros are defined in 2 ways:



1. *#define*  IDENTIFIER substitution\_text (macro definition with a substitution text)
2. *#define* (macro definition without a substitution text)





##### **Conditional Compilation Preprocessor Directives**

**(these directives are used to control if something should compile or not under certain circumstances)**



there are few conditional compilation preprocessor directives;

* *#ifdef*
* *#ifndef*
* *#endif*
* *#if 0(used to comment out pieces of code)*
* *#if 1(used to uncomment pieces of code that are commented using #if 0)*



##### **Header files**

header files are used to propagate forward declaration among multi files



* *iostream* is also a header file. whenever using os or language defined header files(*like iostream*) we have to use chevrons around them(<>). but we should use double quotes("") if it's a header file defined by the user



* transitive includes(header using an another header) of headers is a bad practice. always explicitly include headers needed for a file to compile





##### **Header guards(include guards)**

header guards are used to stop #including the same forward declarations(as it violates the one-definition rule) in multiple files

ex:

example.h



*#ifndef EXAMPLE\_H*

*#define EXAMPLE\_H*



*// forward declarations or functions go here...*



*#endif*



there is a modern preprocessor directive as *#pragma once* to replace 3 of the above preprocessor directive for simplicity



##### \--- **How to design and build a program ---**



##### **Design Process of a Program**



1. **Define the goal**
2. **Define the requirement(constraints and user-specific needs)**
3. **Define your tools, backup plan(when working on larger projects) and targets**
4. **Break down bigger problems into smaller ones**
5. **Figure out the sequence of events**



##### **Implementation of the designed program**



**1. Outlining the main function**

**2. Implementing each function(there are 3 things to do for each function)**

*  	define the function prototype
*  	writing the function
*  	testing the function



**3. Testing the whole program**





semantic errors mean logic errors



use conditional compilation preprocessor directives with std::cerr to debug programs



#### **Stepping**



stepping is the process of going through each of the statements of program for debugging purposes



###### **step into**

going through the each steps of functions line by line



###### **step over**

when we meet a function when stepping in using step over will return the control to us after automatically finishing the relevant function



###### **step out**

unlike other steps stepping out will execute all the remaining code inside the current function body





### **Data Types**



integrals = like integers (though c++ says 'integer types' is a synonym for 'integral types')



#### **C++ has 3 different float types**



**float, double and long double**



**float** has 6-9 significant digits of precision (precision stands for how many significant digits it can represent)

**double** has 15-18 significant digits of precision



using more significant digits for a number in a particular types will lead to rounding errors



C++ has **-inf** and **+inf** (infinity) also the **-0** and **+0**

and dividing **zero** by the **zero** is defined as **NaN**



###### **Bools**



operator== returns the 0 or 1 for false or true respectively



###### **if conditions**



executes either true statement or false statement after checking the condition



*if true*

 	true statement



*else*

 	false condition



ex: *if (x < 5)*

 	std::cout << "x is lower than 5\\n";

    else

std::cout << "x is not lower than 5\\n";





in the above example **operator<** returns either **true** or **false** bool value



##### **static\_cast operator**



used to explicitly convert one data type to an another without compile errors



##### **Constants**

**constant is a value that may not change its value during the execution of the program**



there are 2 constant types



###### **named constant(symbolic constant) --> constants that are associated with an identifier**



###### **literal constant --> constants that are not associated with an identifier**



there are 3 types of **named constants:**



* constant variables
* object like macros
* enumerated constants



###### **constant variables**

variables that cannot change its value after the initialization. variables must be initialized and cannot be assigned later



*const int aliya{5};*



here type of the value is not just **int** but **const int (it also got the constant qualifier 'const')**



###### **constant expressions**

a constant expression is also an expression, but it **must** be evaluated at the **compile time**



**constexpr** variables are implicitly **const**



###### **std::string and std::string\_view**



in C++, C-style strings are avoided and used the **std::string** type. its more of a class type rather than a primitive type

we have to use **std::ws** to mitigate the issue of whitespaces when inputting lines with spaces or newlines



we can create std::string literals using 's' suffix after the C-style literal



both a c-style string and a std::string will implicitly converted to std::string\_view. also std::string\_view will **not** implicitly convert to std::string to reduce expensive copying. we have to either initialize a std::string\_view with a std::string or static\_cast a std::string\_view to a std::string



**a view**(such as std::string\_view) is dependent on the object is being viewed. if the object is changed or destroyed while still it is being viewed, an unexpected behavior will occur. it means views are only valid only if the source object exists



std::string\_view has few functions that can view substrings(parts of strings). but std::string\_view strings may or may not be null terminated. hence we have to convert std::string\_view strings into std::string strings when null terminated strings in need





operands, function arguments and subexpressions may be evaluated in any order. **it's a common mistake to assume that operator precedence and associativity will affect the order of evaluation. they are only for group operands with operators**



##### **Comma Operator**

it is two purposes,

    **one** is to separate multiple variable declaration or function in a one statement

    **second** is to work as an operator that resolves values sequentially and returning the value of rightmost expression



##### **Conditional Operator (the only ternary operator)**



**best practice:** use parenthesis for the whole conditional operation when used with compound expressions (expressions with more operators)



##### **Bit flags and bit manipulation via std::bitset**



always use bitwise operators with unsigned integrals to avoid errors. 


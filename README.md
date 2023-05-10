# c_08_function_abstraction

## DESCRIPTION

We want to have clean and simple to understand code with great functionality.
To help us, in C and other languages we can create functions. A function is a block of code which only runs when it is called. The function declaration has three parts:

1. return type of the function
2. name of the function
3. parameters or argument of the function

A function can return a value with a given return type. If the function is designed to not have a return
value, we should use `void` as a return type.

The function name can be any descriptive name, should not start with number or any special character.

As arguments we can declare any type of variable, but if the function doesn't have any argument or parameter
then `void` shold be used. The variables created as arguments and variables declared inside the body of the function are local. That means they must be used just inside the body of the function (they aren't available outside of the function anyway).

We can use functions to simplify our main code. Functions are used to perform certain actions, and they are important for reusing code: define the code once, and use it many times.

## INSTALL LIBRARIES

The source code uses the cs50 library what you can download [HERE](https://github.com/cs50/libcs50).

To install the cs50 library follow the steps:

1. Open git bash terminal and change the current working directory to `src`:  
   > cd ./libsc50/src

2. Compile the cs50.c source into .o with:
   > gcc -c cs50.c -o cs50.o

3. Make the library archive:  
   > ar rcs libcs50.a cs50.o

4. Copy the `libcs50.a` file into your compiler's `lib` directory

5. Copy the `cs50.h` file into your compiler's `include` directory

## COMPILE AND RUN THE CODE

The code is written in C, the compiler used to generate the exe is: `gcc Rev10, Built by MSYS2 project 12.2.0`

Run the below code in terminal (git bash) to compile the source:

> gcc commandLineArgument.c -lcs50 -o ./build/commandLineArgument

To run the executable run the below code in terminal (git bash):

> ./build/commandLineArgument.exe

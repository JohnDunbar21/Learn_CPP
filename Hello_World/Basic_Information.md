# Basic Information

C++ programs use a specific structure. Below is an example of a C++ program called `hello.cpp` (this is a classic first-timer program).

```cpp
// This will output the message "Hello World!" to the terminal

#include <iostream>

int main() {
    
    std::cout << "Hello World!\n";

    return 0
}
```

C++ is considered to be a **case sensitive** language, meaning keywords and variables must be declared and called in a certain way. Looking at the code above, we will go over some of the syntax used.

`// insert text after slashes...` creates a **single-line** comment, meaning the compiler will ignore anything on the line after that point.

```cpp
/*
Multi-line
comment
*/
```

Having `#include <insert library here>` is known as a **pre-processor directive** that instructs the compiler to locate the file that contains code for a library specified in the statement.

All code in C++ must exist within classes and methods. In the above example, there is a `main()` method. Note that **every C++ program must have a function/method called `main()`**.

The compiler for C++ will completely ignore whitespace (tabs, spaces, and newlines) with the exception of `if` statements.

Using the command line, you would use the `g++` compiler (to be installed separately) and type the following to compile:

`g++ fileName.cpp -o executableName`

Then to execute, type:

`./executableName`
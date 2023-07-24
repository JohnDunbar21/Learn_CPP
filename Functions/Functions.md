# Functions in C++

**C++ comes with many built-in functions, but it may also be necessary to implement custom functions to allow more advanced functionality to be actioned.**

To use functions, you 'call' them. If we take the `cmath` library as an example:
```cpp
#include <cmath>
#include <iostream>

int main() {

    std::cout << sqrt(4) << "\n"; //prints 2 to the terminal
}
```

In the above example, the `sqrt()` function is being 'called' and performs a sequence of operations before terminating.

## Declaring and Defining Functions

A C++ function is made of two components:

1. A _Declaration_ : this includes the function's name, return type, and any parameters it takes
2. A _Definition_ : this is the body of the function and contains the instructions for what is supposed to happen when the function is called.

The general structure can be summarised as:
```cpp
//generic function declaration and definition
return_type function_name(any, parameters, you, have) {
    //include code to be executed

    return output_if_there_is_any
}
```

## Void Functions

A void function is also known as a *subroutine* and as such has no return value. An example of a void function is:
```cpp
#include <iostream>

//define oscar_wilde_quote()
void oscar_wilde_quote() {
  std::cout << "The highest, as the lowest, form of criticism is a mode of autobiography.\n";
}

int main() {
  
  //call the function here
  oscar_wilde_quote();
  
}
```

## Return Types in Functions

When you want a function to return something, you need to define its *return type*. This means that, at the point of termination, the function will take something back as a sort of input for other uses. **It is important to note that the return value must be of the same type as is stated in the function declaration**.

## How Return Types Work

When a function has a return type that is not void, the function will then have two requirements:

1. There **must** be a value returned from the function
2. The return value must be the **same type** as the function's return type

The return value itself is stored in the place where the function was called!

## Parameters in Functions

Parameters are *variables* used in a function's definition, acting as placeholders for input values that will be given during the runtime of the program.

When defining a parameter, you must also dictate its *type* as shown in the example below:
```cpp
double add_tip(double price) {
    return price * 1.1; //adds 10% to the price
}
```

**It is worth remembering that the order in which parameters are defined is maintained across function calls as failure to do so _will_ result in an error occurring**.

## Function Scope

The *scope* of a given function is the region of code that can access or view a given element.

**Variables defined in global scope are accessible throughout the program.**

**Variables defined in a function have local scope, and can only be accessed from within the function.**

## Linking Multiple C++ Files

When programs get bigger and more complex, code can be placed into other modules and combined at compile time using:

```
g++ file_1.cpp file_2.cpp file_n.cpp
```

This will link the files included in the compile statement into a single executable.

## Headers in C++

You can port functions over to a *header* file with the `.h` or `.hpp` extensions: these files will contain function definitions, and possibly fully implemented code. For example, if a set of functions exist in `my_functions.cpp`, its corresponding header file would be `my_functions.h`.

This does not mean you do not need to link the other C++ files as shown above, however it makes it much cleaner. By adding: 
```cpp
#include "my_functions.h"
```
at the top of the file, you link the function definitions.

**Note that you can store full implementations in headers.**

## Inline Functions

An **inline** function is a function definition - usually in a header file. For example:
```cpp
inline
void eat() {
  std::cout << "Chomp\n";
}
```

By using `inline`, the compiler is told to insert the function's body where the function call is which *can* help with execution speed.

Sometimes there are inline functions called *member functions* which have been defined and declared in a single line in a header file because the function body is so short.

**You should *always* add `inline` if you are inlining functions in a header, unless dealing with member functions which are automatically inlined for you.**

## Default Arguments

Default arguments are values assigned to parameters when the function is declared and defined, therefore if you leave a default argument blank in a function call, the function will run the default value. However, if you do add a parameter, then it will use that instead of the default argument.

**Parameters without default arguments come first.**

## Overloading Functions

In function overloading, multiple functions can share the same name given the following conditions:

1. Each has different type parameters
2. Each has a different number of parameters

For example:

```cpp
/*
Example of function overloading.
*/

void hello() {
  std::cout << "~Hello!~\n";
}

void hello(int times) {
  while (times >= 0) {
    std::cout << "~Hello!~\n";
    times --;
  }
}

void hello(std::string greeting) {
  std::cout << greeting << "\n";
}
```

## Function Templates

A *template* is a C++ tool that allows programmers to add data types as parameters!

Templates let us choose the type of implementation right when you call the function: this can apply to the return type, parameter type, or both. For example:

```cpp
template <typename T>
void hello(T item) {
  std::cout << item << "\n";
}
```

**Templates are entirely created in header `.h` files.**

**Using templates will slow down the program's compile time but speed up the execution time.**


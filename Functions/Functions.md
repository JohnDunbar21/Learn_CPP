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


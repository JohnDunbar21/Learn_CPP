# References and Pointers in C++

## References

A *reference* variable is an alias for something else: something that already exists.

The two important things to note about references are:

1. Anything done to the reference also happens to the original
2. Aliases cannot be changed to alias something else

Take a look at the example below:

```cpp
#include <iostream>
using namespace std;

int main() {

    int soda = 99 //original variable
    int &pop = soda //reference to soda

    pop += 1 //incrememnting the pop reference by 1

    /*
    The variable 'soda' and the 'pop' reference to it are both
    affected by the change made to the reference, i.e., both print
    100 to the output.
    */
    cout << soda << "\n";
    cout << pop << "\n";
}
```

As is shown above, when something is changed to a reference, the original variable is also affected in the same way.

## Pass By Reference

When variables are passed into functions, that is known as *pass by value*, however, since they are out of scope the values cannot actually be modified.

*Pass by reference* refers to passing parameters into a function using references: when called, the function can modify the value of the argument. **This has the added benefit of avoiding making copies of a variable/object, optimising performance**.

For example:

```cpp
#include <iostream>
using namespace std;

//passing a reference to a variable as a parameter optimises code
int triple(int &i) {

  i = i * 3;
  
  return i;

}

int main() {
  
  int num = 1;
  
  cout << triple(num) << "\n"; //prints 3 to the console
  cout << triple(num) << "\n"; //prints 9 to the console

}
```

## Pass By Reference Using `const`

The `const` keyword tells the compiler that something will not change, and any attempts to do so will be met with an error.

Sometimes `const` is used as a function parameter: this would be used when we know for a fact that we want to write a function where the parameter will not change inside the function. **If a function using a `const` parameter has its value changed, there will be a compiler error`.

To save on computational cost, passing a `const` by reference speeds things up considerably.

For example:

```cpp
int triple(int const &i) {
 
  return i * 3;
 
}
```

Building on this, observe the example below:

```cpp
#include <iostream>
using namespace std;

int square(int const &i) {

  return i * i;

}

int main() {
  
  int side = 5;
  
  //the result of 25 is printed to the console, but the 'side' variable is unaltered (remains as 5)
  cout << square(side) << "\n";

}
```

## Memory Addresses

As we know, references (aka aliases) are created using the `&` operator in a variable's declaration: this is called the *address of* operator, and is used to get the memory address (the location in memory) of an object.

A memory address will usually be denoted using hexidecimal numbering, but can appear as binary in rare circumstances.

It is worth remembering these two things about the `&` operator:

1. When `&` is used in a declaration, it is a reference operator
2. When `&` is not used in a declaration, it is an address operator

## Pointers in C++

A *pointer variable* is used similarly to other variables in that they can store data: however, unlike normal variables a pointer will also store its memory address.

Pointers **must** be declared before they can be used, and are distinguished by the use of `*`. For example:

```cpp
int* number = 4; //pointer storing the number 4 and its memory address 
```

You can also create pointers that reference another variable. For example:

```cpp
int* pointer = &number; //pointer storing a reference to another variable
```

## Dereferencing in C++

In order to obtain a value pointed to by a pointer, you just call it using the following syntax:

```cpp
int number_stored = *pointer_to_data;
```

It is important to make the following distinctions:

1. When the `*` operator is used in a declaration, it is *creating* a pointer
2. When the `*` operator is not used in a declaration, it is *dereferencing* a pointer and will retrieve its value

For example:

```cpp
#include <iostream>
using namespace std;

int main() {
  
  int power = 9000;
  
  //creates pointer to power variable
  int* ptr = &power;
  
  //prints the memory address of the item the pointer is referencing
  cout << ptr << "\n";
  
  //prints the data that the pointer is referencing
  cout << *ptr << "\n";
  
}
```

## The Null Pointer

When a pointer variable's content is not initialised, it will contain an address of 'somewhere', which is *not* a valid location. **A pointer must be assigned a valid address for it to be memory safe**.

In the event that we don't know what we are pointing to yet, we can use the built-in null pointer `nullptr`.

Introduced in C++11, it provides a typesafe pointer value representing an empty pointer. In older C/C++ code, `NULL` was used for this purpose, and `nullptr` is its modern replacement.

```cpp
int* null_pointer = nullptr; //creates a null pointer
```
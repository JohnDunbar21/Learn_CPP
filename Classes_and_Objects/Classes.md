# Classes in C++

A *class* is a user-defined type, serving as a blueprint for **objects**. Each object instance gets characteristics (attributes) from its class that determine the way in which they behave.

Here is a generic template for a C++ class:

```cpp
class ClassName {
    //class body
};
```

## Class Members

Components of a class are called *class members*, to which there are two types:

1. **Attributes** (aka member data) consist of information about an instance of the class
2. **Methods** (aka member functions) are functions that you can use with an instance of the class

Unless we have a mostly empty class, it’s common to split function declarations from definitions. We declare methods inside the class (in a header), then define the methods outside the class (in a .cpp file of the same name).

How can we define methods outside a class? We can do this using ClassName:: before the method name to indicate its class like this:

```cpp
// city.h
class City {
  int population;
 
public:
  int get_population();
};
```

```cpp
// city.cpp
#include "city.h"
 
int City::get_population() {
  return population;
}
```
In the preceding code sample, we declare `.get_population()` in the header file, `city.h`. Unlike with regular functions, we need to `include` the header file in the `.cpp` file where we define the methods, which we have done at the top of `city.cpp`. Then, we provide the definition for `.get_population()`, which returns the value of the population attribute.

## Creating Objects

To create an object, we use:

```cpp
ClassName variable_name;
```

Attributes can be set using dot notation and internal methods.

## Access Control: Pubic and Private

By default, everything in a class is set to **private**, meaning members are limited to the scope of the class, making it easier to keep data from being altered in addition to abstracting away all the minute details.

If you try to access a private member, you'll get the following error:

```
error: 'attribute_name' is a private member of 'ClassName'
```

When a class member is needing to be accessed externally, you need to use the **public** identifier which allows alterations to be made.

For example:

```cpp
class City {
 
    int population; 
 
    public:
    void add_resident() { 
        population++;
    }
 
    private: // this stuff is private
    bool is_capital;
 
};
```

## Constructors in C++

A **constructor** is a method that lets you decide how the objects of a class get created, having the same name as the class and no return type.

An example of a constructor being used can be found in the `Example` folder.

## Destructors in C++

Object destruction is about **tidying up and preventing memory leaks**. A *destructor* is a special method that handles object destruction, and has no return type.

A destructor is denoted with `~`, as shown below:

```cpp
//contents of a .h file relating to a .cpp file
public:

City(std::string city_name, int population); //constructor 
~City(); //destructor

//destructor defined in the related .cpp file
City::~City() {
  //destruction code
}
```

After the destructor is run, the object will be destroyed: **this is done automatically in the following scenarios**:

1. The object moves out of scope
2. The object is explicitly deleted
3. The program ends

A full implementation of a destructor can be found in the `Example` folder.


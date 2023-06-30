# Vectors

A **vector** is a sequence of elements that can be accessed by index (similarly to an array). This must be included through the preprocessing directive from the `vector` header:

```cpp
#include <vector>
```

A vector can be initialised like so:

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<double> adult = {800, 1200, 1500};
    std::vector<double> child = {400, 600, 750};

    std::vector<int> random_vector; // This is an uninitialised integer vector.

    std::vector<std::string> string_vector; // This is an uninitialised string vector.
}
```

You can access and modify a standard vector through its index as shown below:

```cpp
    std::cout << child[2] << "\n"; // Will print out 750 to the terminal
```

You can also **add** and **remove** elements using the `.push_back()` and `.pop_back()` functions: it is worth noting that `.pop_back()` takes no arguments.

The **size** of a vector can be found through using the `.size()` method.

Putting all of this to use is a simple program below:

```cpp
#include <iostream>
#include <vector>
  
int main() {
  
  std::vector<double> delivery_order;
  
  delivery_order.push_back(8.99);
  delivery_order.push_back(3.75);
  delivery_order.push_back(0.99);
  delivery_order.push_back(5.99);
  
  double total = 0.0;
  
  for (int i = 0; i < delivery_order.size(); i++) {
    total += delivery_order[i];
  }
  
  std::cout << total << "\n";

}
```


# Input and Output in C++

C++ uses the `<iostream>` library. Output is handled with `std::cout` and input with `std::cin`.

## Output — `std::cout`

`<<` is the insertion operator. You can think of `std::cout` as your console and `<<` as putting text into your console.

`std::endl` ends the line and flushes the output buffer. You can also use `"\n"`, which does not flush the buffer and is usually faster.

```cpp
#include <iostream>
#include <string>

int main() {
    std::cout << "Hello, World!" << std::endl;
}
```

**Output:**
```text
Hello, World!
```

You can chain multiple `<<` operators to print several values on one line:

```cpp
#include <iostream>

int main() {
    std::string name = "Edie";
    int age = 16;
    std::cout << "Name: " << name << " Age: " << age << std::endl;
}
```

**Output:**
```text
Name: Edie Age: 16
```

## The `using namespace std;` shortcut

Writing `std::` before every `cout` / `cin` gets repetitive. Adding `using namespace std;` at the top lets you drop the prefix:

```cpp
#include <iostream>

using namespace std;

int main() {
    cout << "Hello without std::" << endl;
}
```

**Output:**
```text
Hello without std::
```

The reason people will tell you to not do `using namespace std;` is it makes code organization harder. If you make your own variable `cout`, it will conflict with the `std`'s `cout`.

## Input — `std::cin`

`>>` is the extraction operator — it reads data from the keyboard into a variable. You can think of `cin` as your console, with `>>` taking things from your console into your variables. See [this](./../makingStrings.cpp) if you're unsure on using the string type.

```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "!" << endl;
}
```

**Interaction (user types Edie):**
```text
Enter your name: Edie
Hello, Edie!
```

`cin >>` automatically reads the correct type for you.

```cpp
#include <iostream>

using namespace std;

int main() {
    int age;
    double height;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height (m): ";
    cin >> height;

    cout << "In 10 years you will be " << age + 10 << " years old." << endl;
    cout << "Your height is " << height << " m." << endl;
}
```

**Interaction (user types 16 then 1.65):**
```text
Enter your age: 16
Enter your height (m): 1.65
In 10 years you will be 26 years old.
Your height is 1.65 m.
```

## Reading a whole line with `getline()`

`cin >>` stops at whitespace, so it can't read a full name like `"Ada Lovelace"`.

```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    string partName;
    cout << "Try to enter your full name: ";
    cin >> partName
    cout << "Nice to meet you, " << partName << "!" << endl;
}
```

**Interaction (user types Ada Lovelace):**
```text
Try to enter your full name: Ada Lovelace
Nice to meet you, Ada!
```

Use `getline()` instead:

```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Nice to meet you, " << fullName << "!" << endl;
}
```

**Interaction (user types Ada Lovelace):**
```text
Enter your full name: Ada Lovelace
Nice to meet you, Ada Lovelace!
```
# Main Lessons
 - Online resource: [studyplan.dev](https://www.studyplan.dev/intro-to-programming/objects-and-variables)

 - Whenever I say Chapter, Subchapter, or Heading, I'm referring to that thing on the studyplan.dev website

## Section 1 - Intro to programming - IO and variables

### Vocab
 - Syntax: The rules of how a language should be composed 
 - Programming/Coding Language: A language with its own syntax used for the purpose of making programs
 - Operating System (OS): The barrier between your digital computer (all the ways you interact with a digital UI or GUI) and the physical computer (the actual hardware: the pixels on your screen, the system's memory, the keyboard, etc.)
 - Machine Code: Binary code - this is the only code your computer actually understands
 - Compiler: A program that takes a human readable programming language (like C++) and turns it into computer readable machine code
 - Abstraction: Probably the most important concept of computer science. It is the idea of hiding complex details behind a simple interface. 
    - Think about using ChatGPT. Do you care what kind of calculations they're doing? Do you think about all the complex math they do to generate a response? No, all you want is to ask it "Please write my 5 paragraph essay on Animal Farm :(" and have it spit out a 5 paragraph essay that your teacher will probably fail you for. The act of hiding these calculations is abstraction. 
    - All programming is abstraction. Writing C++ code is an abstraction. You are writing human readable code instead of machine readable code. You do not particularily care what the machine code will look like. All you care is that `3 + 3` in C++ does exactly what you want it to do.

### Chapter 1
Do all subchapters between "Setting up..." & "Introduction...". Do not be tempted to skip headings.

### The `const` keyword
The `const` keyword marks a variable as constant, meaning it cannot change.
```cpp
// Because we don't expect pi to change, we mark it const (constant)
// This tells future programmers that this value will not change and should not change
// It also tells the compiler that it can't change, and the compiler will force you to comply
const double PI = 3.14159;

PI = 3; // This will give a compilation error because we are changing a const
```

### Go read up on [io](io.md)

### Practice:
 - [Circle Calculator](../practice/circleCalculator.md)

## Section 2 - Thinking like a programmer - logical flow

### Chapter 2
Start from subchapter "Creating..."
 - Don't be to worried if you don't understand "The Call Stack...", it's a little more abstract (skip the "The Call Stack and The Debugger" since you skipped the debugging portion from Chapter 1)

### Function Vocab
 - Function signature: The website glosses over it. Technically, it only includes the function name and parameter types
 - Function Type: The function signature (name and parameter types) + the return type. This is used for a function prototype
 - Function Prototype: Describes a function's type; describes how you interact with the function
 - Function Definition: Describes how a function behaves. DOES NOT run the function. A function definition on its own does not change how your program runs.
 - Function Call: Where you actually call a function and execute what is inside the function block: `function();`. The location where this is done is also called the "call-site"
 - Return Type: The return type of a function
 - Parameter(s): Describes what CAN be passed into a function - part of the function's type 
 - Argument(s): Describes what IS passed into a function - part of its call

 ### General Vocab
  - Body (of a function, if-statement, while-loop, or for-loop): All the statements within the braces of a function (or if-statement, etc.). Ex. everything within the braces of the main function is the body of the main function

### The `main` function
Now that you understand functions, you may wonder why the `main` function has a return type of `int` rather than `void`. The `main` function actually returns an exit code, which tells the OS the ending status of the program. An exit code of 0 means the program ran successfully, any other number is an error code.
```cpp
// But I don't write a return in my main function??
#include <iostream>

int main() {
    std::cout << "Hello World << std::endl;

    // The compiler actually adds it for you
    // return 0; <- added by the compiler implicitly
}
```

### Practice
 - [AI Girlfriend](../practice/AIGirlfriend.md)
 - [Fizzbuzz](https://www.studyplan.dev/intro-to-programming/fizzbuzz)

## Section 3 - Organizing Complex Data - introduction

 ### Chapter 3
 Do the whole thing

 ### Chapter 4
 Only read up on Member Initializer Lists (this should be in chapter 3 - it's kinda wonky). We do not have to worry about inheritance (probably)

 ### Chapter 9
  - Just do "Dynamic Arrays using `std::vector`\"
  - Don't use `[]` for indexing, use `.at()` instead
    - `.at()` is safer to use, `[]` can be dangerous and cause unexpected things to happen
  ```cpp
  #include <iostream>
  #include <vector>
  
  int main() {
      std::vector nums{10, 9, 8, 7, 6, 5};
      // don't do this
      std::cout << nums[2] << std::endl;
      // do this instead
      std::cout << nums.at(2) << std::endl;
  }
  ```

 ## Section 4 - Organizing Complex Data - extras

 ### Chapter 6
 Just read up on Function Overloading and Static Casting - ignore the other two

 ### Chapter 5
 Do the whole thing


 ## Section 5 - Organizing Complex Code

 ### Chapter 7
 Do "The `#include` Directive" and "Header Files". You should read the "Proprocessor Definitions" subchapter until it starts showing code; you don't really need use the preprocessor beyond `#include`, but you need to know the concept behind what it is.

 ### Chapter 8
 Do "Namespaces". The others are miscellaneous. Here's the synopsis if you're interested in what they are:
  - Enums: Often times you'll see a `bool` (boolean) for storing state: perhaps whether a video game character is dead or alive. But what if this state is more complex? What if instead of your character just being dead, it has different states of "living": Alive, Revivable, and Irrecoverably Dead? Think about how you may represent this state cleanly (actually think). Perhaps you'll represent it as a string? Well, what if you mistype "reviviable" somewhere in your code and you're driven to insanity trying to find the bug. Well, what if you using integer constants for this? After all, booleans are represented with the integer constants 0 and 1. Well, there's a reason you write true and false instead of 1 and 0: the intention is more clear with true and false. This is especially apparent with your own logic. How can an outside reader know that 0 is alive, 1 is revivable, and 2 is irrecoverably dead? Enums (short for enumeration) solves this problem.

  - The `using` Keyword: Remember the `using namespace std;`? You can apply that to any namespace. The `using` keyword also does other things like this. It essentially shortens code by creating little shortcuts for the coder.
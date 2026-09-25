# Navigating [studyplan.dev](https://www.studyplan.dev/intro-to-programming/objects-and-variables)

## Chapter 1
Do all subchapters between "Setting up..." & "Introduction...". Do not be tempted to skip headings.

## Go read up on [io](io.md)

## Chapter 2
Start from subchapter "Creating..."
 - Don't be to worried if you don't understand "The Call Stack...", it's a little more abstract (skip the "The Call Stack and The Debugger" since you skipped the debugging portion from Chapter 1)

 ## Chapter 3
 Do the whole thing

 ## Chapter 4
 Only read up on Member Initializer Lists (this should be in chapter 3 - it's kinda wonky). We do not have to worry about inheritance (probably)

 ## Chapter 6
 Just read up on Function Overloading and Static Casting - ignore the other two

 ## Chapter 5
 Do the whole thing

 ## Chapter 9
 Just do "Dyanmic Arrays using `std::vector`\"

 ## Chapter 7
 Do "The `#include` Directive" and "Header Files". You should read the "Proprocessor Definitions" subchapter until it starts showing code; you don't really need use the preprocessor beyond `#include`, but you need to know the concept behind what it is.

 ## Chapter 8
 Do "Namespaces". The others are miscellaneous. Here's the synopsis if you're interested in what they are:
  - Enums: Often times you'll see a `bool` (boolean) for storing state: perhaps whether a video game character is dead or alive. But what if this state is more complex? What if instead of your character just being dead, it has different states of "living": Alive, Revivable, and Irrecoverably Dead? Think about how you may represent this state cleanly (actually think). Perhaps you'll represent it as a string? Well, what if you mistype "reviviable" somewhere in your code and you're driven to insanity trying to find the bug. Well, what if you using integer constants for this? After all, booleans are represented with the integer constants 0 and 1. Well, there's a reason you write true and false instead of 1 and 0: the intention is more clear with true and false. This is especially apparent with your own logic. How can an outside reader know that 0 is alive, 1 is revivable, and 2 is irrecoverably dead? Enums (short for enumeration) solves this problem.
  - The `using` Keyword: Remember the `using namespace std;`? You can apply that to any namespace. The `using` keyword also does other things like this. It essentially shortens code by creating little shortcuts for the coder.
# 💻 C++ Fundamentals

Welcome! This repo documents my journey learning C++ from the ground up.

I'm building one project at a time, and each new project builds on what I learned in the last one. The early programs are simple, but as I pick up new concepts they get more complex. Following the projects in order shows how my skills grow over time.

## 📚 Course

I'm learning through the Udemy course <b>Beginning C++ Programming - From Beginner to Beyond</b>
, which teaches modern C++, object-oriented programming (OOP), and the Standard Template Library (STL). The course covers C++14 and C++17, with additional information on C++20.

## 🛠️ Projects

### 📐 01 - Room Area

This is my first C++ project, and my goal was to get used to C++ syntax from the ground up. I learned to include the `iostream` library, which provides `cin` and `cout` so the program can prompt the user and receive their input. I used the insertion operator `<<` to print to the screen and the extraction operator `>>` to read input from the keyboard. I also practiced declaring variables and used multiplication to calculate the room's area from its width and length, then printed the result.

**Key takeaways:**

- `cin`, `cout`, and `endl` all come from the `iostream` library and live in the `std` namespace.
- Writing `using std::cout;` (and the same for `cin` and `endl`) lets me use these names directly instead of typing `std::` every time.
- `<<` inserts data into the output stream (printing), and `>>` extracts data from the input stream (reading).
- I can declare multiple variables in a single line as long as they share the same type, for example `int width {0}, length {0};`.
- Every statement must end with a semicolon `;`, which is new coming from Python.

📁 [View project](01_room_area/main.cpp)

### 🧹 02 - Carpet Cleaning Estimator

In this project I built a program that estimates the cost of cleaning carpets based on how many rooms a customer has. Building on what I learned in the first project, I used `cin` and `cout` again to show prompts and capture the user's answers. The new focus was the preferred way to declare and initialize variables. I learned that initializing with `=` lets a value get quietly converted to a smaller type, which can drop detail like the decimal part of a number. Using braces `{}` instead makes the compiler check that the value fits the variable's type, and it stops with an error if it doesn't. I also used `const` for the first time to lock in values that should never change, like the price per room and the sales tax rate. The program takes the number of rooms, calculates the cost, tax, and total, and prints the estimate.

**Key takeaways:**

- Use `{}` instead of `=` to initialize variables. The compiler checks the value against the variable's type, so `int rooms {2.5};` causes an error instead of silently becoming `2`.
- Always give a variable a starting value when I declare it, even if it's just `0`. Otherwise it can hold leftover garbage data from memory.
- `const` in front of a declaration, like `const double tax_rate {0.06};`, means the value can never change. If any later code tries to change it, the compiler throws an error.
- `const` is a good fit for fixed values like prices and tax rates, because it protects them from being changed by accident.

📁 [View project](02_carpet_cleaning/main.cpp)


### 📊 03 - Vectors and Arrays

In this project I learned how to store a list of values in C++ using arrays and vectors. Both hold values of a single type and use indexes starting at `0`, but they behave very differently. An array has a fixed size that is set when it's declared and can never grow. A vector can grow as I add to it. Vectors felt the most new to me coming from Python lists, so I spent most of my time on them. I started with an empty vector and used `.push_back()` to add values, then used `.at()` to get them back. `.at()` does bounds checking, so asking for an index that doesn't exist stops the program with an error. Using `[]` with an out-of-range index does no checking, so it can quietly return a bogus number. I also worked with 2D vectors and 2D arrays, which are laid out like a table of rows and columns. Finally, I learned that building a vector out of other vectors makes a copy of their values, so changing an original vector afterward doesn't change the new one.

**Key takeaways:**

- I need `#include <vector>` at the top of the file to use vectors.
- Arrays have a fixed size. Vectors can grow, and `.push_back()` adds a new value to the end.
- `.at()` and `.push_back()` are vector methods. Plain arrays don't have them.
- `.at()` checks that the index is in range and throws an error if it isn't. `[]` doesn't check, so a bad index can return garbage.
- An array declared without a starting value, like `int scores[5];`, holds garbage data. Adding `{}`, as in `int scores[5] {};`, sets every element to `0`.
- A vector never starts with garbage. `std::vector<int> scores;` starts empty, and `std::vector<int> scores(5);` starts with five `0`s.
- 2D vectors and arrays work like tables. `grid.at(0).at(0)` is the first row and first column, because both indexes start at `0`.
- Building a vector from other vectors copies their values. Changing an original vector afterward doesn't affect the copy.

📁 [View project](03_vectors_and_arrays/main.cpp)

### 🪙 04 - Change Converter

In this project I built a program where the user enters an amount in cents, and it breaks that amount into dollars, quarters, dimes, nickels, and pennies. For example, `100` cents becomes one dollar, and `50` cents becomes two quarters. I used integer division `/` to find how many of each coin fit into the amount. The main new concept was the modulus operator `%`, which gives the remainder after division, along with its shortcut form `%=`. After counting each coin type, I needed to know how many cents were left over. At first I calculated it the long way: `balance - (coin_value * coin_count)`. `balance %= coin_value` does the same thing in one step, so I used that instead. This also introduced me to the whole group of compound assignment operators.

**Key takeaways:**

- `%` returns the remainder of a division. For example, `65 % 25` is `15`.
- When dividing two integers, `/` drops the decimal. For example, `65 / 25` is `2`, which is exactly how many quarters fit.
- Compound assignment operators (`+=`, `-=`, `*=`, `/=`, `%=`) do the math with the value on the right, then store the result back in the variable on the left.
- `cents %= 25;` is shorthand for `cents = cents % 25;`.

🪙[View project](04_change_conversion/main.cpp)
  

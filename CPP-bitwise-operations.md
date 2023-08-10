# Cpp-bitwise-operations
**C Programming Bitwise Operations Readme**

This C program demonstrates various bitwise operations that can be performed on unsigned integer variables. Bitwise operations manipulate individual bits within integers and are often used for low-level tasks, such as setting or clearing specific flags in registers, optimizing memory usage, and more.

**Code Overview:**

1. **Include Statements:**
   The program starts with an include statement to bring in the necessary input/output stream functionality from the `<iostream>` library.

2. **Namespace:**
   The program uses the `namespace std` to avoid explicitly writing `std::` before standard C++ functions.

3. **Main Function:**
   The `main` function is where the execution of the program begins. Inside this function, two unsigned integer variables `a` and `b` are declared and initialized with the values 2 and 6, respectively.

4. **Bitwise AND (`&`):**
   The program demonstrates the bitwise AND operation using `(a & b)`. It prints the result of `a & b`, which is the logical AND of the corresponding bits in `a` and `b`.

5. **Bitwise OR (`|`):**
   Similarly, the program performs the bitwise OR operation using `(a | b)`. It prints the result of `a | b`, which is the logical OR of the corresponding bits in `a` and `b`.

6. **Bitwise NOT (`~`):**
   The program shows the bitwise NOT operation using `~a` and `~b`. It prints the results of `~a` and `~b`, which invert all the bits in `a` and `b`.

7. **Bitwise Left Shift (`<<`):**
   The program demonstrates the bitwise left shift operation using `(a << 3)`. It prints the result of shifting all bits in `a` to the left by 3 positions.

8. **Bitwise Right Shift (`>>`):**
   Similarly, the program shows the bitwise right shift operation using `(b >> 2)`. It prints the result of shifting all bits in `b` to the right by 2 positions.

9. **Bitwise NOT (`~`) Again:**
   The program again demonstrates the bitwise NOT operation, this time using `~b`. It prints the result of inverting all bits in `b`.

10. **Return Statement:**
    Finally, the `main` function returns an integer value of 0 to indicate successful completion of the program.

**How to Run:**

1. Open a C++ development environment or compiler, such as Code::Blocks, Visual Studio, or an online compiler like https://www.onlinegdb.com/online_c++_compiler.

2. Copy and paste the provided code into the development environment.

3. Build and run the program. You should see the output of various bitwise operations printed to the console.

**Note:**
Make sure to understand the purpose and effects of each bitwise operation before using them in real-world scenarios. Bitwise operations are commonly used in system-level programming, embedded systems, and hardware manipulation.

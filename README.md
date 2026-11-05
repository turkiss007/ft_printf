*This project has been created as part of the 42 curriculum by mdorado.*

## Description

The ft_printf project aims to recreate the behavior of the original printf function without relying on its internal implementation. The main goal of this project is to understand how printf works from scratch, learn new concepts such as variadic arguments, and put previously acquired programming knowledge into practice.

## Detailed Algorithm Explanation

First, I thought about the overall structure that my ft_printf function should follow. The function takes a format string as its first parameter, followed by a variable number of arguments, depending on the input provided by the user. While working on this project, I learned about variadic arguments and how to handle them in C.

Based on this, I decided to structure ft_printf around a main loop. Before entering the loop, I initialize the va_list using va_start, which allows me to access the additional arguments passed to the function. Each time an argument needs to be retrieved, I use va_arg to access it and move on to the next one.

The while loop iterates through the format string character by character. When it encounters a % character, it calls a function named checks, which examines the following character to determine the type of data that needs to be printed. Depending on the format specifier, checks calls the corresponding function to handle the required conversion and print the appropriate value.

I also pass count as a pointer to these functions so that its value can be updated throughout the execution of the program. Each conversion function is responsible for printing the corresponding output and updating the character count accordingly.

Once the entire format string has been processed, ft_printf returns the final value of count, representing the total number of characters printed.

## Instructions

### Downloading the repository
1. Open the repository on GitHub.
2. Click on **Code > Download ZIP**.
3. Once the download is complete, extract the ZIP file.
4. Open a terminal in the extracted project directory.

Alternatively, you can clone the repository using Git:

    git clone <repository-url>
    cd <repository-directory>

### Compiling the library
The project includes a Makefile to simplify compilation.

Run the following commands from the project directory:

- `make` or `make all`: Compiles the source files and creates the
  `libftprintf.a` static library.
- `make clean`: Removes the object files (`.o`).
- `make fclean`: Removes the object files and the compiled library.
- `make re`: Removes the previously compiled files and recompiles
  the library.

### Using the library

To use ft_printf in another C project, include the header file
`ft_printf.h` and link the compiled library when compiling your program.

For example:

    cc main.c libftprintf.a

This command assumes that `main.c`, `ft_printf.h`, and `libftprintf.a` are in
the current directory.

You can then run your program using:

    ./a.out

## Resources

The following resources helped me understand the concepts involved
in this project and implement the functions.

### Documentation and learning resources
-[Beej's Guide to C Programming](https://beej.us/guide/bgc/html/#variadic-functions): A useful resource for understanding variadic arguments.

### Peer learning
I also received help from my peers at 42. Discussing problems and
sharing different approaches helped me understand concepts that
were difficult or new to me.

### Use of Artificial Intelligence
I used AI as a learning tool to better understand the requirements
of the project, clarify programming concepts, and investigate why
some parts of my code did not behave as expected.

Rather than relying on AI to provide complete solutions, I used it
to ask questions, understand the reasoning behind different
implementations, and identify potential problems in my code.

When I struggled with a particular concept, I first tried to solve
the problem myself and, when necessary, asked my peers or used AI
to help me understand it.

This was especially useful when learning about concepts that I had
not encountered in other programming languages.

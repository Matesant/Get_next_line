<div align="center">
  
<div style="text-align: center;">
    <h1>✅ Get_next_line</h1>
    <blockquote style="display: inline-block; text-align: left;">
        The objective of this project is to create a function in the C language that, when called, returns a line.
    </blockquote>
    <pre style="display: inline-block; text-align: left;">
As the second project within the common core at École 42,
this assignment focuses on deepening our understanding of malloc,
free, open, and read functions. Specifically, the goal is to implement the 'get_next_line' function,
which reads a text until it encounters a newline character '\n' and then returns the read line.
    </pre>
</div>


## 🛠️ Usage

### Requirements

The function is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Using it in your code**

To use the function in your code, simply include its header:

```C
#include "get_next_line.h"
```
📋 Testing
To use the get_next_line function, you need to create a main function and pass a valid file descriptor (FD) to it. Then, compile your code, optionally specifying the BUFFER_SIZE:

```shell
gcc -Wall -Werror -Wextra -D BUFFER_SIZE=xx get_next_line.c get_next_line_utils.c -o get_next_line && ./get_next_line
```
Explanation:

*-Wall -Werror -Wextra: Enable all warnings and treat them as errors.
*-D BUFFER_SIZE=xx: Define the BUFFER_SIZE macro (replace xx with the desired buffer size).
*-o get_next_line: Name the output file get_next_line.
*-/get_next_line: Execute the compiled program.

Or you can also use this third party tester to fully test the project

* [Tripouille/gnlTester](https://github.com/Tripouille/gnlTester)

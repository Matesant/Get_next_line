# Push swap

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <div class="header-container">
        <img src="https://raw.githubusercontent.com/ayogun/42-project-badges/main/covers/cover-get_next_line-bonus.png" width="400" alt="Imagem 1"/>
        <img src="https://media2.giphy.com/media/v1.Y2lkPTc5MGI3NjExcXpnOHI0eWFvcGhmbGZ1NjE2cDgxZjFlbmpqcjJjY2M4OGljYXg2aiZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/26ybvVFP7Fnp7F1Mk/giphy.webp" width="350" alt="Imagem 2"/>
    </div>
</body>
</html>


<h1 align="center">Making your own C library</h1>

The objective of this project is to create a function in the C language that, when called, returns a line.

## About
As the second project in École 42's common core, this assignment focuses on better understanding malloc, free, open, and read. The goal is to implement get_next_line, a function that reads a text until it encounters a newline (\n) and returns the extracted line.

## Requirements
The functions are written in __C language__ and need the `gcc` compiler.

## Instructions

### 1. Compiling the archives

To compile the project, go to its path and run:

For __mandatory__ :
```
$ make
```
### 2. Cleaning all binary (.o) and executable files (.a)

To delete all files generated with make, go to the path and run:
```
$ make fclean
```
## Bonus
The bonus involves developing a checker to validate the output of the push swap program. This tool verifies that the sorting algorithm produces the correct results by ensuring that the final order of elements in the stacks meets the expected criteria.

To compile the bonus:

For __bonus__ :
```
$ make bonus
```

## Testing
```
gcc -Wall -Werror -Wextra -D BUFFER_SIZE=10 get_next_line.c get_next_line_utils.c -o get_next_line main.c
```

## Explanation

- Wall -Werror -Wextra: Enable all warnings and treat them as errors.
- D BUFFER_SIZE=xx: Define the BUFFER_SIZE macro (replace xx with the desired buffer size).
- o get_next_line: Name the output file get_next_line.
- /get_next_line: Execute the compiled program.

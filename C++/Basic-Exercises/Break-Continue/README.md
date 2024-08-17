
# Vector Manipulation in C++ with Break-Continue

This C++ program demonstrates the use of vectors and control statements (`break` and `continue`) to manipulate and process data. The program includes examples of searching for specific values in a vector and applying discounts to a list of prices.

## Description

The program consists of the following steps:

1. **Search for a specific value in a vector**:
    - A vector of strings (`nombres_base`) is initialized with some names.
    - A `for-each` loop iterates through the vector to search for the value "Persona1".
    - If the value is found, a message is printed, and the loop continues to the next iteration.
    - If the value is not found, a different message is printed.

2. **Search for a specific value in a vector with `break`**:
    - The same vector of strings (`nombres_base`) is used.
    - A `for-each` loop iterates through the vector to search for the value "Persona1".
    - If the value is found, a message is printed, and the loop breaks, stopping further iterations.
    - If the value is not found, a different message is printed.

3. **Apply discounts to a vector of prices**:
    - A vector of floats (`precios`) is initialized with some prices.
    - A constant float (`descuento`) is defined to represent the discount rate.
    - A `for` loop iterates through the vector of prices.
    - If the price is less than or equal to 100, the `continue` statement is used to skip the current iteration.
    - For prices greater than 100, the discount is applied, and the new price is calculated.
    - Another `for` loop iterates through the vector to print the updated prices.

This program helps in understanding how to use vectors, control statements, and loops in C++ to manipulate and process data efficiently.


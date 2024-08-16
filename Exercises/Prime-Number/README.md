
# Prime Number Checker in C++

This C++ program checks whether a given number is prime or not. A prime number is a number that is divisible only by 1 and itself, while a composite number has more than two positive divisors.

## Description

The program consists of the following steps:

1. **Declare an integer variable `Numero`**: This variable will store the user's input.
2. **Prompt the user to enter a number**: The user is instructed to enter a number to check if it is prime.
3. **Check if the number is less than or equal to 1**:
    - If the number is less than or equal to 1, a message is printed indicating that the number is neither prime nor composite.
4. **Use a `for` loop to check for divisors**:
    - The loop iterates from 2 to `Numero/2`.
    - If the number is divisible by any value in this range, a message is printed indicating that the number is not prime, and the loop breaks.
    - If the loop completes without finding any divisors, a message is printed indicating that the number is prime.
5. **Check if the number is less than or equal to 3**:
    - If the number is less than or equal to 3, a message is printed indicating that the number is prime.

This program helps in understanding how to use loops and conditional statements to check for prime numbers in C++.


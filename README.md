# Anand Eligibility Test Solutions

Here are my C++ solutions for the two coding problems in the assessment.

## Problem 1: First Non-Repeating Character
This program finds the first character in a string that only appears once. If every character repeats, it returns `-1`.

### How it works:
- It reads the input line (including spaces).
- We use a simple 256-sized array to count how many times each character shows up.
- Then, we scan the string from left to right and print the first character with a count of `1`.
- This runs in **O(N) time** and uses **O(1) extra space**.

### Running it:
```bash
g++ first_problem.cpp -o first_problem
./first_problem
```

---

## Problem 2: Find the Missing Number
This program finds a single missing number from a sequence of numbers from `1` to `N + 1`.

### How it works:
- It reads numbers from the terminal input until the end of input.
- Instead of sorting or storing the array (which takes extra space and time), we calculate the total sum of all entered numbers.
- Using the math formula `(N + 1) * (N + 2) / 2`, we get the expected sum of a complete sequence.
- The difference between the expected sum and our actual sum is the missing number.
- This runs in **O(N) time** and **O(1) auxiliary space**.

### Running it:
```bash
g++ second_problem.cpp -o second_problem
./second_problem
```
*(Press Enter and then Ctrl+D when you are done entering the numbers to trigger the output.)*

// In C programming, there are three main types of loops: `for`, `while`, and `do-while`. Each type of loop has its own syntax and use cases, making them suitable for different looping scenarios. Here’s a summary of each type of loop along with their basic differences:

// ### 1. `for` Loop

// - **Syntax:**
//   ```c
//   for (initialization; condition; update) {
//       // body of the loop
//   }
//   ```

// - **Usage:**
//   - Used when the number of iterations is known or can be determined before entering the loop.
//   - Typically used for iterating over a range of values or processing elements of an array.

// - **Key Components:**
//   - **Initialization:** Executed once before the loop starts. Typically initializes a counter variable.
//   - **Condition:** Evaluated before each iteration. If true, the loop continues; if false, the loop terminates.
//   - **Update:** Executed after each iteration. Usually increments or updates the counter variable.

// - **Example:**
//   ```c
//   // Print numbers from 1 to 5 using for loop
//   for (int i = 1; i <= 5; i++) {
//       printf("%d ", i);
//   }
//   ```

// ### 2. `while` Loop

// - **Syntax:**
//   ```c
//   while (condition) {
//       // body of the loop
//   }
//   ```

// - **Usage:**
//   - Used when the number of iterations is not known beforehand, and the loop continues as long as the condition remains true.
//   - Suitable for situations where you want to repeat a block of code based on a condition.

// - **Key Component:**
//   - **Condition:** Evaluated before each iteration. If true, the loop continues; if false, the loop terminates.

// - **Example:**
//   ```c
//   int count = 1;
//   // Print numbers from 1 to 5 using while loop
//   while (count <= 5) {
//       printf("%d ", count);
//       count++;
//   }
//   ```

// ### 3. `do-while` Loop

// - **Syntax:**
//   ```c
//   do {
//       // body of the loop
//   } while (condition);
//   ```

// - **Usage:**
//   - Similar to the `while` loop but ensures that the loop body executes at least once, even if the condition is initially false.
//   - Useful when you want to execute the loop body at least once before checking the loop condition.

// - **Key Components:**
//   - **Body of the Loop:** Executes first, and then the condition is evaluated.
//   - **Condition:** Evaluated after each iteration. If true, the loop continues; if false, the loop terminates.

// - **Example:**
//   ```c
//   int count = 1;
//   // Print numbers from 1 to 5 using do-while loop
//   do {
//       printf("%d ", count);
//       count++;
//   } while (count <= 5);
//   ```

// ### Basic Differences:

// - **Initialization:**
//   - `for` loop initializes a counter variable within the loop header.
//   - `while` and `do-while` loops require initialization before the loop and potentially an update within the loop body.

// - **Condition Checking:**
//   - `for` loop checks the condition before each iteration.
//   - `while` and `do-while` loops check the condition at the beginning or end of each iteration, respectively.

// - **Usage Scenarios:**
//   - Use `for` when the number of iterations is known.
//   - Use `while` when the condition for iteration is simple and straightforward.
//   - Use `do-while` when you want to execute the loop body at least once before checking the condition.

// - **Loop Body Execution:**
//   - In `for` and `while` loops, the loop body may not execute at all if the condition is false from the start.
//   - In `do-while` loop, the loop body always executes at least once.

// ### Conclusion:

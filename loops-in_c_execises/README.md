                    Loops in C Progrogamming

In C programming, a loop is a control structure that allows you to repeatedly execute a block of code as long as a certain condition is true. This enables you to automate repetitive tasks and iterate over a collection of elements.

C provides three types of loops: the for loop, the while loop, and the do-while loop. Each type has its own syntax and use cases, but they all serve the purpose of repetition.

1. For Loop: The for loop is commonly used when the number of iterations is known in advance.

The syntax of a for loop is as follows:

for (initialization; condition; increment/decrement)
	{
		// code to be executed repeatedly
	}
Here's how the for loop works:

Initialization: It sets the initial value of the loop control variable.

Condition: It checks the condition before each iteration. If it evaluates to true, the loop body is executed; otherwise, the loop terminates.

Increment/Decrement: It updates the loop control variable after each iteration.

2. While Loop: The while loop is used when the number of iterations is not known in advance. It continues looping as long as the specified condition is true.

The syntax of a while loop is as follows:

while (condition)
	{
		// code to be executed repeatedly
	}
Here's how the while loop works:

Condition: It is evaluated before each iteration. If it evaluates to true, the loop body is executed; otherwise, the loop terminates.

3. Do-While Loop: The do-while loop is similar to the while loop, but it guarantees that the loop body executes at least once, even if the condition is initially false.

The syntax of a do-while loop is as follows:

do ();
	{
		// code to be executed repeatedly
	}
while (condition);
Here's how the do-while loop works:

Code Execution: The loop body is executed first.

Condition: It is evaluated after each iteration. If it evaluates to true, the loop continues; otherwise, the loop terminates.

Loops can also be nested, meaning you can have one loop inside another. This allows for more complex iteration patterns and handling multi-dimensional data structures.

It's important to ensure that the loop condition eventually becomes false to avoid infinite loops. You can use loop control statements like.

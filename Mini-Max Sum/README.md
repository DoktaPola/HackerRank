# Mini-Max Sum

Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.
For example, *arr* = [1, 3, 5, 7, 9]. Our minimum sum is 1 + 3 + 5 + 7 = 16 and our minimum sum is 3 + 5 + 7 + 9 = 24. We would print

__16 24__

### Function Description

Complete the miniMaxSum function in the editor below. It should print two space-separated integers on one line: the minimum sum and the maximum sum of 4 of 5 elements.
miniMaxSum has the following parameter(s):
* arr: an array of 5 integers

### Input Format

A single line of five space-separated integers.

### Constraints

1 <= *arr[i]* <= 10^9

### Output Format

Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing exactly four of the five integers. (The output can be greater than a 32 bit integer.)

### Sample Input

__1 2 3 4 5__

### Sample Output

__10 14__



__Hints:__ Beware of integer overflow! Use 64-bit Integer.

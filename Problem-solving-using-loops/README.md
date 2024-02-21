# Problem Solving using Loops

## Question 1
Given an input array height[] representing the heights of buildings, Write a program to count the number of buildings facing the sunset. It is assumed that the heights of all buildings are distinct.

### Program Name: Building-facing-sun.cpp
#### live demo: https://onlinegdb.com/8lrZtLoA9


## Question 2
Given an integer array X[] of size n, write a program to find all the leaders in the array X[]. An element is a leader if it is strictly greater than all the elements to its right side.
- The last element of an array is a leader by default.
- The largest element of an array is also a leader by default.
- Suppose all the array elements are unique.
- Ordering in the output doesn’t matter.
Example: X[] = [16, 17, 4, 3, 5, 2], Output:[17, 5, 2]

### Program Name: Leaders.cpp
#### Live demo: https://onlinegdb.com/3lVdpEqGt


## Question 3
Given an array X of n integers, write a program to check if the array is a valid mountain array or not. 
Note: The array is a valid mountain when it is first strictly increasing and then strictly decreasing.
Example: 
- Input: X[] = [5, 2, 1, 4], Output: false
- Input: X[] = [5, 8, 8], Output: false
- Input: X[] = [1, 2, 6, 5, 3], Output: true

### Program Name: Valid-mountain-array.cpp
#### Live demo: https://onlinegdb.com/aztbIboKZ

## Question 4
Given a Roman numeral, write a program to find its corresponding decimal value. Roman numerals are represented by seven different symbols:

I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000

### Program Name: Roman.cpp
#### Live demo: https://onlinegdb.com/-2csoyDQY

## Question 5
Write a program to find the equilibrium index of an array. The equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.

In other words, the equilibrium index of an array is an index 'i' such that the sum of elements at indices less than 'i' is equal to the sum of elements at indices greater than 'i'. A[0] + A[1] + ... + A[i - 1] = A[i + 1] + ... + A[n - 1], where 0 <= i <= n - 1.

Example: Input: A[] = [-7, 1, 5, 2, -4, 3, 0], Output: 3

### Program Name: Equilibrium-Index.cpp
#### Live demo: https://onlinegdb.com/uV5lctnQs
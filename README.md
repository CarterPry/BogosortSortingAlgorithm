# Bogosort Algorithm Implementation
This script is the implementation of the Bogosort algorithm, an inefficient sorting algorithm based on generating random permutations of the array until it is fully sorted. I wrote this program in C with an already defined array (can be changed to any length and any value) just for fun.

## Description
Bogosort also known humorously as stupid sort, permutation sort, or shotgun sort, is a simple sorting algorithm. The algorithm shuffles the array randomly until it happens to be sorted. Due to its nature, the time complexity of this algorithm can range from O(n) in the best case to undefined in the worst case, as there is no guarantee it will ever complete.

This implementation includes:
- A random shuffle function to generate permutations of the array.
- A factorial function to calculate the total number of possible permutations for a given array size.
- A sorted check function to determine if the array is sorted.
- A demonstration of using the algorithm to sort a predefined array.
<p align="center">
  <img src="https://www.kirupa.com/data_structures_algorithms/images/bogosort_steps_200.png" alt="Random" width="3375" height="425" />
</p>


## Steps
- **Finds array length:** Finds the number of elements in the array, using the sizeOf memory.
- **Combinations and percentage:** Calculates the factorial of a number to determine the number of possible permutations, as well as the percentage chance the algorithm will randomly choose the right sequence.
- **Shuffles:** Randomly shuffles up the array.
- **CheckSorted:** Checks if the array is sorted in ascending order.
- **Demonstration:** Shows how many attempts the Bogosort algorithm needed to sort.

## How to Run
To run this program, you do neeed a C compiler installed like `gcc` or `clang`. For example, you can compile the script with:
```
gcc -o bogosort bogosort.c
```

## Algorithm Explanation
This was just for fun, especially since this sorting algorithm is also known as the `stupid sort`, and I wanted to try it for myself in C.

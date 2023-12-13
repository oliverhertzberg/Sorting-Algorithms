#Sorting Algorithms Repository
Welcome to the Sorting Algorithms Repository! This repository is a collection of various sorting algorithms implemented in C. The source code of each algorithm is organized into its respective folder. Some information on each algorithm below.

##Insertion Sort
##+
-Simple implementation (easy to understand)
-In-place sorting (no additional memory required for temporary storage)
-Efficient for small data sets or nearly sorted data
-Stable sorting algorithm, meaning it maintains the relative order of equal elements in the input array.
##-
-Inefficient against more extensive data sets.
-Worst-case time complexity: O(n^2).
-Slower than other more advanced algorithms.

##Bubble Sort
##+
-Easy to understand and implement.
-In-place sorting.
-Performs well when array is almost sorted.
##-
-Worst-case time complexity: O(n^2).
-Does more element assignments than its counterpart, insertion sort.

##Selection Sort
##+
-Simple and easy to understand and implement.
-Efficient for small data sets or nearly sorted data.
-In-place sorting.
##-
-Inefficient for large data sets.
-Worst-cast time complexity: O(n^2).
-Non-stable, swaps non-adjacent elements.
-A lot of comparisons.

##Merge Sort
##+
-Can efficiently sort a list in O(n*log(n)) time.
-Optimal for linked lists.
-No worst-case scenario.
-Stable sorting algorithm. (preserves order of equal elements)
##-
-Slow for small datasets.
-The same runtime for already sorted arrays.

##Quick Sort
##+
-Fast and easy to implement
-In-place
##-
-Unstable
-Dependant on the choice of the pivot
-Less suitable for linked lists

##Overview of some sorting algorithms and their complexities
![sorting algorithm complexities](./Array\ Sorting\ Algorithms.png)

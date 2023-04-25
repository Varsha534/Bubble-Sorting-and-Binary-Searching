# Sorting-and-Searching

# Bubble Sort
It is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

![image](https://user-images.githubusercontent.com/125336949/234404761-4066d5fd-5c59-4af0-86c6-0de5fd89c4f7.png)

# Algorithm:
- Start with an array of unsorted numbers
- Define a function called “bubbleSort” that takes in the array and the length of the array as parameters
- In the function, create a variable called “sorted” that is set to true
- Create a for loop that iterates through the array starting at index 0 and ending at the length of the array -1
- Within the for loop, compare the current element with the next element in the array
- If the current element is greater than the next element, swap their positions and set “sorted” to false
- After the for loop, check if “sorted” is false
- If “sorted” is false, call the “bubbleSort” function again with the same array and length as parameters
- If “sorted” is true, the array is now sorted and the function will return the sorted array
- Call the “bubbleSort” function with the initial unsorted array and its length as parameters to begin the sorting process.

# Binary Search
Binary Search is defined as a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(log N). 

# How to Implement Binary Search?

The basic steps to perform Binary Search are:

- Set the low index to the first element of the array and the high index to the last element.
- Set the middle index to the average of the low and high indices.
- If the element at the middle index is the target element, return the middle index.
- Otherwise, based on the value of the key to be found and the value of the middle element, decide the next search space.
- If the target is less than the element at the middle index, set the high index to middle index – 1.
- If the target is greater than the element at the middle index, set the low index to middle index + 1.
- Perform step 2 repeatedly until the target element is found or the search space is exhausted.

![image](https://user-images.githubusercontent.com/125336949/234405666-cccc850a-42d7-4f81-acda-fb721f6e1704.png)

# Advantages of Binary Search:
- Binary search is faster than linear search, especially for large arrays. As the size of the array increases, the time it takes to perform a linear search increases linearly, while the time it takes to perform a binary search increases logarithmically.
- Binary search is more efficient than other searching algorithms that have a similar time complexity, such as interpolation search or exponential search.
- Binary search is relatively simple to implement and easy to understand, making it a good choice for many applications.
- Binary search is well-suited for searching large datasets that are stored in external memory, such as on a hard drive or in the cloud.
- Binary search can be used as a building block for more complex algorithms, such as those used in computer graphics and machine learning.

# Drawbacks of Binary Search:
- We require the array to be sorted. If the array is not sorted, we must first sort it before performing the search. This adds an additional O(N * logN) time --- - complexity for the sorting step, which makes it irrelevant to use binary search.
- Binary search requires that the data structure being searched be stored in contiguous memory locations. This can be a problem if the data structure is too large to fit in memory, or if it is stored on external memory such as a hard drive or in the cloud.
- Binary search requires that the elements of the array be comparable, meaning that they must be able to be ordered. This can be a problem if the elements of the array are not naturally ordered, or if the ordering is not well-defined.
- Binary search can be less efficient than other algorithms, such as hash tables, for searching very large datasets that do not fit in memory.


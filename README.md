# Sorting-and-Searching

Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

Algorithm:
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

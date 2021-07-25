# Count-triplets-with-sum-smaller-than-X
(Platform: GeekForGeek)
(Difficulty: Medium)
(https://practice.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1#)

**QUESTION**
Given an array arr[] of distinct integers of size N and a sum value X, the task is to find count of triplets with the sum smaller than the given sum value X.

**Example 1:**
Input: N = 4, X = 2
arr[] = {-2, 0, 1, 3}
Output:  2
Explanation: Below are triplets with 
sum less than 2 (-2, 0, 1) and (-2, 0, 3). 

**Example 2:**
Input: N = 5, X = 12
arr[] = {5, 1, 3, 4, 7}
Output: 4
Explanation: Below are triplets with 
sum less than 12 (1, 3, 4), (1, 3, 5), 
(1, 3, 7) and (1, 4, 5)

**YOUR TASK:**
This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function countTriplets() that take array arr[], integer N  and integer X as parameters and returns the count of triplets.

**Expected Time Complexity:** O(N2).
**Expected Auxiliary Space:** O(1).


#APPROACH
* **STEP 1**: make variable to store the count of triplet.
* **STEP 2:** sort the array in ascending order.
* **STEP 3:** traversing through the array till n-2 using for loop
* **STEP 4:** initailise the to other variable for the comparison purpose for finding triplet
* **STEP 5:** if sum of array[i]+array[j]+array[k] is greater or equal than given sum decarese the k-- or if sum of array[i]+array[j]+array[k] is less than given sum then we store the count in our ans variable and increment j++;

**TIME COMPLEXITY:O(n2)**

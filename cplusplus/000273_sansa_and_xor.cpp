// Title: Sansa and XOR
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Sansa has an array. She wants to find the value obtained by XOR-ing the contiguous subarrays, followed by XOR-ing the values thus
 * obtained. Can you help her in this task?
 * 
 * For example, if arr=[3,4,5]:
 * 
 * Subarray    Operation      Result
 * 3           None           3
 * 4           None           4
 * 5           None           5
 * 3, 4        3 XOR 4        7
 * 4, 5        4 XOR 5        1
 * 3, 4, 5     3 XOR 4 XOR 5  2
 * 
 * Now we take the resultant values and XOR them together:
 * 3⊕4⊕5⊕7⊕1⊕2=6
 *
 * Input:
 * The first line contains an integer t, the number of the test cases.
 * 
 * Each of the next t pairs of lines is as follows:
 * 
 * The first line of each test case contains an integer n, the number of elements in arr.
 * The second line of each test case contains n space-separated integers arr[i].
 * 
 * Constraints
 * 1≤t≤5
 * 2≤n≤10^​5
 * 1≤arr[i]≤10^​8
 *
 * Output:
 * Print the results of each test case on a separate line.
 *
 * Example 1:
 * Input:
 * 2
 * 3
 * 1 2 3
 * 4
 * 4 5 7 5
 *
 * Output:
 * 2
 * 0
 * 
 * Explanation:
 * Testcase 0
 * 1⊕2⊕3⊕(1⊕2)⊕(2⊕3)⊕(1⊕2⊕3)=2
 * 
 * Testcase 1
 * 4⊕5⊕7⊕5⊕(4⊕5)⊕(5⊕7)⊕(7⊕5)⊕(4⊕5⊕7)⊕(5⊕7⊕5)⊕(4⊕5⊕7⊕5)=0
 **/

// Title: Minimize Absolute Difference
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * You are given a int[] x that contains exactly five positive integers. You want to put four of them instead of the question marks into the
 * following expression: | (?/?) - (?/?) |. Which numbers should you put there and in what order, if your goal is to make the value of the
 * expression as small as possible?
 * 
 * More formally, you have the following expression: | (xa / xb) - (xc / xd) |. Here, "/" denotes real division (e.g., 7/2 = 3.5) and "||"
 * denotes absolute value. You want to find the four distinct subscripts a, b, c, d for which the value of the expression is minimized.
 * 
 * Print four elements: the optimal subscripts {a, b, c, d}. If there are multiple optimal answers, return the lexicographically smallest one
 * among them.
 * 
 * Notes
 * 
 * Given two distinct arrays A and B with the same number of elements, we say that A is lexicographically smaller than B if A has a smaller
 * value at the first index at which they differ.
 *
 * Input:
 * Input consists of one line containing 5 elements of x. Each element of x will be between 1 and 10,000, inclusive.
 *
 * Output:
 * Print out 4 selected elements in one line.
 *
 * Example 1:
 * Input:
 * 2 3 5 7 11
 *
 * Output:
 * 0 3 1 4
 * 
 * Example 2:
 * Input:
 * 1 1 1 1 1
 *
 * Output:
 * 0 1 2 3
 * 
 * Example 3:
 * Input:
 * 8 2 4 2 6
 *
 * Output:
 * 1 0 3 4
 * 
 * Example 4:
 * Input:
 * 10000 4 10 4 10
 *
 * Output:
 * 1 2 3 4
 * 
 * Explanation:
 * Test 1
 * Both {0, 3, 1, 4} ans {1, 4, 0, 3} would minimize the given expression, but {0, 3, 1, 4} comes lexicographically first, so that is the only correct
 * answer. The corresponding expression is |(2/7) - (3/11)| = 0.012987
 * 
 * Test 2
 * Regardless of our choice of subscripts, the expression always evaluates to | (1/1) - (1/1) | = |1-1| = 0. The lexicographically smallest
 * optimal solution is {0, 1, 2, 3}.
 * 
 * Test 3
 * There are four sets of subscripts that minimize the given expression: {1, 0, 3, 4}, {1, 4, 3, 0}, {3, 0, 1, 4}, and {3, 4, 1, 0}
 * 
 * Test 5
 * The smallest possible value of our expression is |(4/10) - (4/10)| = 0.
 **/

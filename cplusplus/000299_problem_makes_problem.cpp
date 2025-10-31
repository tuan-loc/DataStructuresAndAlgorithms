// Title: Problem Makes Problem
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * As I am fond of making easier problems, I discovered a problem. Actually, the problem is 'how can you make n by adding k non-negative
 * integers?' I think a small example will make things clear. Suppose n=4 and k=3. There are 15 solutions. They are:
 * 
 *      1. 0 0 4
 *      2. 0 1 3
 *      3. 0 2 2
 *      4. 0 3 1
 *      5. 0 4 0
 *      6. 1 0 3
 *      7. 1 1 2
 *      8. 1 2 1
 *      9. 1 3 0
 *     10. 2 0 2
 *     11. 2 1 1
 *     12. 2 2 0
 *     13. 3 0 1
 *     14. 3 1 0
 *     15. 4 0 0
 * 
 * As I have already told you that I use to make problems easier, so, you don't have to find the actual result. You should report the result
 * modulo 1,000,000,007.
 *
 * Input:
 * Input starts with an integer T (T≤25000), denoting the number of test cases. Each case contains two integer n (0≤n≤10^​6) and k
 * (1≤k≤10^​6)
 *
 * Output:
 * For each case, print the case number and the result modulo 1000000007.
 *
 * Example 1:
 * Input:
 * 4
 * 4 3
 * 3 5
 * 1000 3
 * 1000 5
 *
 * Output:
 * Case 1: 15
 * Case 2: 35
 * Case 3: 501501
 * Case 4: 84793457
 **/

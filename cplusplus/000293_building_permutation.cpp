// Title: Building Permutation
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Permutation p is an ordered set of integers p1,p2,...,pn, consisting of n distinct positive integers, each of them doesn't exceed n. We'll
 * denote the i-th element of permutation p as p​i. We'll call number n the size or the length of permutation p​1,p​2,...,p​n.
 * 
 * You have a sequence of integers a​1,a​2,...,a​n. In one move, you are allowed to decrease or increase any number by one. Count the
 * minimum number of moves, needed to build a permutation from this sequence.
 *
 * Input:
 * The first line contains integer n(1≤n≤3∗10^​5) — the size of the sought permutation. The second line contains n integers
 * a​1,a2,...,an (−10^9≤ai≤10^9).
 *
 * Output:
 * Print a single number — the minimum number of moves.
 * 
 * Please, do not use the %lld specifier to read or write 64-bit integers in C++. It is preferred to use the cin, cout streams or the %I64d
 * specifier.
 *
 * Example 1:
 * Input:
 * 2
 * 3 0
 *
 * Output:
 * 2
 * 
 * Example 2:
 * Input:
 * 3
 * -1 -1 2
 *
 * Output:
 * 6
 * 
 * Explanation:
 * In the first sample you should decrease the first number by one and then increase the second number by one. The resulting permutation
 * is (2, 1).
 * 
 * In the second sample you need 6 moves to build permutation (1, 3, 2).
 **/

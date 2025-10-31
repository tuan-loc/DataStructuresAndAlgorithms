// Title: Aish And XOR
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * …I always wanted to become an architect, but I’m not very good at math.
 * 
 * Aishwarya was saying this to her friend Puper. Puper motivated her for screwing up the things related to math and said he will
 * also help her if needed.
 * 
 * Being motivated, she started up practicing hard problems of maths and she got stuck in a problem and asked for help from Puper. She is
 * playing with XOR, given an array (containing only 0 and 1) as element of N length.
 * 
 * Given L and R, she wants to know the value of XOR of all elements from L to R (both inclusive) and number of unset bits (0's) in the given
 * range of the array.
 * 
 * Being new she finds it tough so she ask for help from Puper. Puper also finds it tough and confusing. So he ask for your help.
 *
 * Input:
 * The first line contains the number N and the next line contains N numbers containing 0 and 1 only. Next line contain number of query q,
 * and next q lines contains L and R.
 * 
 * Constraint
 * 1≤N≤100000 (1-based indexing of elements)
 * 1≤Q≤N
 * 1≤L≤R≤100000
 * 0≤R−L≤100000
 *
 * Output:
 * For each query print the xor value and number of unset bits in that range.
 *
 * Example 1:
 * Input:
 * 5
 * 1 0 0 0 1
 * 3
 * 2 4
 * 1 5
 * 3 5
 *
 * Output:
 * 0 3
 * 0 3
 * 1 2
 **/

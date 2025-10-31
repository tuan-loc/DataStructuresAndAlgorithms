// Title: No Prefix Set
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Cho N chuỗi. Mỗi chuỗi chỉ chứa các chữ cái thường từ a−j (bao gồm cả hai). Tập hợp N chuỗi được cho là GOOD SET nếu không có chuỗi
 * nào là tiền tố của chuỗi khác, ngược lại thì là BAD SET. (Nếu hai chuỗi giống hệt nhau, chúng được coi là tiền tố của nhau.)
 * 
 * Ví dụ: aab, abcde, aabcd là BAD SET vì aab là tiền tố của aabcd.
 * 
 * In GOOD SET nếu nó thỏa mãn yêu cầu của bài toán.
 * 
 * Ngược lại, in BAD SET và chuỗi đầu tiên mà điều kiện không thành công.
 *
 * Input:
 * Dòng đầu tiên chứa N - số lượng chuỗi trong tập hợp. Sau đó là N chuỗi sao cho dòng thứ i​th chứa chuỗi thứ i​th.
 * 
 * Constraints:
 * 1≤N≤10^​5
 * 1≤ độ dài của chuỗi ≤60
 *
 * Output:
 * In ra GOOD SET nếu bộ hợp lệ. Ngược lại, in ra BAD SET, theo sau là chuỗi đầu tiên mà điều kiện không thành công.
 *
 * Example 1:
 * Input:
 * 7
 * aab
 * defgab
 * abcde
 * aabcde
 * cedaaa
 * bbbbbbbbbb
 * jabjjjad
 *
 * Output:
 * BAD SET
 * aabcde
 * 
 * Example 2:
 * Input:
 * 4
 * aab
 * aac
 * aacghgh
 * aabghgh
 *
 * Output:
 * BAD SET
 * aacghgh
 **/

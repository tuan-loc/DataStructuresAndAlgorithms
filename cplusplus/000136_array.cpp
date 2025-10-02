// Title: Array
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Bạn được cho một mảng a gồm n phần tử: a​1, a​2,..., a​n.
 * 
 * Nhiệm vụ của bạn là tìm ra một đoạn tối thiểu [l,r] (1≤l≤r≤n) sao cho trong các phần tử a​l, a​l+1,.., a​r, có đúng k giá trị phân biệt.
 * 
 * Đoạn [l,r](1≤l≤r≤n; l,r là số nguyên) có độ dài m=r−l+1, thỏa mãn tính chất đã cho, được gọi là tối thiểu, nếu không có
 * đoạn [x,y] nào cũng thỏa mãn tính chất và có độ dài nhỏ hơn m, sao cho 1≤l≤x≤y≤r≤n. Lưu ý rằng đoạn [l,r] không cần phải
 * có độ dài ngắn nhất trong các đoạn thỏa mãn tính chất đã cho.
 *
 * Input:
 * Dòng đầu tiên chứa hai số nguyên được phân tách bởi dấu cách: n và k (1≤n,k≤10^​5). Dòng thứ hai chứa n số nguyên được phân tách
 * bởi dấu cách: a​1, a2,...,a​n − các phần tử của mảng a (1≤a​i≤10^​5).
 *
 * Output:
 * In ra một cặp số được phân tách bởi dấu cách là l và r (1≤l≤r≤n), [l,r] là đáp án của bài toán. Nếu không có đoạn nào thỏa yêu
 * cầu, in ra “−1 −1” không có dấu nháy kép. Nếu có nhiều đáp án đúng thì in ra một đáp án bất kỳ trong số đó.
 *
 * Example 1:
 * Input:
 * 4 2
 * 1 2 2 3
 *
 * Output:
 * 1 2
 * 
 * Example 2:
 * Input:
 * 8 3
 * 1 1 2 2 3 3 4 5
 *
 * Output:
 * 2 5
 * 
 * Example 4:
 * Input:
 * 7 4
 * 4 7 7 4 7 4 7
 *
 * Output:
 * -1 -1
 * 
 * Explanation:
 * Ở ví dụ đầu tiên, trong các phần tử a​1 và a​2 có đúng 2 giá trị phân biệt.
 * 
 * Ở ví dụ thứ hai, đoạn [2,5] là đoạn tối thiểu với 3 giá trị phân biệt, nhưng nó không phải đoạn ngắn nhất trong số các đoạn thỏa
 * mãn.
 * 
 * Ở ví dụ thứ ba, không có đoạn nào có 4 giá trị phân biệt.
 **/

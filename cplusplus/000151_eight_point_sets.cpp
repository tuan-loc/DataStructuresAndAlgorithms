// Title: Eight Point Sets
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Gerald rất tỉ mỉ với bộ tám điểm. Ông cho rằng bất cứ một tập 8 điểm hợp lệ nào đều phải thuộc tập các giao điểm của 3 đường thẳng
 * phân biệt song song với trục hoành và 3 đường thẳng phân biệt song song với trục tung trừ giao điểm chính giữa.
 * 
 * Nói cách khác, phải có ba số nguyên x​1, x​2, x​3 và ba số nguyên khác y​1, y​2, y​3, sao cho x​1<x​2<x​3, y​1<y​2<y3 và tập tám điểm bao
 * gồm tất cả các điểm (x​i,y​j) (1≤i,j≤3), ngoại trừ điểm (x​2,y​2).
 * 
 * Bạn có một tập hợp tám điểm. Hãy xem nó có thỏa yêu cầu của Gerald hay không?
 *
 * Input:
 * Đầu vào bao gồm tám dòng, dòng thứ i chứa hai số nguyên được phân tác bằng dấu cách là x​i và y​i (0≤x​i,y​i≤10^​6).
 * 
 * Bạn không có bất kỳ điều kiện nào khác cho những điểm này.
 *
 * Output:
 * In một dòng duy nhất "respectable", nếu tập hợp điểm đã cho phù hợp với quy tắc của Gerald và "ugly" nếu không.
 *
 * Example 1:
 * Input:
 * 0 0
 * 0 1
 * 0 2
 * 1 0
 * 1 2
 * 2 0
 * 2 1
 * 2 2
 *
 * Output:
 * respectable
 * 
 * Example 2:
 * Input:
 * 0 0
 * 1 0
 * 2 0
 * 3 0
 * 4 0
 * 5 0
 * 6 0
 * 7 0
 *
 * Output:
 * ugly
 * 
 * Example 3:
 * Input:
 * 1 1
 * 1 2
 * 1 3
 * 2 1
 * 2 2
 * 2 3
 * 3 1
 * 3 2
 *
 * Output:
 * ugly
 **/

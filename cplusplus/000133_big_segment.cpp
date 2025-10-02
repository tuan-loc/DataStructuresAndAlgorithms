// Title: Big Segment
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Một đường thẳng trên trục tọa độ có n phân đoạn, phân đoạn thứ i bắt đầu tại vị trí l​i và kết thúc tại vị trí r​i, phân đoạn này được ký hiệu
 * là [l​i, r​i].
 * 
 * Bạn cho rằng có một phân đoạn bao lấy tất cả các phân đoạn còn lại. Nói cách khác, có một phân đoạn trong các phân đoạn đã cho chứa
 * các phân đoạn khác. Tìm trong tập các phân đoạn được cho, phân đoạn bao lấy các phân đoạn còn lại, và in ra số thứ tự của nó. Nếu
 * không tồn tại phân đoạn thỏa mãn thì in −1.
 * 
 * Một cách chặt chẽ, một phân đoạn [a,b] bao lấy phân đoạn [c,d] nếu thỏa mãn điểu kiện a≤c≤d≤b.
 *
 * Input:
 * Dòng đầu tiên chứa một số nguyên n (1≤n≤10^​5) – số lượng đoạn hiện có.
 * 
 * n dòng tiếp theo, mỗi dòng chứa thông tin của một phân đoạn. Dòng thứ i chứa hai số nguyên li, ri (1≤l​i≤r​i≤10^9) cách bởi khoảng
 * trắng - hai biên của phân đoạn i.
 * 
 * Đảm bảo rằng không tồn tại hai phân đoạn trùng nhau.
 *
 * Output:
 * In ra số thứ tự của đoạn thỏa yêu cầu đề bài. Nếu không có đoạn nào như vậy thì in ra −1.
 * 
 * Các phân đoạn được đánh số thứ tự từ 1 theo thứ tự xuật hiện của input.
 *
 * Example 1:
 * Input:
 * 3
 * 3 3
 * 4 4
 * 5 5
 *
 * Output:
 * -1
 * 
 * Example 2:
 * Input:
 * 6
 * 1 5
 * 2 3
 * 1 10
 * 7 10
 * 7 7
 * 10 10
 *
 * Output:
 * 3
 * 
 * Explanation:
 * Ví dụ 1: Trong 3 đoạn thẳng, không có đoạn thẳng nào có khả năng phủ 2 đoạn thẳng còn lại. Do đó ta in ra −1.
 * (/images/000133_big_segment_01.png)
 * 
 * Ví dụ 2: 6 đoạn thẳng trong ví dụ được biểu diễn trên trục tọa độ như hình bên. Dễ dàng nhận thấy rằng đoạn thẳng thứ 3, tức đoạn
 * [1,10] bao phủ hết tất cả các đoạn còn lại. Do đó, đáp án của ví dụ này là 3.
 **/

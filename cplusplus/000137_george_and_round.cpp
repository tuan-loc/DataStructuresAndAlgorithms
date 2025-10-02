// Title: George and Round
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * George quyết định chuẩn bị một vòng thi Codesecrof, vì vậy anh ấy đã chuẩn bị m bài toán cho vòng này. Chúng ta hãy đánh số các bài
 * toán bằng các số nguyên 1 đến m. George ước tính độ phức tạp của vấn đề thứ i​th bằng số nguyên b​i.
 * 
 * Để làm cho vòng thi hay, anh ấy cần ra đề ít nhất n bài toán. Ngoài ra, anh ấy cần có ít nhất một bài toán có độ phức tạp chính xác là a​1, ít
 * nhất một bài toán có độ phức tạp chính xác là a​2, ... và ít nhất một bài toán có độ phức tạp chính xác là a​n. Tất nhiên, vòng thi cũng có thể
 * có các bài toán với độ phức tạp khác.
 * 
 * George có trí tưởng tượng kém. Làm cho một số bài toán đã được chuẩn bị sẵn trở nên đơn giản hơn sẽ dễ hơn việc nghĩ ra một bài toán
 * mới. George rất giỏi trong việc đơn giản hóa các bài toán. Anh ấy có thể đơn giản hóa mọi bài đã được chuẩn bị sẵn với độ phức tạp c
 * thành bất kỳ độ phức tạp d nguyên dương nào (c≥d), bằng cách thay đổi giới hạn của dữ liệu đầu vào.
 * 
 * Tuy nhiên, mọi việc không đơn giản như vậy. George hiểu rằng ngay cả khi anh ấy đơn giản hóa một số bài toán, anh ấy vẫn có thể hết bài
 * toán để làm vòng thi hay. Vì vậy anh ấy muốn tìm ra số lượng bài toán tối thiểu mà anh ấy cần ra đề ngoài m bài toán mà anh ấy đã chuẩn
 * bị để có thể có một vòng thi hay. Lưu ý rằng George có thể ra đề một bài toán mới với bất kỳ độ phức tạp nào.
 *
 * Input:
 * Dòng đầu tiên chứa hai số nguyên n và m (1≤n,m≤3000) − số bài toán tối thiểu trong một vòng thi hay và số bài toán mà George đã
 * chuẩn bị. Dòng thứ hai chứa các số nguyên được phân tách bởi dấu cách a​1, a​2,..., a​n (1≤a​1<a​2<...<a​n≤10^​6) — yêu cầu về độ
 * phức tạp của các bài toán trong một vòng hay. Dòng thứ ba chứa các số nguyên được phân tách bởi dấu cách b​1, b​2,..., b​m
 * (1≤b​1≤b​2≤...≤b​m≤10^​6) — độ phức tạp của các bài toán do George chuẩn bị.
 *
 * Output:
 * In ra một số nguyên duy nhất - câu trả lời cho bài toán.
 *
 * Example 1:
 * Input:
 * 3 5
 * 1 2 3
 * 1 2 2 3 3
 *
 * Output:
 * 0
 * 
 * Example 2:
 * Input:
 * 3 5
 * 1 2 3
 * 1 1 1 1 1
 *
 * Output:
 * 2
 * 
 * Example 3:
 * Input:
 * 3 1
 * 2 3 4
 * 1
 *
 * Output:
 * 3
 * 
 * Explanation:
 * Trong ví dụ đầu tiên, tập hợp các bài toán đã chuẩn bị đáp ứng các yêu cầu cho một vòng thi hay.
 * 
 * Trong ví dụ thứ hai, chỉ cần chuẩn bị hai bài toán có độ phức tạp 2 và 3 là đủ để có được một vòng thi hay.
 * 
 * Trong ví dụ thứ ba, ta dễ dàng có được một vòng thi hay nếu chuẩn bị thêm các bài toán với độ phức tạp: 2,3,4.
 **/

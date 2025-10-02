// Title: GukiZ and Contest
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Giáo sư GukiZ thích các cuộc thi lập trình. Ông đặc biệt thích đánh giá học sinh của mình trong các cuộc thi mà ông chuẩn bị. Bây giờ, ông
 * ấy quyết định chuẩn bị một cuộc thi mới.
 * 
 * Tổng cộng, n học sinh sẽ tham dự, và trước khi bắt đầu, mỗi học sinh trong số họ đều có một số điểm nguyên dương. Học sinh được đánh
 * số từ 1 đến n. Hãy biểu thị điểm số của học sinh thứ i là a​i. Sau khi cuộc thi kết thúc, mỗi học sinh sẽ có một thứ hạng nguyên dương.
 * GukiZ kỳ vọng rằng các học sinh của mình sẽ có thứ hạng phù hợp với số điểm của họ.
 * 
 * Ông cho rằng mỗi học sinh sẽ diễn ra bình đẳng. Cụ thể, nếu học sinh A có số điểm thấp hơn học sinh B, thì A sẽ đạt vị trí lớn hơn B, và
 * nếu hai học sinh có số điểm bằng nhau thì họ sẽ có cùng một thứ hạng.
 * 
 * GukiZ muốn bạn xây dựng lại kết quả theo mong đợi của anh ấy. Giúp đỡ ông ấy và xác định thứ hạng sau khi kết thúc cuộc thi cho từng
 * học sinh của mình nếu mọi thứ diễn ra như mong đợi.
 *
 * Input:
 * Dòng đầu tiên chứa số nguyên n (1≤n≤2000), số học sinh của GukiZ.
 * 
 * Dòng thứ hai chứa n số a​1, a​2,...a​n (1≤a​i≤2000) trong đó a​i là số điểm của học sinh thứ i (1≤i≤n).
 *
 * Output:
 * In một dòng duy nhất, thứ hạng sau khi kết thúc cuộc thi của từng học sinh trong số n học sinh theo thứ tự ban đầu.
 *
 * Example 1:
 * Input:
 * 3
 * 1 3 3
 *
 * Output:
 * 3 1 1
 * 
 * Example 2:
 * Input:
 * 1
 * 1
 *
 * Output:
 * 1
 * 
 * Example 3:
 * Input:
 * 5
 * 3 5 3 4 5
 *
 * Output:
 * 4 1 4 3 1
 * 
 * Explanation:
 * Trong ví dụ đầu tiên, học sinh 2 và 3 được xếp thứ hạng đầu tiên (không có học sinh nào khác có điểm số cao hơn) và học sinh 1 được xếp
 * hạng thứ ba vì có hai học sinh có số điểm cao hơn.
 * 
 * Trong ví dụ thứ hai, Chỉ có 1 học sinh duy nhất thi nên học sinh này xếp hạng 1 .
 * 
 * Trong ví dụ, học sinh thứ 2 và 5 chia sẻ vị trí đầu tiên với số điểm cao nhất, học sinh thứ 4 ở thứ hạng tiếp theo với vị trí thứ ba, và học sinh
 * 1 và 3 là học sinh thứ hạng cuối cùng ở vị trí thứ tư.
 **/

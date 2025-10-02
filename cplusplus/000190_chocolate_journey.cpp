// Title: Chocolate Journey
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Bạn sống ở thành phố B. Bạn của bạn đang sống ở thành phố A. Bạn cần một loại sô cô la xyz đặc biệt. Sô cô la không có sẵn ở thành phố
 * của bạn và chỉ có ở k thành phố. Có N thành phố trong nước và M con đường hai chiều giữa các thành phố, độ dài của mỗi con đường
 * hai chiều này được cho trước. Sô cô la được bảo quản trong các thùng lạnh và có thể giữ được thời gian vô hạn nếu được bảo quản trong
 * các thùng đó. Nếu nó đã được lấy ra khỏi thùng lạnh một lần. Nó sẽ hết hạn sau x đơn vị thời gian và bạn không thể đặt nó trở lại thùng
 * lạnh để có thể sử dụng trong thời gian vô hạn.
 * 
 * Cần 1 đơn vị thời gian để đi qua 1 đơn vị khoảng cách.
 * 
 * Khoảng thời gian tối thiểu mà bạn của bạn cần để tới chỗ bạn với sô cô la là bao nhiêu?
 * 
 * Nếu bạn của bạn không thể mang sô cô la tới gặp bạn, hãy in "-1" (không có dấu ngoặc kép).
 * 
 * Lưu ý: Không có con đường nối trực tiếp từ một thành phố tới chính nó và không có nhiều con đường nối trực tiếp giữa 2 thành phố bất kì.
 *
 * Input:
 * Dòng đầu tiên chứa bốn số nguyên N (số thành phố), M (số đường hai chiều), k (số thành phố có sô cô la), x (thời gian hết hạn).
 * 
 * Dòng tiếp theo chứa k số nguyên được phân tách bằng dấu cách biểu thị các thành phố có sô cô la (Giả sử các thành phố được đánh số từ
 * 1 đến N).
 * 
 * M dòng tiếp theo chứa 3 số nguyên u,v,d, mỗi dòng cho biết rằng có một đường đi từ u đến v và có độ dài d.
 * 
 * Dòng cuối cùng chứa 2 số nguyên được phân tách bằng dấu cách A và B lần lượt biểu thị thành phố của bạn của bạn và thành phố của
 * bạn.
 * 
 * Constraints
 * 1≤N≤10^​5
 * 1≤M≤min(10^​6, (​N∗(N−1))/2)
 * 1≤k≤N−1
 * 1≤x≤N
 * 1≤d≤500
 * 1≤u,v,A,B≤N
 *
 * Output:
 * In khoảng thời gian tối thiểu cần thiết để đến thành phố B từ A với sô cô la. Nếu không thể đi được, hãy in " -1 "(không có dấu ngoặc kép).
 *
 * Example 1:
 * Input:
 * 7 3 1 6
 * 1
 * 4 7 1
 * 3 5 7
 * 6 1 3
 * 6 2
 *
 * Output:
 * -1
 * 
 * Explanation:
 * (/images/000190_chocolate_journey_01.png)
 * Vậy ở đây A là 6 và B là 2. Vì chúng ta không có bất kỳ đường đi nào từ 6 → 2, câu trả lời là -1.
 **/

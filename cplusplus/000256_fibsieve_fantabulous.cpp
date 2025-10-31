// Title: Fibsieve Fantabulous
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Fibsieve đã có một bữa tiệc sinh nhật rất fantabulous (tuyệt vời) (vâng, đó là một từ thực tế) trong năm nay. Anh ấy có nhiều quà đến nỗi
 * anh ấy thực sự đang nghĩ đến việc không tổ chức tiệc vào năm sau.
 * 
 * Trong số những món quà này có một bàn cờ bằng kính $ N \times N $ có đèn chiếu sáng trong mỗi ô của nó. Khi bảng được bật, một ô
 * riêng biệt sẽ sáng lên mỗi giây và sau đó tối đi.
 * 
 * Các ô sẽ sáng lên theo trình tự được hiển thị trong sơ đồ. Mỗi ô được đánh dấu bằng giây mà nó sẽ sáng lên.
 * (/images/000256_fibsieve_fantabulous_01.png)
 * (The numbers in the grids stand for the time when the corresponding cell lights up)
 * 
 * Trong giây đầu tiên, đèn tại ô (1,1) sẽ sáng. Và trong giây thứ 5, ô (3,1) sẽ được bật. Bây giờ, Fibsieve đang cố gắng dự đoán ô nào sẽ
 * sáng vào một thời điểm nhất định (tính bằng giây). Giả sử rằng N đủ lớn.
 *
 * Input:
 * Đầu vào bắt đầu bằng một số nguyên T (T≤200), biểu thị số lượng trường hợp.
 * 
 * Mỗi trường hợp sẽ chứa một số nguyên S (1≤S≤10^​15) đại diện cho thời gian.
 *
 * Output:
 * Đối với mỗi trường hợp, bạn phải in số trường hợp và hai số (x,y), số cột và số hàng.
 *
 * Example 1:
 * Input:
 * 3
 * 8
 * 20
 * 25
 *
 * Output:
 * Case 1: 2 3
 * Case 2: 5 4
 * Case 3: 1 5
 **/

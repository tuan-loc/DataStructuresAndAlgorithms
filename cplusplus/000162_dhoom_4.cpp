// Title: Dhoom 4
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Samarpit là người hùng của Dhoom 4. Anh ta đang cố gắng giành chiến thắng Code Bank Of Hackers. Samarpit có một chìa khóa với giá trị
 * số nguyên được in trên đó. Anh ta cũng có N các chìa khóa khác với mỗi chìa khóa có giá trị cụ thể riêng. Samarpit đang cố gắng mở chiếc
 * ổ Khóa mà anh ta được cho, để bằng giá trị chìa khóa của ổ Khóa đó. Anh ta có thể thực hiện một hoạt động. Lấy chìa khóa riêng của anh
 * ấy và một trong N chìa khóa khác, và hợp nhất chúng. Trong quá trình hợp nhất, giá trị chìa khoá của Samarpit sẽ thay đổi thành sản
 * phẩm của cả hai sau khi mô-đun 100000.
 * 
 * Ví dụ: nếu giá trị chìa khóa của anh ấy là X và anh ấy lấy chìa khóa có giá trị là Y thì chìa khóa mới của anh ấy sẽ là (X∗Y)%100000.
 * Chìa khóa đã được sử dụng trong quá trình hợp nhất được sử dụng tiếp tục cùng với N−1 chìa khóa đã cho.
 * 
 * Toàn bộ quá trình hợp nhất mất 1 giây. Bây giờ anh ta đang vội, anh ta yêu cầu bạn tìm thời gian tối thiểu mà anh ta có thể đạt bằng giá trị
 * chìa khóa của ổ Khóa.
 *
 * Input:
 * Dòng đầu tiên chứa 2 số nguyên, chúng là giá trị chìa khóa của Samarpit và giá trị chìa khóa của ổ Khóa.
 * 
 * Dòng thứ hai chứa số nguyên N, cho biết số lượng chìa khóa khác mà Samarpit có.
 * 
 * Dòng thứ ba chứa N số nguyên được phân tách bằng dấu cách cho biết giá trị của N chìa khóa.
 *
 * Output:
 * Thời gian tối thiểu cần thiết để bằng giá trị chìa khóa của ổ Khóa. Nếu anh ta không thể tạo ra giá trị đó xuất - 1.
 *
 * Example 1:
 * Input:
 * 3 30
 * 3
 * 2 5 7
 *
 * Output:
 * 2
 **/

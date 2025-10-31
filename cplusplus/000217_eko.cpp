// Title: Eko
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Lumberjack Mirko cần chặt M mét gỗ. Đó là một công việc dễ dàng vì anh ta có một chiếc máy đốn gỗ mới tiện lợi có thể hạ gục những
 * cánh rừng như cháy rừng. Tuy nhiên, Mirko chỉ được phép chặt một hàng cây duy nhất.
 * 
 * Máy của Mirko hoạt động như sau: Mirko đặt thông số chiều cao H (tính bằng mét), và máy nâng một lưỡi cưa khổng lồ lên độ cao đó và
 * chặt tất cả các bộ phận của cây mà cao hơn H (tất nhiên, những cây không cao hơn H thì giữ nguyên mét). Mirko sau đó lấy những phần
 * đã bị chặt đi. Ví dụ: nếu hàng cây có các cây cao 20, 15, 10 và 17 mét và Mirko nâng lưỡi cưa của mình lên 15 mét, thì chiều cao cây còn lại
 * sau khi cắt sẽ tương ứng là 15, 15, 10 và 15 mét, trong khi Mirko sẽ bỏ đi 5 mét khỏi cây đầu tiên và 2 mét khỏi cây thứ tư (tổng cộng là 7
 * mét gỗ).
 * 
 * Mirko là người có ý thức về sinh thái, vì vậy anh ấy không muốn chặt nhiều gỗ hơn mức cần thiết. Đó là lý do tại sao anh ấy muốn đặt lưỡi
 * cưa của mình càng cao càng tốt. Giúp Mirko tìm chiều cao số nguyên tối đa của lưỡi cưa mà vẫn cho phép anh ta chặt ít nhất M mét gỗ.
 *
 * Input:
 * Dòng đầu tiên của đầu vào chứa hai số nguyên dương được phân tách bằng dấu cách, N (số cây, 1≤N≤1,000,000) và M (số lượng
 * gỗ yêu cầu của Mirko, 1≤M≤2,000,000,000).
 * 
 * Dòng thứ hai của đầu vào chứa N các số nguyên dương được phân tách bằng dấu cách nhỏ hơn 1,000,000,000, chiều cao của mỗi cây
 * (tính bằng mét). Tổng tất cả các chiều cao sẽ vượt quá M, do đó Mirko sẽ luôn có thể lấy được lượng gỗ cần thiết.
 *
 * Output:
 * Dòng đầu tiên và duy nhất của đầu ra chứa chiều cao cần thiết cần tìm.
 *
 * Example 1:
 * Input:
 * 4 7
 * 20 15 10 17
 *
 * Output:
 * 15
 * 
 * Example 1:
 * Input:
 * 5 20
 * 4 42 40 26 46
 *
 * Output:
 * 36
 **/

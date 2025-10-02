// Title: Wrath
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Hỡi những bàn tay nhuốm máu của người vô tội!
 * 
 * Có n người có tội trong một hàng, người thứ i giữ một cái móng vuốt có chiều dài L​i. Khi chuông reo mỗi người giết một số người trước
 * mặt mình. Tất cả mọi người giết những người khác cùng một lúc. Cụ thể, người thứ i giết người thứ j khi và chỉ khi j<i và j≥i−L​i.
 * 
 * Bạn được cung cấp độ dài của các móng vuốt. Bạn cần tìm số người còn sống sau khi chuông reo.
 *
 * Input:
 * Dòng đầu tiên chứa một số nguyên n (1≤n≤10^​6) - số người có tội.
 * 
 * Dòng thứ hai chứa n số nguyên được phân tách bởi dấu cách: L​1, L​2,...,L​n (0≤L​i≤10^​9), trong đó L​i là độ dài móng vuốt của người
 * thứ i.
 *
 * Output:
 * In ra một số nguyên - số người còn sống sau khi chuông reo.
 *
 * Example 1:
 * Input:
 * 4
 * 0 1 0 10
 *
 * Output:
 * 1
 * 
 * Example 2:
 * Input:
 * 2
 * 0 0
 *
 * Output:
 * 2
 * 
 * Example 3:
 * Input:
 * 10
 * 1 1 3 0 0 0 2 1 0 3
 *
 * Output:
 * 3
 * 
 * Explanation:
 * Trong ví dụ đầu tiên, người cuối cùng giết hết tất cả mọi người trước mặt anh ta.
 **/

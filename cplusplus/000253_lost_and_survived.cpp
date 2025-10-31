// Title: Lost And Survived
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Vào ngày 22 tháng 9 năm 2004, Chuyến bay 815 của Oceanic đã bị rơi trên một hòn đảo bí ẩn đâu đó ở Thái Bình Dương.
 * 
 * Thực sự có những người sống sót trong vụ tai nạn, N người sống sót. Hòn đảo bí ẩn tiếp tục di chuyển trong không - thời gian, vì vậy
 * không một cuộc giải cứu nào đến được với họ. Ban đầu, mỗi người sống sót đều ở một mình. Nhưng ngay sau đó họ nhận ra có những
 * “Người khác” (Các nhà khoa học của Sáng kiến ​​Phật pháp chết tiệt) trên Đảo này.
 * 
 * Vì vậy, để bảo vệ bản thân khỏi các nhà khoa học điên loạn, họ bắt đầu hợp nhất thành nhóm sau khi Tiến sĩ Shephard nói "Sống cùng
 * nhau Chết một mình". Bạn phải xử lý các truy vấn Q; trong đó bao gồm hai người sống sót trở thành bạn bè và do đó hợp nhất hai nhóm
 * của hai người đó thành một nhóm lớn hơn. Sau mỗi truy vấn, xuất ra sự khác biệt giữa nhóm có kích thước lớn nhất và nhóm có kích thước
 * nhỏ nhất tại thời điểm đó.
 * 
 * Nếu chỉ có một nhóm, xuất 0. Lúc đầu, mọi người đều ở trong nhóm của riêng họ. Cũng lưu ý, nếu hai người sống sót trong truy vấn đã ở
 * trong cùng một nhóm, hãy in câu trả lời hiện tại và bỏ qua việc hợp nhất các nhóm.
 *
 * Input:
 * Dòng đầu tiên bao gồm hai số nguyên được phân tách bằng dấu cách, N và Q.
 * 
 * Q dòng tiếp theo bao gồm hai số nguyên A và B, có nghĩa là nhóm của người sống sót A và nhóm của người sống sót B hợp nhất thành
 * một nhóm lớn hơn.
 * 
 * 1≤N≤100000
 * 1≤Q≤100000
 *
 * Output:
 * In ra Q dòng, câu trả lời sau mỗi truy vấn.
 *
 * Example 1:
 * Input:
 * 5 3
 * 1 2
 * 2 3
 * 5 4
 *
 * Output:
 * 1
 * 2
 * 1
 **/

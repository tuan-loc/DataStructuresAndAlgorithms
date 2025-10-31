// Title: Consistency Checker
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * SETI đang nhận được một vài tín hiệu kỳ lạ trong vài ngày qua. Sau khi chuyển đổi chúng sang hệ thống số của chúng tôi, họ phát hiện ra
 * rằng một vài số đang lặp lại. Do di chuyển hàng triệu dặm, chuỗi tín hiệu bị sai lệch. Bây giờ họ yêu cầu bạn kiểm tra tính nhất quán của
 * các tập dữ liệu của họ. Tính nhất quán có nghĩa là không có chuỗi tín hiệu nào là tiền tố của một chuỗi tín hiệu khác trong tập dữ liệu đó.
 * 
 * Hãy xem xét tập dữ liệu sau:
 * 
 * 1. 123
 * 2. 5123456
 * 3. 123456
 * 
 * Trong tập dữ liệu này, các số không nhất quán vì chuỗi đầu tiên đầu tiên là tiền tố của chuỗi thứ ba.
 *
 * Input:
 * Đầu vào bắt đầu bằng một số nguyên T (T≤50), biểu thị số lượng tập dữ liệu.
 * 
 * Mỗi tập dữ liệu bắt đầu bằng một số nguyên n (1≤n≤10000) biểu thị tổng số chuỗi tín hiệu trong tập dữ liệu. Mỗi dòng trong số n
 * tiếp theo chứa một chuỗi tín hiệu duy nhất. Chuỗi tín hiệu là một dãy các chữ số và có độ dài từ 1 đến 10.
 *
 * Output:
 * Đối với mỗi tập dữ liệu, hãy in số thứ tự của tập dữ liệu và 'YES' nếu danh sách nhất quán hoặc 'NO' nếu không nhất quán.
 *
 * Example 1:
 * Input:
 * 2
 * 3
 * 911
 * 97625999
 * 91125426
 * 5
 * 113
 * 12340
 * 123440
 * 12345
 * 98346
 *
 * Output:
 * Case 1: NO
 * Case 2: YES
 **/

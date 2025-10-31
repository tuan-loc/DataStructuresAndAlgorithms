// Title: Minimum Loss
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Lauren có một biểu đồ về giá dự kiến ​cho một ngôi nhà trong n năm tới, trong đó giá của ngôi nhà trong năm thứ i là p​i. Cô ấy muốn mua
 * và bán lại căn nhà với mức lỗ tối thiểu theo các quy tắc sau:
 * 
 * Không thể bán nhà với giá lớn hơn hoặc bằng giá đã mua (tức là phải bán lại khi bị thua lỗ).
 * 
 * Căn nhà không thể được bán lại trong cùng năm nó được mua.
 * 
 * Tìm và in ra số tiền tối thiểu Lauren phải mất nếu cô ấy mua căn nhà và bán lại nó trong vòng n năm tới.
 * 
 * Lưu ý: Dữ liệu đảm bảo rằng có tồn tại câu trả lời hợp lệ tồn tại.
 *
 * Input:
 * Dòng đầu tiên chứa một số nguyên, n, biểu thị số năm có giá dự kiến của ngôi nhà trong n năm đó.
 * 
 * Dòng thứ hai chứa n các số nguyên dài được phân tách bằng dấu cách mô tả các giá trị tương ứng của p​1, p​2,..., p​n.
 * 
 * 1≤n≤2.10^​5
 * 1≤p​i≤10^​16
 * Tất cả các mức giá đều khác nhau.
 * Đảm bảo rằng tồn tại câu trả lời hợp lệ.
 *
 * Output:
 * In một số nguyên biểu thị số tiền tối thiểu Lauren phải mất nếu mua và bán lại căn nhà trong vòng n năm tới.
 *
 * Example 1:
 * Input:
 * 3
 * 5 10 3
 *
 * Output:
 * 2
 * 
 * Example 2:
 * Input:
 * 5
 * 20 7 8 2 5
 *
 * Output:
 * 2
 * 
 * Explanation:
 * Lauren mua căn nhà vào năm thứ 2 với giá p​2=7 và bán nó vào năm thứ 5 với giá p​5=5 với mức lỗ tối thiểu là 7−5=2.
 **/

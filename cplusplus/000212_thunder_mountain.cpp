// Title: Thunder Mountain
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Markus đang xây dựng một đội quân để chống lại Valhalla Sector, vì vậy anh ta cần phải di chuyển một số nguồn cung cấp giữa các thị trấn
 * gần đó. Rừng đầy rẫy trộm cướp và những người không thân thiện khác, vì vậy việc đi xa sẽ rất nguy hiểm.
 * 
 * Với tư cách là người đứng đầu bộ phận an ninh của Thunder Mountain, Lee cho rằng sẽ không an toàn nếu bạn mang đồ tiếp tế đi hơn
 * 10km mà không ghé thăm một thị trấn. Markus muốn biết một người sẽ cần phải đi bao xa để đi từ thị trấn này đến thị trấn khác trong
 * trường hợp xấu nhất.
 *
 * Input:
 * Dòng đầu tiên của đầu vào cho biết số trường hợp, N.
 * 
 * N dòng tiếp theo, mỗi dòng bắt đầu bằng một dòng chứa số nguyên n (số thị trấn, 1<n<101). N dòng tiếp theo sẽ cung cấp vị trí xy
 * của mỗi thị trấn tính bằng km (số nguyên trong khoảng [0,1023]).
 * 
 * Giả sử rằng Trái đất phẳng và toàn bộ lưới 1024∗1024 được bao phủ bởi một khu rừng với những con đường nối từng cặp thị trấn cách
 * xa nhau không quá 10km.
 *
 * Output:
 * Đối với mỗi testcase, xuất ra dòng "Case #x:", trong đó x là số thứ tự testcase. Trên dòng tiếp theo, in khoảng cách tối đa mà người ta phải
 * đi từ thị trấn A đến thị trấn B (đối với một số A và B). Làm tròn câu trả lời đến 4 chữ số thập phân. Mọi câu trả lời sẽ tuân theo công thức
 * ∣ans∗10^​4−⌊ans∗10^​4⌋−0.5∣>10^​−2
 * 
 * Nếu không thể đi từ thị trấn nào đó đến thị trấn khác, hãy in "Send Kurdy". Đặt một dòng trống sau mỗi trường hợp thử nghiệm.
 * 
 * In một dòng trống giữa hai testcase.
 *
 * Example 1:
 * Input:
 * 2
 * 5
 * 0 0
 * 10 0
 * 10 10
 * 13 10
 * 13 14
 * 2
 * 0 0
 * 10 1
 *
 * Output:
 * Case #1:
 * 25.0000
 * 
 * Case #2:
 * Send Kurdy
 **/

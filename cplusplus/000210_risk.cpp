// Title: Risk
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Risk là một trò chơi trên bàn cờ trong người chơi đối lập cố gắng chinh phục thế giới. Trò chơi bao gồm một bản đồ thế giới được chia
 * thành các quốc gia giả định. Trong lượt của người chơi, các đội quân đóng tại một quốc gia chỉ được phép tấn công các quốc gia mà họ có
 * chung đường biên giới. Sau khi chinh phục quốc gia đó, quân đội có thể tiến vào quốc gia mới bị chinh phục.
 * 
 * Trong quá trình chơi, người chơi thường tham gia vào một chuỗi các cuộc chinh phạt với mục tiêu chuyển một lượng lớn quân đội từ một
 * số quốc gia ban đầu đến một quốc gia khác. Thông thường, người chơi chọn các quốc gia can thiệp để giảm thiểu tổng số các quốc gia cần
 * bị chinh phục. Đưa ra mô tả về bàn cờ với 20 quốc gia được đánh số từ 1 tới 19. Nhiệm vụ của bạn là viết một hàm lấy quốc gia ban đầu và
 * quốc gia đến cuối cùng và tính toán số lượng quốc gia tối thiểu phải chinh phục để đạt được điểm đến. Bạn không cần phải xuất ra chuỗi
 * các quốc gia, chỉ cần viết ra số lượng quốc gia cần chinh phục bao gồm cả điểm đến. Ví dụ: Nếu quốc gia xuất phát và quốc gia đến là láng
 * giềng, thì chương trình của bạn sẽ trả về một quốc gia.
 * 
 * Sơ đồ minh họa cho testcase đầu tiên:
 * (/images/000210_risk_01.png)
 *
 * Input:
 * Đầu vào chương trình sẽ bao gồm nhiều testcase. Mỗi testcase bao gồm một bảng mô tả từ dòng 1 đến dòng 19. Để tránh liệt kê các ranh
 * giới quốc gia hai lần, bảng mô tả chỉ liệt kê thực tế rằng quốc gia I giáp với quốc gia J khi I<J. Do đó, dòng I​th, trong đó I nhỏ hơn 20,
 * chứa một số nguyên X cho biết có bao nhiêu quốc gia “được đánh số cao hơn” có chung đường biên giới với quốc gia I, sau đó là X số
 * nguyên riêng biệt J lớn hơn I và không quá 20, mỗi giá trị mô tả ranh giới giữa các quốc gia I và J. Dòng 20 của tập kiểm tra chứa một số
 * nguyên (1≤N≤100) cho biết số lượng cặp quốc gia theo sau. N dòng tiếp theo mỗi dòng chứa đúng hai số nguyên
 * (1≤A,B≤20;A≠B) cho biết quốc gia bắt đầu và kết thúc để chinh phục.
 * 
 * Có nhiều testcase trong input. Chương trình của bạn sẽ tiếp tục đọc và xử lý cho đến khi kết thúc tệp. Sẽ có ít nhất một đường đi giữa hai
 * quốc gia bất kỳ.
 *
 * Output:
 * Đối với mỗi bộ test, chương trình của bạn sẽ in ra thông báo sau ‘Test Set #T’ trong đó T là số của bộ kiểm tra bắt đầu bằng 1 (căn trái ở
 * cột 11).
 * 
 * N​T dòng tiếp theo mỗi dòng sẽ chứa kết quả cho truy vấn tương ứng trong testcase đó - tức là số quốc gia tối thiểu để chinh phục. Dòng
 * kết quả kiểm tra phải chứa mã quốc gia bắt đầu A căn phải trong cột 1 và 2; chuỗi ‘to’ trong cột từ 3 đến 6; mã quốc gia đích B căn phải
 * trong cột 7 và 8; chuỗi ': ' trong cột 9 và 10; và một số nguyên duy nhất cho biết số lần di chuyển tối thiểu cần thiết để di chuyển từ quốc
 * gia A đến quốc gia B trong tập kiểm tra căn trái bắt đầu từ cột 11. Sau tất cả các dòng kết quả của mỗi tập đầu vào, chương trình của bạn
 * sẽ in một dòng trống.
 *
 * Example 1:
 * Input:
 * 1 3
 * 2 3 4
 * 3 4 5 6
 * 1 6
 * 1 7
 * 2 12 13
 * 1 8
 * 2 9 10
 * 1 11
 * 1 11
 * 2 12 17
 * 1 14
 * 2 14 15
 * 2 15 16
 * 1 16
 * 1 19
 * 2 18 19
 * 1 20
 * 1 20
 * 5
 * 1 20
 * 2 9
 * 19 5
 * 18 19
 * 16 20
 * 4 2 3 5 6
 * 1 4
 * 3 4 10 5
 * 5 10 11 12 19 18
 * 2 6 7
 * 2 7 8
 * 2 9 10
 * 1 9
 * 1 10
 * 2 11 14
 * 3 12 13 14
 * 3 18 17 13
 * 4 14 15 16 17
 * 0
 * 0
 * 0
 * 2 18 20
 * 1 19
 * 1 20
 * 6
 * 1 20
 * 8 20
 * 15 16
 * 11 4
 * 7 13
 * 2 16
 *
 * Output:
 * Test Set #1
 *  1 to 20: 7
 *  2 to  9: 5
 * 19 to  5: 6
 * 18 to 19: 2
 * 16 to 20: 2
 * 
 * Test Set #2
 *  1 to 20: 4
 *  8 to 20: 5
 * 15 to 16: 2
 * 11 to  4: 1
 *  7 to 13: 3
 *  2 to 16: 4
 **/

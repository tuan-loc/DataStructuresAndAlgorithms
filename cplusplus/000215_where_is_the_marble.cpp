// Title: Where is the Marble
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Raju và Meena thích chơi với những viên bi. Họ có rất nhiều viên bi được viết số trên đó. Lúc đầu, Raju sẽ đặt các viên bi lần lượt theo thứ
 * tự tăng dần của các số ghi trên chúng. Sau đó, Meena sẽ yêu cầu Raju tìm viên bi đầu tiên được viết một con số nhất định. Cô ấy sẽ đếm
 * 1...2...3. Raju sẽ được một điểm cho câu trả lời đúng, và Meena sẽ nhận được điểm nếu Raju không thành công. Sau một số lần chơi, trò
 * chơi kết thúc và người chơi có số điểm lớn hơn sẽ thắng. Hôm nay là cơ hội để bạn chơi với tư cách là Raju. Là một đứa trẻ thông minh, bạn
 * sẽ được ưu tiên sử dụng máy tính. Nhưng đừng đánh giá thấp Meena, cô ấy đã viết một chương trình để theo dõi lượng thời gian bạn dành
 * để đưa ra tất cả các câu trả lời. Vì vậy, bây giờ bạn phải viết một chương trình, chương trình này sẽ giúp bạn trong vai trò Raju.
 *
 * Input:
 * Có thể có nhiều bộ test.
 * 
 * Mỗi bộ test bắt đầu bằng 2 số nguyên N - số viên bi và Q - số truy vấn Meena sẽ thực hiện. N dòng tiếp theo chứa các số được viết trên
 * các viên bi. Những số này sẽ không theo thứ tự cụ thể nào. Sau đó là Q dòng chứa các truy vấn. Hãy yên tâm, không có số đầu vào nào lớn
 * hơn 10000 và không có số nào là số âm.
 * 
 * Dữ liệu đầu vào kết thúc bởi một bộ test có N=0 và Q=0.
 *
 * Output:
 * Đối với mỗi bộ test, xuất ra số thứ tự của nó. Đối với mỗi truy vấn, in một dòng đầu ra. Định dạng của dòng này sẽ phụ thuộc vào việc số
 * truy vấn có được viết trên bất kỳ viên bi nào hay không. Hai định dạng khác nhau được mô tả bên dưới:
 * 
 * 'x found at y', nếu viên bi đầu tiên có số x được tìm thấy ở vị trí y. Các vị trí được đánh số 1,2,...,N.
 * 'x not found', nếu viên bi có số x không có.
 * 
 * Nhìn vào ví dụ để biết thêm chi tiết.
 *
 * Example 1:
 * Input:
 * 4 1
 * 2
 * 3
 * 5
 * 1
 * 5
 * 5 2
 * 1
 * 3
 * 3
 * 3
 * 1
 * 2
 * 3
 * 0 0
 *
 * Output:
 * CASE# 1:
 * 5 found at 4
 * CASE# 2:
 * 2 not found
 * 3 found at 3
 **/

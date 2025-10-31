// Title: Possible Friends
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Josué, một trong những sinh viên của PUCMM, đang phát triển một mạng xã hội, nhưng anh ấy đang gặp vấn đề trong việc nhận định một
 * người có nhiều possible friends.
 * 
 * Hai người được gọi là "có thể là bạn" (possible friends) khi họ không phải là bạn nhưng có chung ít nhất một người bạn, ví dụ, nếu người A
 * có một người bạn duy nhất là B, và B là bạn của C, thì A và C là possible friends. Bạn sắp giúp anh ấy trong nhiệm vụ này. Cho bạn bảng
 * các mối quan hệ, bạn hãy viết một chương trình để tìm được người có nhiều possible friends nhất, nếu có nhiều người cùng có số lượng
 * possible friends bằng nhau và lớn nhất thì hãy chọn người đến trước (người có ID thấp hơn).
 *
 * Input:
 * Dòng đầu tiên là T (1≤T≤1000), số lượng test case. Mỗi testcase bao gồm một ma trận vuông M∗M (M là số người) với các ký tự
 * ′Y′ hoặc ′N′ tương trưng cho mối quan hệ bạn bè của mỗi người.
 *
 * Output:
 * Với mỗi test case, bạn cần phải xuất ra một dòng chứa ID (ID được tính từ 0) của người có nhiều possible friends nhất và số lượng
 * possible friends mà người này có, hai số cách nhau bởi dấu cách.
 * 
 * M (1≤M≤50) Ma trận vuông có M dòng, mỗi dòng có M ký tự. Dòng đầu tiên của ma trận tương ứng với người 0, dòng tiếp theo là
 * người 1, ...
 * 
 * Trên mỗi dòng, ký tự ngoài cùng bên trái tương ứng với người 0, ký tự tiếp theo tương ứng với người 1,... nếu ký tự j của dòng i là Y, có
 * nghĩa là người i là bạn của j.
 * 
 * Đối với mỗi người i, ký tự i của dòng i sẽ là ​′N​′. Với mỗi i, j ký tự j của dòng i sẽ giống với ký tự i của dòng j.
 *
 * Example 1:
 * Input:
 * 3
 * NYN
 * YNY
 * NYN
 * NYYY
 * YNNY
 * YNNN
 * YYNN
 * NNYNNNN
 * NNYNNNN
 * YYNYNNN
 * NNYNYNN
 * NNNYNYY
 * NNNNYNN
 * NNNNYNN
 *
 * Output:
 * 0 1
 * 2 2
 * 3 4
 **/

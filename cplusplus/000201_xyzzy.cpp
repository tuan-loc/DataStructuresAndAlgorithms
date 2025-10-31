// Title: XYZZY
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Gần đây, người ta đã phát hiện ra cách chạy phần mềm mã nguồn mở trên thiết bị chơi game Y-Crate. Một số nhà thiết kế đột phá đã phát
 * triển các trò chơi theo phong cách Advent để triển khai trên Y-Crate. Công việc của bạn là kiểm tra một số thiết kế này để xem thiết kế nào
 * có thể giành chiến thắng.
 * 
 * Mỗi trò chơi bao gồm 100 phòng. Hai trong những phòng này là phòng bắt đầu và phòng kết thúc. Mỗi phòng có giá trị năng lượng từ
 * −100 đến +100. Các ô cửa một chiều thông nhau giữa các cặp phòng.
 * 
 * Người chơi bắt đầu tại phòng bắt đầu với 100 điểm năng lượng. Cô ấy có thể đi qua bất kỳ ô cửa nào nối phòng cô ấy đang ở với phòng
 * khác. Giá trị năng lượng của phòng này được thêm vào năng lượng của người chơi. Quá trình này tiếp tục cho đến khi cô ấy thắng bằng
 * cách vào phòng kết thúc hoặc chết vì hết năng lượng (hoặc bỏ cuộc trong sự thất vọng). Trong cuộc phiêu lưu của mình, người chơi có thể
 * vào cùng một phòng nhiều lần, mỗi lần nhận được năng lượng của phòng đó.
 *
 * Input:
 * Dữ liệu đầu vào bao gồm một số bộ test. Mỗi bộ test bắt đầu bằng n - số lượng phòng. Các phòng được đánh số từ 1 (phòng bắt đầu) đến
 * n (phòng kết thúc). Đầu vào cho n phòng theo sau, mỗi phòng bao gồm một hoặc nhiều dòng chứa:
 * 
 * Giá trị năng lượng cho phòng i.
 * 
 * Số lượng cửa ra khỏi phòng i.
 * 
 * Danh sách các phòng có thể đến được bằng các ô cửa rời khỏi phòng i.
 * 
 * Các phòng bắt đầu và kết thúc sẽ luôn có mức năng lượng 0. Một dòng chứa −1 theo sau bộ test cuối cùng.
 *
 * Output:
 * Với mỗi bộ test in ra trên một dòng, in "winnable" nếu người chơi có thể giành chiến thắng, nếu không thì in "hopeless".
 *
 * Example 1:
 * Input:
 * 5
 * 0 1 2
 * -60 1 3
 * -60 1 4
 * 20 1 5
 * 0 0
 * 5
 * 0 1 2
 * 20 1 3
 * -60 1 4
 * -60 1 5
 * 0 0
 * 5
 * 0 1 2
 * 21 1 3
 * -60 1 4
 * -60 1 5
 * 0 0
 * 5
 * 0 1 2
 * 20 2 1 3
 * -60 1 4
 * -60 1 5
 * 0 0
 * -1
 *
 * Output:
 * hopeless
 * hopeless
 * winnable
 * winnable
 **/

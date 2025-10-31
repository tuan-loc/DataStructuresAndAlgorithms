// Title: Freckles
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Trong một tập của chương trình Dick Van Dyke, cậu bé Richie đã kết nối các đốm tàn nhang trên lưng bố để tạo thành hình ảnh của
 * Chuông Tự do. Than ôi, một trong những vết tàn nhang hóa ra là một vết sẹo, vì vậy khế ước của Ripley của anh ấy đã thất bại.
 * 
 * Hãy coi lưng của Dick là một mặt phẳng với những đốm tàn nhang ở nhiều vị trí (x, y) khác nhau. Công việc của bạn là cho Richie biết cách
 * kết nối các dấu chấm sao cho giảm thiểu lượng mực sử dụng. Richie kết nối các dấu chấm bằng cách vẽ các đường thẳng giữa các cặp, có
 * thể nhấc bút lên giữa các đường. Khi Richie thực hiện xong, phải có một chuỗi các đường kết nối từ bất kỳ tàn nhang này đến bất kỳ tàn
 * nhang nào khác.
 *
 * Input:
 * Đầu vào bắt đầu bằng một số nguyên dương duy nhất trên một dòng cho biết số trường hợp sau đây, mỗi trường hợp như được mô tả bên
 * dưới. Dòng này được theo sau bởi một dòng trống và cũng có một dòng trống giữa hai đầu vào liên tiếp.
 * 
 * Dòng đầu tiên chứa 0 < n ≤ 100, số tàn nhang trên lưng của Dick. Đối với mỗi tàn nhang, mỗi dòng chứa hai số thực cho biết tọa độ (x,y)
 * của tàn nhang đó.
 *
 * Output:
 * Đối với mỗi trường hợp, kết quả đầu ra phải tuân theo mô tả bên dưới. Kết quả đầu ra của hai trường hợp liên tiếp sẽ được phân tách bằng
 * một dòng trống.
 * 
 * Chương trình của bạn in một số thực đến hai chữ số thập phân: tổng chiều dài tối thiểu của các đường mực có thể kết nối tất cả các vết tàn
 * nhang.
 *
 * Example 1:
 * Input:
 * 1
 * 
 * 3
 * 1.0 1.0
 * 2.0 2.0
 * 2.0 4.0
 *
 * Output:
 * 3.41
 * 
 * Explanation:
 * Ví dụ gồm một bộ test.
 * (/images/000258_freckles_01.png)
 * 
 * Trong bộ test đó có 3 nốt tàng nhang → đồ thị có 3 đỉnh như hình trên. Khi đó chiều dài vết mực cần thiết để có thể nối các đỉnh lại với
 * nhau sao cho từ một đỉnh có thể đi đến bất kì đỉnh nào là 2+1.41=3.41
 **/

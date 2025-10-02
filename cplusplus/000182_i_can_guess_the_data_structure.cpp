// Title: I Can Guess the Data Structure!
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Hãy xem xét một cấu trúc dữ liệu dạng như một cái túi, hỗ trợ hai hoạt động:
 * (/images/000182_i_can_guess_the_data_structure_01.png)
 * 
 * Đưa ra một chuỗi hoạt động với các giá trị trả về, bạn sẽ đoán cấu trúc dữ liệu đó. Nó là một ngăn xếp (Last-In, First-Out), một hàng đợi
 * (First-In, First-Out), một hàng đợi ưu tiên (Luôn lấy ra các phần tử lớn hơn trước) hoặc một cái gì đó khác mà bạn khó có thể tưởng tượng
 * được!
 *
 * Input:
 * Có nhiều trường hợp thử nghiệm. Mỗi trường hợp thử nghiệm gồm một dòng chứa một số nguyên duy nhất n (1≤n≤1000). Tiếp theo
 * gồm n dòng là lệnh loại 1 hoặc loại 2 theo sau là một số nguyên x.
 * 
 * Điều đó có nghĩa là sau khi thực hiện lệnh loại 2, chúng ta nhận được một phần tử giá trị x không có lỗi. Giá trị của x luôn là một số
 * nguyên dương không lớn hơn 100.
 * 
 * Đầu vào được kết thúc bởi end-of-file (EOF).
 *
 * Output:
 * Đối với mỗi trường hợp thử nghiệm, xuất một trong các giá trị sau:
 * (/images/000182_i_can_guess_the_data_structure_02.png)
 *
 * Example 1:
 * Input:
 * 6
 * 1 1
 * 1 2
 * 1 3
 * 2 1
 * 2 2
 * 2 3
 * 6
 * 1 1
 * 1 2
 * 1 3
 * 2 3
 * 2 2
 * 2 1
 * 2
 * 1 1
 * 2 2
 * 4
 * 1 2
 * 1 1
 * 2 1
 * 2 2
 * 7
 * 1 2
 * 1 5
 * 1 1
 * 1 3
 * 2 5
 * 1 4
 * 2 4
 *
 * Output:
 * queue
 * not sure
 * impossible
 * stack
 * priority queue
 **/

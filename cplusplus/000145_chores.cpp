// Title: Chores
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Petya và Vasya là hai anh em. Hôm nay là một ngày đặc biệt đối với họ khi cha mẹ để họ ở nhà một mình và giao cho họ n việc nhà. Mỗi
 * công việc được đặc trưng bởi một tham số duy nhất - độ phức tạp của nó. Độ phức tạp của công việc thứ i tương đương với h​i.
 * 
 * Vì Petya lớn hơn, anh ta muốn nhận những công việc có độ phức tạp lớn hơn một số giá trị x(h​i>x) và giao cho Vasya những công việc
 * có độ phức tạp nhỏ hơn hoặc bằng x(h​i≤x). Hai anh em đã quyết định rằng Petya sẽ làm chính xác a công việc và Vasya sẽ làm chính
 * xác b công việc (a+b=n).
 * 
 * Có bao nhiêu cách có thể chọn một số nguyên x để Petya nhận chính xác a việc nhà và Vasya nhận đúng b việc nhà?
 *
 * Input:
 * Dòng đầu tiên chứa ba số nguyên n,a và b(2≤n≤2000;a,b≥1;a+b=n) - tổng số công việc nhà, số công việc của Petya và
 * số công việc của Vasya.
 * 
 * Dòng tiếp theo chứa một dãy các số nguyên h​1, h​2, ..., h​n (1≤h​i≤10^​9), h​i là độ phức tạp của công việc thứ i. Các số trong dãy đã
 * cho không nhất thiết phải khác nhau.
 * 
 * Tất cả các số trên các dòng được phân tách bằng dấu cách.
 *
 * Output:
 * Cần in ra số cách để chọn một giá trị nguyên của x. Nếu không có cách nào như vậy, hãy in 0.
 *
 * Example 1:
 * Input:
 * 5 2 3
 * 6 2 3 100 1
 *
 * Output:
 * 3
 * 
 * Example 2:
 * Input:
 * 7 3 4
 * 1 1 9 1 1 1 1
 *
 * Output:
 * 0
 * 
 * Explanation:
 * Trong ví dụ đầu tiên, các giá trị có thể có của x là 3,4 hoặc 5.
 * 
 * Trong ví dụ thứ hai, không thể tìm thấy x như vậy, Petya có 3 công việc và Vasya có 4.
 **/

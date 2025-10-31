// Title: Road Construction
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Có một vài thành phố trong cả nước và một số trong chúng được kết nối với nhau bằng con đường hai chiều. Thật không may, một số con
 * đường bị hư hỏng và không thể sử dụng ngay bây giờ. Mục tiêu của bạn là xây dựng lại đủ những con đường bị hư hỏng để có một con
 * đường giữa mọi cặp thành phố.
 * 
 * Bạn được cung cấp mô tả về các con đường. Đường bị hư hỏng được định dạng là "city1 city2 cost" và đường không bị hư hỏng được
 * định dạng là "city1 city2 0". Trong ký hiệu này, city1 và city2 là tên phân biệt chữ hoa chữ thường của hai thành phố được kết nối trực
 * tiếp bởi con đường đó. Nếu con đường bị hư hỏng, chi phí đại diện cho cái giá của việc xây dựng lại con đường đó. Mọi thành phố trên cả
 * nước sẽ có ít nhất một con đường. Và có thể có nhiều con đường giữa cùng một cặp thành phố.
 * 
 * Nhiệm vụ của bạn là tìm ra chi phí tối thiểu của những con đường phải được xây dựng lại để đạt được mục tiêu của bạn. Nếu không thể
 * làm như vậy, hãy in "Impossible".
 *
 * Input:
 * Đầu vào bắt đầu bằng một số nguyên T (≤50), biểu thị số lượng trường hợp.
 * 
 * Mỗi trường hợp bắt đầu bằng một dòng trống và một số nguyên m (1≤m≤50) biểu thị số đường. Sau đó, sẽ có m dòng, mỗi dòng
 * chứa mô tả của một con đường. Không có tên nào chứa nhiều hơn 50 ký tự. Chi phí đường sẽ nằm trong khoảng [0,1000].
 *
 * Output:
 * Đối với mỗi trường hợp, bạn phải in số thứ tự trường hợp và kết quả mong muốn.
 *
 * Example 1:
 * Input:
 * 2
 * 
 * 12
 * Dhaka Sylhet 0
 * Ctg Dhaka 0
 * Sylhet Chandpur 9
 * Ctg Barisal 9
 * Ctg Rajshahi 9
 * Dhaka Sylhet 9
 * Ctg Rajshahi 3
 * Sylhet Chandpur 5
 * Khulna Rangpur 7
 * Chandpur Rangpur 7
 * Dhaka Rajshahi 6
 * Dhaka Rajshahi 7
 * 
 * 2
 * Rajshahi Khulna 4
 * Kushtia Bhola 1
 *
 * Output:
 * Case 1: 31
 * Case 2: Impossible
 **/

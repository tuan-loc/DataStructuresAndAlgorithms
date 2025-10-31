// Title: Learning Languages
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Công ty "BerCorp" có n nhân viên. Những nhân viên này có thể sử dụng m ngôn ngữ để trao đổi thư từ. Các ngôn ngữ được đánh số từ 1
 * đến m. Đối với mỗi nhân viên, chúng tôi có danh sách các ngôn ngữ mà người đó biết. Danh sách này có thể trống, một nhân viên có thể
 * không biết ngôn ngữ nào. Nhưng các nhân viên sẵn sàng học bất kỳ ngôn ngữ chính thức nào, miễn là công ty trả tiền cho họ. Một khóa
 * học ngôn ngữ cho một nhân viên có giá 1 berdollar.
 * 
 * Tìm số tiền tối thiểu mà công ty cần chi để bất kỳ nhân viên nào cũng có thể giao tiếp với bất kỳ nhân viên nào khác (thư từ của họ có thể là
 * gián tiếp, tức là các nhân viên khác có thể giúp dịch).
 *
 * Input:
 * Dòng đầu tiên chứa hai số nguyên n và m (2≤n,m≤100) - số lượng nhân viên và số lượng ngôn ngữ.
 * 
 * Sau đó n dòng tiếp theo - danh sách ngôn ngữ của từng nhân viên. Ở đầu dòng thứ i là số nguyên k​i (0≤k​i≤m) - số ngôn ngữ mà
 * nhân viên thứ i biết. Tiếp theo, dòng thứ i chứa các số nguyên k​i - a​ij (1≤a​ij≤m) - số thứ tự của ngôn ngữ mà nhân viên thứ i biết.
 * Đảm bảo rằng tất cả các số nhận dạng trong một danh sách là khác biệt. Lưu ý rằng một nhân viên có thể không biết ngôn ngữ nào.
 * 
 * Các số trong các dòng được phân tách bằng dấu cách.
 *
 * Output:
 * In một số nguyên duy nhất - số tiền tối thiểu phải trả để cuối cùng mọi nhân viên đều có thể viết thư cho mọi người khác (các nhân viên
 * khác có thể giúp dịch).
 *
 * Example 1:
 * Input:
 * 5 5
 * 1 2
 * 2 2 3
 * 2 3 4
 * 2 4 5
 * 1 5
 *
 * Output:
 * 0
 * 
 * Example 2:
 * Input:
 * 8 7
 * 0
 * 3 1 2 3
 * 1 1
 * 2 5 4
 * 2 6 7
 * 1 3
 * 2 7 4
 * 1 1
 *
 * Output:
 * 2
 * 
 * Example 3:
 * Input:
 * 2 2
 * 1 2
 * 0
 *
 * Output:
 * 1
 * 
 * Explanation:
 * Trong ví dụ mẫu thứ hai, nhân viên 1 có thể học ngôn ngữ 2 và nhân viên 8 có thể học ngôn ngữ 4.
 * 
 * Trong ví dụ mẫu thứ ba, nhân viên 2 phải học ngôn ngữ 2.
 **/

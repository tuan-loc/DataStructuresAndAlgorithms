// Title: Slick
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Một tai nạn hàng hải đã khiến dầu tràn ra vùng biển Felipistonia, đây là một thảm họa thiên nhiên lớn. Chính phủ Felipistonia muốn dọn
 * dẹp đống hỗn độn này trước khi có thêm thiệt hại xảy ra. Để làm được điều này, trước tiên họ phải biết mức độ nghiêm trọng của vụ tai
 * nạn và lượng dầu đã tràn ra biển. Công cụ duy nhất mà chính phủ Felipistonia dùng để có được thông tin về mức độ nghiêm trọng của
 * thảm họa này, là việc sử dụng các hình ảnh vệ tinh. Với những hình ảnh này họ có thể ước tính được mình phải bỏ ra bao nhiêu tiền để
 * dọn dẹp đống hỗn độn này. Đối với điều này, số lượng vết loang trong các vùng biển và kích thước của mỗi vết loang phải được biết. Vết
 * loang là một mảng dầu nổi trên mặt nước. Đáng tiếc là cư dân của Felipistonia không được sáng sủa cho lắm, nên họ đã thuê bạn giúp họ
 * xử lý hình ảnh.
 * 
 * Một ví dụ về hình ảnh thu được bởi các vệ tinh được thể hiện trong Hình1 (a). Hình ảnh này có thể được chuyển đổi thành 0 và 1 như
 * trong Hình 1 (b). Với ma trận nhị phân này, công việc của bạn là đếm số lượng vết loang trong đại dương và kích thước tương ứng của
 * chúng. Hai pixel trong hình ảnh được xem là kề nhau nếu có chung cạnh.
 * (/images/000165_slick_01.png)
 *
 * Input:
 * Đầu vào chứa số trường hợp thử nghiệm, mỗi trường hợp tương ứng với một hình ảnh vệ tinh khác nhau. Dòng đầu tiên của mỗi trường
 * hợp chứa hai số nguyên cho biết số hàng (N) và số cột (M) trong hình ảnh (1≤N,M≤250). Sau đó N dòng tiếp theo với M số
 * nguyên, chứa thông tin của hình ảnh.
 * 
 * Kết thúc của đầu vào được chỉ ra bởi một trường hợp với N=M=0. Trường hợp này không cần xử lý.
 *
 * Output:
 * Đối với mỗi hình ảnh, xuất ra số lượng vết loang trên biển. Ngoài ra, xuất ra kích thước của mỗi vết theo thứ tự tăng dần và số lượng vết
 * của kích thước đó.
 *
 * Example 1:
 * Input:
 * 10 10
 * 1 1 1 1 1 1 1 1 1 1
 * 1 1 1 1 0 0 0 0 0 0
 * 1 1 1 0 0 0 0 1 1 1
 * 1 1 0 0 1 0 0 1 1 1
 * 1 0 1 0 0 1 1 0 0 0
 * 0 0 0 0 0 0 0 0 0 0
 * 0 0 0 0 0 0 0 0 0 0
 * 1 1 1 1 1 1 1 1 1 1
 * 0 0 0 0 0 0 0 0 0 0
 * 1 1 1 1 1 1 1 1 1 1
 * 0 0
 *
 * Output:
 * 7
 * 1 2
 * 2 1
 * 6 1
 * 10 2
 * 20 1
 **/

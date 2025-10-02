// Title: The Shortest Path
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Bạn được cung cấp một danh sách các thành phố. Mỗi kết nối trực tiếp giữa hai thành phố có chi phí vận chuyển (một số nguyên lớn hơn
 * 0).
 * 
 * Mục tiêu là tìm đường đi có chi phí ít nhất giữa các cặp thành phố. Giả sử rằng chi phí của mỗi đường đi (là tổng chi phí của tất cả các kết
 * nối trực tiếp thuộc đường đi này) tối đa là 200000.
 * 
 * Tên thành phố là một chuỗi chứa các ký tự a,...,z và dài nhất là 10 ký tự.
 *
 * Input:
 * s [số lượng test ≤10]
 * n [số thành phố ≤10000]
 * NAME [tên thành phố]
 * p [số hàng xóm của thành phố NAME]
 * nr cost [nr - chỉ số của thành phố được kết nối với NAME (chỉ số của thành phố đầu tiên là 1)] [cost - chi phí vận chuyển]
 * r [số lượng đường đi cần tìm ≤100]
 * NAME​1 NAME2 [NAME​1 - nơi bắt đầu, NAME​2 - đích đến]
 * [dòng trống phân cách các test]
 *
 * Output:
 * cost [chi phí vận chuyển ít nhất từ thành phố NAME​1 đến thành phố NAME​2 (mỗi đáp án trên một dòng)]
 *
 * Example 1:
 * Input:
 * 1
 * 4
 * gdansk
 * 2
 * 2 1
 * 3 3
 * bydgoszcz
 * 3
 * 1 1
 * 3 1
 * 4 4
 * torun
 * 3
 * 1 3
 * 2 1
 * 4 1
 * warszawa
 * 2
 * 2 4
 * 3 1
 * 2
 * gdansk warszawa
 * bydgoszcz warszawa
 *
 * Output:
 * 3
 * 2
 **/

// Title: Special Subtree
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Cho một đồ thị bao gồm một số cạnh nối các nút N trong đó.
 * 
 * Yêu cầu tìm một đồ thị con của đồ thị đã cho có các tính chất sau:
 * 
 * Đồ thị con chứa tất cả các nút có trong đồ thị ban đầu. - Đồ thị con có trọng số tổng thể ít nhất (tổng tất cả các cạnh) trong số tất cả
 * các đồ thị con đó.
 * 
 * Cũng cần phải có đúng một đường đi duy nhất giữa hai nút bất kỳ của đồ thị con.
 * 
 * Một nút cụ thể S được cố định làm điểm bắt đầu của việc tìm kiếm đồ thị con. Tìm tổng trọng số của một đồ thị con như vậy (tổng của tất
 * cả các cạnh trong đồ thị con).
 *
 * Input:
 * Dòng đầu tiên có hai số nguyên N, biểu thị số nút trong đồ thị và M, biểu thị số cạnh trong đồ thị.
 * 
 * Các dòng M tiếp theo mỗi dòng bao gồm ba số nguyên được phân cách bằng dấu cách x y r, trong đó x và y biểu thị hai nút mà giữa đó
 * tồn tại cạnh vô hướng, r biểu thị độ dài của cạnh giữa các nút tương ứng.
 * 
 * Dòng cuối cùng có một số nguyên S, biểu thị nút bắt đầu.
 * 
 * 2≤N≤3000
 * 1≤M≤(​N∗(N−1))/2
 * 1≤x,y,S≤N
 * 0≤r≤10^​5
 * 
 * Nếu có các cạnh giữa cùng một cặp nút có trọng số khác nhau, chúng được coi là nhiều cạnh.
 *
 * Output:
 * In ra một số nguyên duy nhất biểu thị tổng trọng lượng của cây thu được (tổng trọng lượng của các cạnh).
 *
 * Example 1:
 * Input:
 * 5 6
 * 1 2 3
 * 1 3 4
 * 4 2 6
 * 5 2 2
 * 2 3 5
 * 3 5 7
 * 1
 *
 * Output:
 * 15
 * 
 * Explanation:
 * Biểu đồ được đưa ra trong ví dụ được hiển thị như sau:
 * (/images/000246_special_subtree_01.png)
 * 
 * Bây giờ các lựa chọn có sẵn là:A→C (WT. 4), B→C (WT. 5), B→E (WT. 2) và B→D (WT. 6), trong đó B→E được chọn bởi thuật toán.
 * 
 * Theo cùng một phương pháp của thuật toán, các cạnh được chọn tiếp theo, tuần tự là: $A \rightarrow C\rightarrow và B→D.
 * 
 * Do đó, tổng thể các cạnh được chọn bởi Prim là: A→B : B→E: A→C: B→D.
 * 
 * và Tổng trọng lượng của MST là: 15.
 **/

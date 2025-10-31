// Title: Minimum Spanning Tree
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Cho bạn một đồ thị, tìm cây khung nhỏ nhất của đồ thị đó.
 *
 * Input:
 * Dòng đầu tiên gồm hai số nguyên N,M (1≤N≤10,000,1≤M≤100,000) lần lượt là số đỉnh và số cạnh của đồ thị. M dòng sau,
 * mỗi dòng chứa ba số lần lượt là i, j, k (k≤1,000,000) với i, j đại diện cho hai đỉnh có kết nối với nhau và k là chi phí kết nối của hai
 * đỉnh đó. ID của các nút trong khoảng từ 1 đến n.
 *
 * Output:
 * In ra một số duy nhất là tổng trọng số cây khung nhỏ nhất tìm được trên đồ thị này. Sẽ chỉ có một cây khung khả thi.
 *
 * Example 1:
 * Input:
 * 4 5
 * 1 2 10
 * 2 3 15
 * 1 3 5
 * 4 2 2
 * 4 3 40
 *
 * Output:
 * 17
 * 
 * Explanation:
 * Đồ thị trong ví dụ được biểu thị như hình bên.
 * (/images/000239_minimum_spanning_tree_01.png)
 * 
 * Để tìm cây khung nhỏ nhất bạn cần đi qua các cạnh sau:
 * 
 * 1→2:10
 * 1→3:5
 * 2→4:2
 * 
 * Tổng chi phí là 17.
 **/

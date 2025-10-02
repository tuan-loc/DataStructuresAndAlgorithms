// Title: Check undirected graph
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Cho đồ thị được biểu diễn bằng ma trận kề (adjacent matrix). Kiểm tra đồ thị đó có phải là đồ thị vô hướng hay không.
 *
 * Input:
 * Dòng đầu tiên là số lượng đỉnh N (1≤N≤10^​3).
 * 
 * N dòng tiếp theo, mỗi dòng gồm N số của ma trận C biểu diễn thành ma trận kề của đồ thị.
 * 
 * Nếu C​i,j=0: không có cạnh giữa hai đỉnh i, j.
 * Nếu C​i,j≠0: có cạnh giữa hai đỉnh i, j.
 * 
 * Các đỉnh được đánh số từ 0 đến N – 1. Đảm bảo C​i,i=0 với mọi đỉnh i.
 *
 * Output:
 * In ra YES nếu đồ thị là đồ thị vô hướng. Ngược lại in ra NO.
 *
 * Example 1:
 * Input:
 * 3
 * 0 1 1
 * 1 0 1
 * 1 1 0
 *
 * Output:
 * YES
 **/

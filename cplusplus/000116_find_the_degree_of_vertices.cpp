// Title: Find the degree of vertices
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Cho đồ thị vô hướng được biểu diễn bằng ma trận kề (adjacent matrix), và số nguyên X đại diện cho 1 đỉnh trong đồ thị. Tìm bậc của
 * đỉnh X.
 *
 * Input:
 * Dòng đầu tiên là số lượng đỉnh N và đỉnh cần tính bậc X (1≤N≤10^​3 ,0≤X<N).
 * 
 * N dòng tiếp theo, mỗi dòng gồm N số của ma trận C biểu diễn thành ma trận kề của đồ thị.
 * 
 * Nếu C​i,j=0: không có cạnh giữa hai đỉnh i, j.
 * Nếu C​i,j=1: có cạnh giữa hai đỉnh i, j.
 * 
 * Các đỉnh được đánh số từ 0 đến N – 1. Đảm bảo C​i,i=0 với mọi đỉnh i.
 *
 * Output:
 * In ra bậc của đỉnh X.
 *
 * Example 1:
 * Input:
 * 3 2
 * 0 1 1
 * 1 0 1
 * 1 1 0
 *
 * Output:
 * 2
 **/

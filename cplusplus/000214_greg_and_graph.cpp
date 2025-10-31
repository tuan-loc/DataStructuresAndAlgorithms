// Title: Greg and Graph
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Greg có một đồ thị có hướng có trọng số, bao gồm n đỉnh. Trong đồ thị này, bất kỳ cặp đỉnh phân biệt nào đều có cạnh giữa chúng theo cả
 * hai hướng. Greg thích chơi với biểu đồ và giờ anh ấy đã phát minh ra một trò chơi mới:
 * 
 * Trò chơi bao gồm n bước. Ở bước thứ i, Greg xóa đỉnh x​i khỏi đồ thị. Khi Greg loại bỏ một đỉnh, anh ta cũng loại bỏ tất cả các cạnh đi vào
 * và ra khỏi đỉnh này. Trước khi thực hiện từng bước, Greg muốn biết tổng độ dài của các đường đi ngắn nhất giữa tất cả các cặp đỉnh còn
 * lại. Đường ngắn nhất có thể đi qua bất kỳ đỉnh nào còn lại. Nói cách khác, nếu chúng ta giả sử rằng d(i,v,u) là đường đi ngắn nhất giữa
 * các đỉnh v và u trong đồ thị hình thành trước khi xóa đỉnh x​i, thì Greg muốn biết giá trị trong tổng số sau:
 * 
 * Σ​u,v,u≠vd(i,v,u)
 * 
 * Hãy giúp Greg, trước mỗi bước hãy in giá trị tổng.
 *
 * Input:
 * Dòng đầu tiên chứa số nguyên n (1≤n≤500) - số đỉnh trong đồ thị.
 * 
 * n dòng tiếp theo chứa n số nguyên - ma trận kề của đồ thị: số thứ j trong dòng thứ i a​ij (1≤a​ij≤10^​5, a​ii=0) đại diện cho trọng số
 * của cạnh đi từ đỉnh i đến đỉnh j.
 * 
 * Dòng tiếp theo chứa n các số nguyên riêng biệt: x​1, x​2,...,x​n (1≤x​i≤n) - các đỉnh mà Greg xóa.
 *
 * Output:
 * In n số nguyên - số thứ i là tổng theo yêu cầu trước bước thứ i.
 *
 * Example 1:
 * Input:
 * 1
 * 0
 * 1
 *
 * Output:
 * 0 
 * 
 * Example 2:
 * Input:
 * 2
 * 0 5
 * 4 0
 * 1 2
 *
 * Output:
 * 9 0 
 * 
 * Example 3:
 * Input:
 * 4
 * 0 3 1 1
 * 6 0 400 1
 * 2 4 0 1
 * 1 1 1 0
 * 4 1 2 3
 *
 * Output:
 * 17 23 404 0 
 **/

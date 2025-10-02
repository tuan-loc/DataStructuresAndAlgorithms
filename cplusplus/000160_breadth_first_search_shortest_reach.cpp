// Title: Breadth First Search: Shortest Reach
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Cho một đồ thị vô hướng bao gồm n đỉnh trong đó mỗi đỉnh được gán nhãn từ 1 đến n và cạnh giữa hai đỉnh bất kỳ luôn có độ dài là 6.
 * Chúng ta xác định đỉnh s là vị trí bắt đầu cho một BFS.
 * 
 * Cho q truy vấn dưới dạng đồ thị và đỉnh s là vị trí bắt đầu, với mỗi truy vấn hãy tính khoảng cách ngắn nhất từ đỉnh bắt đầu đến tất cả các
 * đỉnh khác trong đồ thị. Sau đó in ra một dòng gồm n−1 các số nguyên được phân tách bằng dấu cách, liệt kê khoảng cách ngắn nhất của
 * đỉnh s tới mỗi n−1 đỉnh khác (sắp xếp theo thứ tự gán nhãn); nếu đỉnh s không đi đến được đỉnh đó, hãy in −1 là khoảng cách đến đỉnh
 * đó.
 *
 * Input:
 * Dòng đầu tiên chứa một số nguyên q, biểu thị số lượng truy vấn. Các dòng tiếp theo mô tả từng truy vấn theo định dạng sau:
 * 
 * Dòng đầu tiên chứa hai số nguyên được phân tách bằng dấu cách mô tả các giá trị tương ứng của n (số nút) và m (số cạnh) trong
 * biểu đồ.
 * Mỗi dòng i trong số m dòng tiếp theo chứa hai số nguyên được phân cách bằng dấu cách u và v, mô tả một cạnh nối đỉnh u với đỉnh
 * v.
 * Dòng cuối cùng chứa một số nguyên duy nhất s, biểu thị chỉ số của đỉnh bắt đầu.
 * 
 * Constraints
 * 1≤q≤10
 * 2≤n≤1000
 * 1≤m≤​(​n(n−1))/2
 * 1≤u,v,s≤n
 *
 * Output:
 * Đối với mỗi truy vấn q, hãy in một dòng gồm n−1 số nguyên được phân tách bằng dấu cách biểu thị khoảng cách ngắn nhất đến mỗi
 * đỉnh trong số n−1 đỉnh còn lại từ vị trí bắt đầu đỉnh s. Các khoảng cách này phải được liệt kê theo thứ tự gán nhãn (tức là 1,2,...,n),
 * nhưng không bao gồm đỉnh s. Nếu một số đỉnh không thể đi được từ đỉnh s, hãy in −1 làm khoảng cách đến đỉnh đó.
 *
 * Example 1:
 * Input:
 * 2
 * 4 2
 * 1 2
 * 1 3
 * 1
 * 3 1
 * 2 3
 * 2
 *
 * Output:
 * 6 6 -1
 * -1 6
 * 
 * Explanation:
 * Chúng ta thực hiện hai truy vấn sau:
 * 1. Biểu đồ đã cho có thể được biểu diễn như sau:
 * (/images/000160_breadth_first_search_shortest_reach_01.png)
 * 
 * Đỉnh bắt đầu là đỉnh s=1. Khoảng cách ngắn nhất từ s đến các đỉnh khác là qua một cạnh tới đỉnh 2, qua một cạnh tới đỉnh 3 và không
 * thể đi tới đỉnh 4. Sau đó, chúng ta in khoảng cách từ đỉnh 1 đến các đỉnh 2, 3 và 4 (tương ứng) trên một dòng các số nguyên được phân
 * tách bằng dấu cách: 6, 6, -1.
 * 
 * 2. Biểu đồ đã cho có thể được biểu diễn như sau:
 * (/images/000160_breadth_first_search_shortest_reach_02.png)
 * 
 * Đỉnh bắt đầu là đỉnh s=2. Chỉ có một cạnh duy nhất, vì vậy đỉnh 1 không thể đến được từ đỉnh 2 và đỉnh 3 có một cạnh nối nó với đỉnh 2.
 * Sau đó, chúng ta in khoảng cách từ đỉnh 2 đến các đỉnh 1 và 3 (tương ứng) trên một dòng các số nguyên được phân tách bằng dấu cách: -1
 * 6.
 **/

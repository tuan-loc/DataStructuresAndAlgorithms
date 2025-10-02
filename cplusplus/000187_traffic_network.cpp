// Title: Traffic Network
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Mạng lưới giao thông thành phố bao gồm n nút được đánh số từ 1 đến n và m đường một chiều nối các cặp nút. Để giảm độ dài của
 * đường đi ngắn nhất giữa hai nút quan trọng s và t phân biệt, một danh sách k đường hai chiều được đề xuất làm các ứng cử viên để xây
 * dựng. Nhiệm vụ của bạn là viết một chương trình để chọn một con đường hai chiều từ danh sách đề xuất để giảm thiểu độ dài đường đi
 * ngắn nhất từ s đến t.
 *
 * Input:
 * Tệp đầu vào bao gồm một số tập dữ liệu. Dòng đầu tiên của tệp đầu vào chứa số bộ dữ liệu là số nguyên dương và không lớn hơn 20. Các
 * dòng sau đây mô tả các tập dữ liệu.
 * 
 * Đối với mỗi tập dữ liệu:
 * Dòng đầu tiên chứa năm số nguyên dương n (n≤10000), m (m≤100000), k (k<300), s (1≤s≤n), t (1≤t≤n) được
 * phân tách bằng dấu cách.
 * Dòng thứ i trong số m dòng sau đây chứa ba số nguyên d​i, c​i, l​i cách nhau bởi dấu cách, thể hiện độ dài l​i (0<l​i≤1000) của
 * đường một chiều thứ i nối từ nút d​i đến c​i.
 * Dòng thứ j của k dòng tiếp theo chứa ba số nguyên dương u​j, vj và q​j (q​j≤1000) được phân tách bằng dấu cách, đại diện cho đề
 * xuất đường hai chiều thứ j có chiều dài q​j nối nút u​j với v​j.
 *
 * Output:
 * Đối với mỗi tập dữ liệu, in ra trên một dòng độ dài nhỏ nhất có thể của đường đi ngắn nhất sau khi xây dựng một con đường hai chiều đã
 * chọn từ danh sách đề xuất. Trong trường hợp không tồn tại đường đi từ s đến t, in ra -1.
 *
 * Example 1:
 * Input:
 * 1
 * 4 5 3 1 4
 * 1 2 13
 * 2 3 19
 * 3 1 25
 * 3 4 17
 * 4 1 18
 * 1 3 23
 * 2 3 5
 * 2 4 25
 *
 * Output:
 * 35
 **/

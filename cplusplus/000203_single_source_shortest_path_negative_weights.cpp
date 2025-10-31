// Title: Single source shortest path, negative weights
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Cho đồ thị có hướng gồm n đỉnh và m cạnh. Các đỉnh được đánh số từ 0 đến n−1. Tìm trọng số nhỏ nhất của khoảng cách từ một đỉnh
 * nguồn s đến các đỉnh còn lại.
 *
 * Input:
 * Dữ liệu đầu vào bao gồm một số bộ test. Mỗi bộ test bắt đầu bằng một dòng có bốn số nguyên không âm, 1≤n≤1000,
 * 0≤m≤5000, 1≤q≤100 và 0≤s<n, được phân tách bằng một dấu cách. Trong đó, n là số đỉnh trong đồ thị, m là số cạnh, q là số
 * truy vấn và s là chỉ số của đỉnh bắt đầu. Các đỉnh được đánh số từ 0 đến n−1.
 * 
 * Tiếp theo là m dòng, mỗi dòng gồm ba số nguyên (cách nhau bằng dấu cách) u, v và w chỉ ra rằng có một cạnh từ u đến v trong đồ thị có
 * trọng số −2000≤w≤2000.
 * 
 * Sau đó thực hiện theo các dòng truy vấn, mỗi dòng bao gồm một số nguyên không âm, yêu cầu tính khoảng cách tối thiểu từ đỉnh s đến
 * đỉnh được cho trên dòng truy vấn này.
 * 
 * Đầu vào sẽ được kết thúc bởi một dòng chứa bốn số 0, dòng này sẽ không được xử lý.
 *
 * Output:
 * Đối với mỗi truy vấn, in một dòng duy nhất là khoảng cách tối thiểu từ đỉnh s đến đỉnh được chỉ định trong truy vấn, in “Imposible” nếu
 * không có đường đi từ s đến đỉnh đó hoặc “-Infinity” nếu có các đường dẫn ngắn tùy ý từ s đến đỉnh đó. In một dòng trống sau mỗi bộ
 * test.
 *
 * Example 1:
 * Input:
 * 5 4 3 0
 * 0 1 999
 * 1 2 -2
 * 2 1 1
 * 0 3 2
 * 1
 * 3
 * 4
 * 2 1 1 0
 * 0 1 -100
 * 1
 * 0 0 0 0
 *
 * Output:
 * -Infinity
 * 2
 * Impossible
 * 
 * -100
 **/

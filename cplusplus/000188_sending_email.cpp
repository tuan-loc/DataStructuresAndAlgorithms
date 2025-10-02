// Title: Sending Email
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * "Một cơ quan giám sát internet mới đang gây xôn xao ở
 * Springfield. Ông X, nếu đó là tên thật, đã
 * đưa ra một tin tức giật gân."
 * Kent Brockman
 * 
 * Có n máy chủ SMTP được kết nối bằng cáp mạng. Mỗi cáp trong số m cáp kết nối hai máy tính và có độ trễ nhất định khi gửi một email,
 * được đo bằng mili giây. Khoảng thời gian ngắn nhất để gửi một thông điệp từ máy chủ S đến máy chủ T bằng một đoạn cáp là bao nhiêu?
 * Giả sử rằng không có sự chậm trễ phát sinh ở bất kỳ máy chủ nào.
 *
 * Input:
 * Dòng đầu tiên của đầu vào cho biết số trường hợp, N. Tiếp theo là N trường hợp thử nghiệm. Mỗi trường hợp bắt đầu bằng một dòng
 * chứa n(2≤n≤20000), m(0≤m≤50000), S(0≤S<n) và T(0≤T<n), S≠T. m dòng tiếp theo, mỗi dòng sẽ chứa 3 số
 * nguyên: 2 máy chủ khác nhau (trong phạm vi [0,n−1]) được kết nối bằng cáp hai chiều và độ trễ w của đoạn cáp này (0≤w≤10000).
 *
 * Output:
 * Đối với mỗi trường hợp thử nghiệm, xuất ra dòng 'Case #x:' theo sau là số mili giây cần thiết để gửi một tin nhắn từ S đến T. In ra
 * 'unreachable' nếu không có đường đi từ S đến T.
 *
 * Example 1:
 * Input:
 * 3 
 * 2 1 0 1 
 * 0 1 100 
 * 3 3 2 0 
 * 0 1 100 
 * 0 2 200 
 * 1 2 50 
 * 2 0 0 1
 *
 * Output:
 * Case #1: 100
 * Case #2: 150
 * Case #3: unreachable
 **/

// Title: Bishu and his Girlfriend
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Có N đất nước {1,2,3,4,...,N} và N−1 con đường (nói cách khác là mô tả một cây)
 * 
 * Bishu sống ở đất nước số 1 nên có thể coi đây là gốc của cây.
 * 
 * Bây giờ có Q cô gái sống ở nhiều đất nước khác nhau (khác 1).
 * 
 * Tất cả họ đều muốn cầu hôn Bishu. Nhưng Bishu có một số điều kiện.
 * 
 * Anh ấy sẽ chấp nhận lời cầu hôn của cô gái sống ở đất nước có khoảng cách nhỏ nhất so với đất nước của anh ấy. Khoảng cách giữa hai đất
 * nước là số con đường giữa chúng.
 * 
 * Nếu có hai cô gái trở lên ở các đất nước có cùng khoảng cách nhỏ nhất thì anh ấy sẽ chấp nhận lời cầu hôn của cô gái sống ở đất nước có
 * id nhỏ nhất
 * 
 * Không có hai cô gái ở cùng một đất nước.
 *
 * Input:
 * Dòng đầu tiên là N - số đất nước
 * 
 * N−1 dòng tiếp theo dạng u v biểu thị rằng có một con đường nằm giữa u và v.
 * 
 * Dòng tiếp theo là số Q
 * 
 * Q dòng tiếp theo bao gồm các số x là nơi các cô gái sống.
 *
 * Output:
 * In ra id của đất nước của cô gái sẽ được chấp nhận lời cầu hôn.
 * 
 * 2≤N≤1000
 * 
 * 1≤u,v≤N
 * 
 * 1≤Q≤N−1
 *
 * Example 1:
 * Input:
 * 6
 * 1 2
 * 1 3
 * 1 4
 * 2 5
 * 2 6
 * 4
 * 5
 * 6
 * 3
 * 4
 *
 * Output:
 * 3
 **/

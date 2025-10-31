// Title: Energy Exchange
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Ai cũng biết rằng hành tinh này đang phải hứng chịu cuộc khủng hoảng năng lượng. Cô bé Petya không thích điều này và muốn giải cứu
 * thế giới. Vì mục đích này, cô ấy cần mọi bình ắc quy đều chứa cùng một mức năng lượng. Ban đầu, mọi bình ắc quy đều có một lượng năng
 * lượng nhất định: ắc uy thứ i chứa a​i đơn vị năng lượng. Năng lượng có thể được chuyển từ ắc quy này sang ắc quy khác. Mỗi lần x đơn vị
 * năng lượng được chuyển đi (x không nhất thiết phải là số nguyên) k phần trăm sẽ bị mất đi. Có nghĩa là, nếu x đơn vị được chuyển từ ắc
 * quy này sang ắc quy khác, ắc quy đầu tiên sẽ giảm đi x đơn vị năng lượng và ắc quy kia sẽ tăng lên x−(​xk/100) đơn vị.
 * 
 * Nhiệm vụ của bạn là giúp Petya tìm ra lượng năng lượng tối đa bằng nhau có thể được chứa trong mỗi ắc quy sau khi chuyển.
 *
 * Input:
 * Dòng đâu tiên của dữ liệu đầu vào chứa 2 số nguyên n và k (1≤n≤10000,0≤k≤99) - số ắc quy và số phần trăm năng lượng bị mất
 * đi trong quá trình chuyển năng lượng.
 * 
 * Dòng tiếp theo chứa n số nguyên a​1, a​2,..., a​n - lượng năng lượng của ắc quy thứ nhất, thứ 2, ... thứ n tương ứng (0≤a​i≤1000,
 * 1≤i≤n).
 *
 * Output:
 * Xuất ra giá trị năng lượng lớn nhất có thể có trong mỗi ắc quy sau khi chuyển năng lượng.
 * 
 * Sai số tuyệt đối hoặc tương đối trong bài này không được quá 10^​−6.
 *
 * Example 1:
 * Input:
 * 3 50
 * 4 2 1
 *
 * Output:
 * 2.000000000
 * 
 * Example 2:
 * Input:
 * 2 90
 * 1 11
 *
 * Output:
 * 1.909090909
 * 
 * Explanation:
 * Nhìn vào có thể thấy ắc quy thứ nhất chuyển 2 đơn vị năng lượng qua ắc quy thứ 3:
 * 
 * Ắc quy thứ nhất còn 2 đơn vị.
 * Lượng chuyển đi giảm đi 50%, nên ắc quy thứ 3 nhận được 1, vậy ắc quy thứ 3 chứa 2 đơn vị.
 * 
 * Tất cả các ắc quy đều có 2 đơn vị.
 **/

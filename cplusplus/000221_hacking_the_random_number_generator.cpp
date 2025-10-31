// Title: Hacking the random number generator
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Gần đây bạn đã viết được một mã tạo số ngẫu nhiên cho một ứng dụng web và hiện tại, bạn thấy rằng, một số người đã bẻ khóa được nó.
 * Bây giờ nó đưa ra các con số ở mức chênh lệch của một số giá trị nhất định k chủ yếu hơn. Bạn là một hacker quyết định viết một đoạn mã
 * đọc vào n số , một giá trị k và tìm tổng số các cặp số có sự khác biệt tuyệt đối bằng k, để hỗ trợ bạn thử nghiệm trình tạo số ngẫu nhiên.
 * 
 * NOTE: Tất cả các giá trị nằm trong khoảng số nguyên có dấu, n, k≥1
 *
 * Input:
 * Hàng thứ nhất chứa n và k.
 * Hàng thứ hai chứa n tập hợp. Tất cả các số n đảm bảo phân biệt nhau.
 * (n≤10^​5)
 *
 * Output:
 * Một số nguyên với ý nghĩa là không có các cặp số có khác biệt k.
 *
 * Example 1:
 * Input:
 * 5 2
 * 1 5 3 4 2
 *
 * Output:
 * 3
 **/

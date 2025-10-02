// Title: Roy and Trending Topics
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Roy đang cố gắng phát triển một tiện ích hiển thị các Chủ đề thịnh hành (tương tự như Facebook) trên trang chủ của Học viện HackerEarth.
 * Anh ấy đã thu thập danh sách N Chủ đề (ID của chúng) và điểm phổ biến của chúng (gọi là z-score) từ cơ sở dữ liệu. Bây giờ z-score thay
 * đổi hàng ngày theo các quy tắc sau:
 * 
 * 1. Khi một chủ đề được đề cập trong 'Bài đăng', z-score của chủ đề đó sẽ tăng thêm 50.
 * 2. Một lượt 'Thích' trên một Bài đăng như vậy, sẽ làm tăng z-score thêm 5.
 * 3. Một lượt 'Bình luận' sẽ làm tăng z-score thêm 10.
 * 4. Một lượt 'Chia sẻ' sẽ làm giá trị z-score tăng thêm 20.
 * 
 * Giờ đây, Chủ đề thịnh hành được quyết định tùy theo sự thay đổi về z-score. Với sự thay đổi z-score cao nhất đứng đầu và danh sách theo
 * sau. Roy cần sự trợ giúp của bạn để viết một thuật toán nhằm tìm ra 5 Chủ đề thịnh hành nhất.
 * 
 * Nếu sự thay đổi giá trị về z-score cho hai chủ đề bất kỳ là giống nhau, thì hãy xếp hạng chúng theo ID của chúng (một chủ đề có ID cao
 * hơn sẽ được ưu tiên). Bài toán đảm bảo rằng ID sẽ là duy nhất.
 *
 * Input:
 * Dòng đầu tiên chứa số nguyên N
 * 
 * N dòng tiếp theo, mỗi dòng chứa 6 số được phân tách bằng dấu cách mô tả cho Chủ đề ID, z-score hiện tại - Z, Số bài đăng - P, Số lượt
 * thích - L, Số bình luận - C, Số lượt chia sẻ - S
 * 
 * Giới hạn:
 * 1≤N≤10^​6
 * 1≤ID≤10^​9
 * 0≤Z,P,L,C,S≤10^​9
 *
 * Output:
 * Xuất ra 5 chủ đề trên mỗi dòng mới. Mỗi dòng phải chứa hai số nguyên được phân tách bằng dấu cách, Chủ đề ID và z-score của chủ đề.
 *
 * Example 1:
 * Input:
 * 8
 * 1003 100 4 0 0 0
 * 1002 200 6 0 0 0
 * 1001 300 8 0 0 0
 * 1004 100 3 0 0 0
 * 1005 200 3 0 0 0
 * 1006 300 5 0 0 0
 * 1007 100 3 0 0 0
 * 999 100 4 0 0 0
 *
 * Output:
 * 1003 200
 * 1002 300
 * 1001 400
 * 999 200
 * 1007 150
 * 
 * Explanation:
 * (/images/000179_roy_and_trending_topics_01.png)
 * Bây giờ hãy sắp xếp chúng dựa theo sự thay đổi trong z-score. Thay đổi z-score cho các ID 999,1001,1002,1003 là 100, vì vậy hãy sắp
 * xếp chúng theo ID (một chủ đề có ID cao hơn sẽ được ưu tiên). Tương tự tiến hành thêm.
 * 
 * Sau khi bạn tìm được danh sách 5 ID chủ đề hàng đầu theo các tiêu chí trên, hãy tìm z-score mới từ bảng cho mỗi ID.
 **/

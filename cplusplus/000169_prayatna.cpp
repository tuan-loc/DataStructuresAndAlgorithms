// Title: Prayatna
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Chà, hội nghị chuyên đề kỹ thuật hàng năm của Khoa Công nghệ Máy tính sắp diễn ra. Tất cả những gì chúng tôi cần, để tạo nên thành
 * công rực rỡ đó là tính công khai giữa các nhóm sinh viên đồng cấp ( tất nhiên là cả nhà tài trợ nữa :P ). chúng tôi quyết định chia sẻ công
 * việc giữa các nhóm sinh viên. Theo kế hoạch, chúng tôi quyết định gặp trực tiếp mọi người và tác động để họ tham dự Prayatna. Nhưng để
 * gặp được họ, chúng tôi phải đến nhiều nhóm sinh viên khác nhau. Để làm như vậy, chúng tôi phải cắt giảm các lớp học của mình. Nhưng
 * vốn hiếu học, học sinh không chịu cắt thêm lớp. Thay vì gặp trực tiếp từng người, chúng tôi quyết định gặp một số ít người để người mà
 * chúng tôi chuyển tin tức sẽ lan truyền nó cho tất cả bạn bè của họ. Và những người bạn đó sẽ chuyển nó cho những người bạn khác và cứ
 * thế. Nhiệm vụ của bạn là tìm số người được ban tổ chức gặp để loan tin.
 * 
 * Lưu ý: I/O lớn
 *
 * Input:
 * Dòng đầu tiên của đầu vào là t - số trường hợp kiểm tra. Tiếp theo là N, số lượng sinh viên trong mỗi trường hợp (đánh số từ 0 đến
 * N−1), tiếp theo e là số lượng mô tả về bạn bè. Sau đó là e mô tả dạng a b biểu thị a là bạn bè với b. Nếu a là bạn với b thì b là bạn với a.
 *
 * Output:
 * Dữ liệu ra chứa t dòng, số lượng người ban tổ chức phải gặp trực tiếp trong từng trường hợp thử nghiệm.
 * 
 * t≤10
 * 
 * 2≤N≤100000
 * 
 * 0≤e≤N/2
 *
 * Example 1:
 * Input:
 * 2
 * 4
 * 2
 * 0 1
 * 1 2
 * 3
 * 0
 *
 * Output:
 * 2
 * 3
 **/

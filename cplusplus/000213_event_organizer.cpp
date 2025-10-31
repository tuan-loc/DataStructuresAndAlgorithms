// Title: Event Organizer
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Chef Po đã đưa ra một quảng cáo trực tuyến cung cấp dịch vụ tổ chức sự kiện. Chef đã nhận được phản hồi rất lớn cho quảng cáo của
 * mình. Anh nhận được nhiều đơn đặt hàng tổ chức các sự kiện từ các tổ chức khác nhau. Đổi lại, Chef sẽ nhận được một khoản thù lao tùy
 * thuộc vào loại sự kiện và tổng số người trong sự kiện. Chef nhận được tổng N đơn đặt hàng cho việc tổ chức các sự kiện vào cuối tuần này.
 * Vì cuối tuần bao gồm hai ngày, tất cả các sự kiện sẽ diễn ra trong khoảng thời gian 48 giờ. Đối với đơn hàng thứ i, sự kiện tương ứng sẽ bắt
 * đầu lúc S​i giờ, kết thúc vào E​i giờ và Chef sẽ nhận được khoản tiền C​i cho sự kiện này.
 * 
 * Ví dụ: Nếu S​i=17 và E​i=22 thì thời lượng của sự kiện là 22−17=5 giờ và khoảng thời gian của nó là 17:00−22:00 của Thứ Bảy.
 * Giờ của Chủ Nhật được đánh số bằng các con số từ 24 đến 48. Vì vậy, ví dụ: 10:00 của Chủ nhật sẽ được biểu thị là 10+24=34. Bởi vì
 * Chef là người mới, các tổ chức đã đưa ra điều kiện rằng Chef sẽ nhận được tiền thù lao cho sự kiện nếu và chỉ khi anh ấy có mặt trong toàn
 * bộ thời gian của sự kiện. Nó có nghĩa là anh ta không thể chọn các sự kiện chồng chéo. Tuy nhiên, lưu ý rằng nếu một sự kiện bắt đầu ngay
 * trong thời điểm sự kiện khác kết thúc, Chef có thể tiến hành cả hai một cách bình thường.
 * 
 * Nói chung, Chef sẽ chọn tổ chức các sự kiện trên cơ sở ai đến phục vụ trước. Nhưng vào cuối tuần, Chef sẽ chọn đơn đặt hàng theo cách
 * sao cho tổng số tiền cho tất cả các sự kiện mà anh ấy sẽ tiến hành sẽ là tối đa. Bây giờ nhiệm vụ của bạn là giúp Chef và tìm tổng số tiền
 * thù lao tối đa này.
 *
 * Input:
 * Dòng đầu tiên của dữ liệu đầu vào chứa một số nguyên T (1≤T≤10), số lượng trường hợp. Các test case theo sau. Dòng đầu tiên của
 * mỗi trường hợp chứa một số nguyên N, số lượng đơn đặt hàng đã nhận để tiến hành các sự kiện. Mỗi dòng trong số N (1≤N≤2000)
 * dòng tiếp theo chứa ba số nguyên được phân tách bằng dấu cách S​i, E​i, C​i (0≤S​i<E​i≤48,0≤C​i≤10^​6), các tham số của sự kiện
 * thứ i được mô tả trong câu lệnh bài toán.
 *
 * Output:
 * Đầu ra cho mỗi trường chứa một số nguyên duy nhất trong một dòng riêng biệt, mức thù lao tối đa mà Chef Po có thể nhận được.
 *
 * Example 1:
 * Input:
 * 2
 * 4
 * 1 2 100
 * 2 3 200
 * 3 4 1600
 * 1 3 2100
 * 3
 * 1 10 2000
 * 2 5 100
 * 6 9 400
 *
 * Output:
 * 3700
 * 2000
 **/

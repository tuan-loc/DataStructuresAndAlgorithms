// Title: Promotion
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Một chuỗi siêu thị lớn Bytelandian đã yêu cầu bạn viết một chương trình để mô phỏng chi phí của một chương trình khuyến mãi đang
 * được chuẩn bị.
 * 
 * Chương trình khuyến mại phải tuân theo các quy tắc sau:
 * 
 * Khách hàng muốn tham gia chương trình khuyến mãi thì ghi vào biên lai, số tiền đã thanh toán, thông tin chi tiết cá nhân và bỏ vào
 * thùng phiếu đặc biệt.
 * 
 * Cuối mỗi ngày của chương trình khuyến mại, hai tờ hóa đơn được lấy ra từ thùng phiếu:
 * Đầu tiên, biên lai có số tiền lớn nhất được chọn,
 * Sau đó, biên lai có số tiền nhỏ nhất được chọn;
 * Khách hàng đã thanh toán số tiền lớn nhất sẽ nhận được giải thưởng bằng số tiền chênh lệch giữa số tiền trên hóa đơn của mình và
 * số tiền trên hóa đơn có số tiền nhỏ nhất.
 * 
 * Để tránh nhận nhiều giải thưởng cho một lần mua, cả hai hóa đơn đã chọn theo quy định trên không được trả lại thùng phiếu,
 * nhưng tất cả các hóa đơn còn lại vẫn được tham gia khuyến mãi.
 * 
 * Doanh thu của siêu thị rất lớn, do đó có thể đặt ra một giả thiết là cuối mỗi ngày, trước khi lấy ra tổng số tiền lớn nhất và tổng số tiền nhỏ
 * nhất thì trong thùng phiếu có ít nhất 2 biên lai.
 * 
 * Nhiệm vụ của bạn là tính toán (dựa vào thông tin về số tiền trên biên lai bỏ vào thùng phiếu mỗi ngày khuyến mãi) tổng chi phí giải thưởng
 * trong toàn bộ chương trình khuyến mãi sẽ là bao nhiêu.
 * 
 * Viết chương trình, trong đó: đọc từ đầu vào danh sách số tiền trên các biên lai được bỏ vào thùng phiếu vào mỗi ngày của chương trình
 * khuyến mại, tính tổng chi phí giải thưởng trong các ngày liên tiếp của chương trình khuyến mại, sau đó ghi kết quả vào đầu ra .
 *
 * Input:
 * Dòng đầu tiên của đầu vào chứa một số nguyên dương n (1≤n≤5000), là số ngày khuyến mãi. Mỗi dòng trong số n dòng tiếp theo
 * bao gồm một chuỗi các số nguyên không âm được phân tách bằng dấu cách đơn. Các số ở dòng thứ (i+1) của tệp thể hiện số tiền trên
 * các biên lai được bỏ vào thùng phiếu vào ngày thứ i của chương trình khuyến mại. Số nguyên đầu tiên trên dòng là k,0≤k≤10^​5, số
 * biên lai trong ngày và k số tiếp theo là các số nguyên dương đại diện cho số tiền trên biên lai; không có số nào trong các số này lớn hơn
 * 10^6.
 * 
 * Tổng số hóa đơn bỏ vào thùng phiếu trong toàn bộ chương trình khuyến mãi không vượt quá 10^​6.
 *
 * Output:
 * Kết quả đầu ra chứa chính xác một số nguyên, bằng tổng chi phí giải thưởng được trả trong toàn bộ chương trình khuyến mãi.
 *
 * Example 1:
 * Input:
 * 5
 * 3 1 2 3
 * 2 1 1
 * 4 10 5 5 1
 * 0
 * 1 2
 *
 * Output:
 * 19
 **/

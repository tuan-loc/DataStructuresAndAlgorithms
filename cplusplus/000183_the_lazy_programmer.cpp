// Title: The Lazy Programmer
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Một studio thiết kế web mới, có tên là SMART (Simply Masters of ART), đang có hai người. Người đầu tiên là nhà thiết kế web đồng thời là
 * giám đốc điều hành. Người thứ hai là một lập trình viên. Giám đốc là một người lanh lẹ đến nỗi studio đã có N hợp đồng về phát triển
 * trang web. Mỗi hợp đồng có thời hạn d​i.
 * 
 * Được biết, lập trình viên này hơi lười biếng. Thường thì anh ta không hoàn thành việc nhanh nhất có thể. Do đó, bình thường lập trình viên
 * cần thời gian là b​i để thực hiện hợp đồng thứ i. May mắn thay, anh chàng này rất tham tiền. Nếu giám đốc trả thêm cho anh ta x​i đô la, thì
 * anh ta chỉ cần thời gian là (b​i−a​i∗x​i) để thực hiện công việc của mình. Nhưng khoản trả thêm này không ảnh hưởng đến các hợp đồng
 * khác. Điều này có nghĩa là mỗi hợp đồng cần được thanh toán riêng để thực hiện nhanh hơn. Lập trình viên này tham lam đến mức anh ta
 * có thể thực hiện công việc của mình gần như ngay lập tức nếu khoản thanh toán thêm là (b​i/a​i) đô la cho hợp đồng thứ i.
 * 
 * Giám đốc có một vấn đề khó giải quyết. Anh ta cần sắp xếp công việc cho lập trình viên và có thể chỉ định các khoản thanh toán bổ sung
 * cho một số hợp đồng để tất cả các hợp đồng được thực hiện đúng thời hạn. Và chắc chắn là anh ấy muốn giảm thiểu số tiền phải trả thêm.
 * Hãy giúp giám đốc!
 *
 * Input:
 * Dòng đầu tiên của đầu vào là một số nguyên dương t(1≤t≤45), số trường hợp thử nghiệm. Sau đó, mô tả định dạng t testcase theo
 * sau.
 * 
 * Dòng mô tả đầu tiên chứa số lượng hợp đồng N (1≤N≤100000, số nguyên). Tiếp theo gồm N dòng mô tả một hợp đồng và các số
 * nguyên a​i, b​i, di (1≤a​i, b​i≤10000; 1≤d​i≤1000000000) phân tách bởi dấu cách.
 * 
 * Ít nhất 90% các trường hợp thử nghiệm có 1≤N≤10000.
 *
 * Output:
 * Đối với mỗi trường hợp thử nghiệm trong đầu vào, chương trình của bạn cần xuất ra một dòng với một số thực duy nhất S. Ở đây S là số
 * tiền tối thiểu mà giám đốc cần trả thêm để lập trình viên có thể thực hiện tất cả các hợp đồng đúng hạn. Số S có hai chữ số sau dấu thập
 * phân.
 *
 * Example 1:
 * Input:
 * 1
 * 2
 * 20 50 100
 * 10 100 50
 *
 * Output:
 * 5.00
 **/

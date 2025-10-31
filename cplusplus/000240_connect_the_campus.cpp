// Title: Connect the Campus
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Nhiều tòa nhà mới đang được xây dựng trong khuôn viên của Đại học Waterloo. Trường đại học đã thuê thợ nề, thợ điện, thợ ống nước và
 * một lập trình viên máy tính. Một lập trình viên máy tính? Đúng vậy, bạn đã được thuê để đảm bảo rằng mỗi tòa nhà được kết nối với mọi
 * tòa nhà khác (trực tiếp hoặc gián tiếp) thông qua mạng lưới cáp thông tin trong khuôn viên trường.
 * 
 * Chúng ta sẽ coi mỗi tòa nhà là một điểm được chỉ định bởi tọa độ x và tọa độ y. Mỗi cáp thông tin kết nối chính xác hai tòa nhà, theo một
 * đường thẳng giữa các tòa nhà. Thông tin truyền theo cáp theo cả hai hướng. Cáp có thể tự do bắt chéo nhau, nhưng chúng chỉ được kết
 * nối với nhau tại các điểm cuối của chúng (tại các tòa nhà).
 * 
 * Bạn được cung cấp một bản đồ khuôn viên cho thấy vị trí của tất cả các tòa nhà và thông tin các dây cáp hiện có. Bạn không được thay đổi
 * các loại cáp hiện có. Xác định các vị trí lắp đặt cáp mới để tất cả các tòa nhà được kết nối với nhau. Tất nhiên, trường đại học muốn bạn
 * giảm thiểu số tiền của cáp mới mà bạn sử dụng.
 *
 * Input:
 * Input chứa nhiều testcase. Mô tả của từng testcase được đưa ra như sau:
 * 
 * Dòng đầu tiên của mỗi trường hợp thử nghiệm chứa số lượng tòa nhà N (1≤N≤750). Những tòa nhà được gắn nhãn từ 1 đến N.
 * Tiếp theo N dòng cung cấp cho tọa độ x và y của các tòa nhà. Các tọa độ này là số nguyên có giá trị tuyệt đối nhiều nhất là 10000. Không
 * có hai tòa nhà nào chiếm cùng một điểm.
 * 
 * Sau đó là một dòng chứa số lượng cáp hiện có M (0≤M≤1000), tiếp theo là M dòng mô tả các loại cáp hiện có. Mỗi cáp được biểu thị
 * bằng hai số nguyên - hai tòa nhà được kết nối trực tiếp bằng cáp. Có nhiều nhất một cáp kết nối trực tiếp giữa mỗi cặp các tòa nhà.
 *
 * Output:
 * Đối với mỗi input, xuất 1 dòng duy nhất là tổng chiều dài của các loại cáp mới mà bạn định sử dụng. Làm tròn kết quả đến hai chữ số thập
 * phân.
 *
 * Example 1:
 * Input:
 * 4
 * 103 104
 * 104 100
 * 104 103
 * 100 100
 * 1
 * 4 2
 *
 * Output:
 * 4.41
 * 
 * Explanation:
 * Ví dụ gồm hai bộ test. Trong bộ đầu tiên có 4 tòa nhà lần lượt nằm tại các tọa độ:
 * 
 * Tòa nhà 1 (103,104)
 * Tòa nhà 2 (104,100)
 * Tòa nhà 3 (104,103)
 * Tòa nhà 4 (100,100)
 * 
 * Chỉ có hai tòa nhà có kết nối là tòa nhà 4 và tòa nhà 2, các tòa nhà còn lại chưa có kết nối. Vì thế bạn phải tìm đường kết nối sao cho kết
 * quả là nhỏ nhất.
 **/

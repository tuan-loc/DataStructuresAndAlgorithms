// Title: Asterix and Obelix
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Sau khi chiến thắng trong một trận chiến kinh hoàng chống lại người La Mã ở một vùng đất xa xôi, Asterix và người bạn thân yêu nhất của
 * mình Obelix đang trở về nhà. Tuy nhiên, bây giờ, Obelix không ở cùng với Asterix. Anh ấy đã rời Asterix để giao menhir cho một trong
 * những khách hàng quốc tế của mình (như bạn có thể biết, gần đây anh ấy đã mở rộng giao dịch của mình sang các thị trường quốc tế).
 * Nhưng anh ta đã hứa sẽ tham gia cùng Asterix trên đường về nhà và Asterix đã hứa sẽ tổ chức một bữa tiệc cho Obelix (bạn biết anh ta
 * béo như thế nào mà!) tại bất kì thành phố nào mà họ gặp nhau. Obelix có thể gặp Asterix ở bất kỳ thành phố nào trên đường về nhà, bao
 * gồm cả thành phố xuất phát và thành phố đích.
 * 
 * Bây giờ, Asterix đang tra cứu bản đồ và cố gắng tìm ra con đường tốn ít chi phí nhất để về nhà. Bản đồ hiển thị các thành phố và chi phí
 * (tính bằng sestertii) để đi từ thành phố này đến thành phố khác nếu có một con đường nối chúng trực tiếp. Đối với mỗi thành phố trong
 * bản đồ, Asterix cũng đã tính toán chi phí (tính bằng sestertii) để tổ chức một bữa tiệc cho Obelix tại thành phố đó. Sẽ chỉ có một bữa tiệc
 * duy nhất và để đảm bảo an toàn, Asterix đã quyết định dành đủ sestertii để tổ chức một bữa tiệc tại thành phố đắt đỏ nhất trên tuyến
 * đường. Vì Asterix không có máy tính, anh ấy tìm kiếm sự giúp đỡ của bạn để tìm ra con đường tốn ít chi phí về nhà nhất.
 *
 * Input:
 * Đầu vào chứa nhiều testcase.
 * 
 * Dòng đầu tiên của mỗi testcase là 3 số nguyên C (C≤80), R (S≤1000) và Q (Q≤6320) trong đó C cho biết số lượng thành phố
 * (các thành phố được đánh số bằng cách sử dụng các số nguyên khác nhau từ 1 đến C), R đại diện cho số đường và Q là số truy vấn.
 * 
 * Dòng tiếp theo chứa các số nguyên C trong đó số nguyên thứ i f​i là chi phí (tính bằng sestertii) để tổ chức một bữa tiệc tại thành phố i.
 * Mỗi dòng R tiếp theo chứa ba số nguyên: c​1, c​2(≠c1) và d cho biết chi phí đi từ thành phố c​1 đến c​2 (hoặc từ c​2 đến c​1) là d sestertii. Mỗi
 * dòng Q tiếp theo chứa hai số nguyên c​1 và c​2 (c​1≠c​2) yêu cầu tính chi phí (tính bằng sestertii) của tuyến đường ít chí phí nhất từ thành
 * phố c​1 đến thành phố c​2.
 * 
 * Đầu vào sẽ kết thúc với ba số không có dạng C, S và Q.
 *
 * Output:
 * Đối với mỗi testcase trong input, xuất ra số thứ tự của testcase (bắt đầu từ 1) như được hiển thị trong ví dụ mẫu. Sau đó, đối với mỗi truy
 * vấn, hãy in một dòng cho biết chi phí tối thiểu (tính bằng sestertii) để đi từ thành phố đầu tiên đến thành phố thứ hai trong truy vấn. Nếu
 * không tồn tại đường đi, chỉ cần in −1.
 * 
 * In một dòng trống giữa hai testcase.
 *
 * Example 1:
 * Input:
 * 7 8 5
 * 2 3 5 15 4 4 6
 * 1 2 20
 * 1 4 20
 * 1 5 50
 * 2 3 10
 * 3 4 10
 * 3 5 10
 * 4 5 15
 * 6 7 10
 * 1 5
 * 1 6
 * 5 1
 * 3 1
 * 6 7
 * 4 4 2
 * 2 1 8 3
 * 1 2 7
 * 1 3 5
 * 2 4 8
 * 3 4 6
 * 1 4
 * 2 3
 * 0 0 0
 *
 * Output:
 * Case #1
 * 45
 * -1
 * 45
 * 35
 * 16
 * 
 * Case #2
 * 18
 * 20
 **/

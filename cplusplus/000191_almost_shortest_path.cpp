// Title: Almost Shortest Path
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Tìm đường đi ngắn nhất đi từ điểm xuất phát đến điểm đích với một tập hợp các điểm và độ dài tuyến đường kết nối giữa chúng là một vấn
 * đề đã quá nổi tiếng và nó thậm chí là một phần trong cuộc sống hàng ngày của chúng ta, vì ngày nay các chương trình về đường đi ngắn
 * nhất được phổ biến rộng rãi.
 * 
 * Hầu hết mọi người thường rất thích những ứng dụng này vì chúng giúp cuộc sống của họ dễ dàng hơn. Chà, có lẽ không dễ dàng hơn đâu.
 * 
 * Giờ đây, hầu hết mọi người đều có thể truy cập vào thiết bị định vị GPS có thể tính toán các đường đi ngắn nhất, hầu hết các tuyến đường
 * tạo thành đường ngắn đi nhất đang ngày càng chậm lại do giao thông đông đúc. Vì hầu hết mọi người đều cố gắng đi theo cùng một con
 * đường, nên việc đi theo những hướng dẫn này không còn giá trị nữa.
 * 
 * Với suy nghĩ này, sếp của bạn yêu cầu bạn phát triển một ứng dụng mới mà chỉ anh ấy mới có quyền truy cập, do đó tiết kiệm thời gian cho
 * anh ấy bất cứ khi nào anh ấy có cuộc họp hoặc bất kỳ sự kiện khẩn cấp nào. Anh ấy muốn chương trình của bạn phải trả lời không phải là
 * đường đi ngắn nhất mà là đường đi gần như ngắn nhất. Anh ấy xác định đường đi gần như ngắn nhất là đường đi ngắn nhất đi từ điểm
 * xuất phát đến điểm đích sao cho không có đường đi nào giữa hai điểm liên tiếp thuộc đường đi ngắn nhất từ điểm xuất phát đến điểm
 * đích.
 * 
 * Ví dụ: giả sử hình bên phải đại diện cho bản đồ đã cho, với các vòng tròn đại diện cho các điểm vị trí và các đường biểu thị các tuyến
 * đường một chiều, trực tiếp với độ dài được chỉ định. Điểm xuất phát được đánh dấu là S và điểm đến được đánh dấu là D. Các
 * đường in đậm thuộc đường đi ngắn nhất (trong trường hợp này có hai đường đi ngắn nhất, mỗi đường có tổng độ dài 4). Do đó, con
 * đường gần như ngắn nhất sẽ là con đường được chỉ ra bởi các đường đứt nét (tổng chiều dài là 5), vì không có tuyến đường nào
 * giữa hai điểm liên tiếp thuộc bất kỳ con đường ngắn nhất nào. Lưu ý rằng có thể tồn tại nhiều hơn một câu trả lời, ví dụ: nếu tuyến
 * đường có độ dài 3 có độ dài 1. Có thể không tồn tại câu trả lời khả thi.
 * (/images/000191_almost_shortest_path_01.png)
 *
 * Input:
 * Đầu vào chứa một số trường hợp thử nghiệm. Dòng đầu tiên của mỗi trường hợp chứa hai số nguyên N (2≤N≤500) và M
 * (1≤M≤10^​4), được phân tách bằng một khoảng trắng, cho biết lần lượt là số lượng điểm trên bản đồ và số lượng tuyến đường một
 * chiều hiện có kết nối trực tiếp hai điểm. Mỗi điểm được xác định bởi một số nguyên từ 0 đến N−1. Dòng thứ hai chứa hai số nguyên S
 * và D, cách nhau bởi một khoảng trắng, lần lượt cho biết điểm xuất phát và điểm đến (S≠D;0≤S,D<N). Mỗi M dòng tiếp theo
 * chứa ba số nguyên U, V và P (U≠V;0≤U,V<N;1≤P≤10^​3), được phân tách bằng dấu cách, cho biết sự tồn tại của tuyến
 * đường một chiều từ U đến V với khoảng cách P. Có nhiều nhất một tuyến đường từ một điểm đã cho U đến một điểm đã cho V, nhưng
 * lưu ý rằng sự tồn tại của một tuyến đường từ U đến V không có nghĩa là có một tuyến đường từ V đến U, và nếu con đường như vậy tồn
 * tại, nó có thể có chiều dài khác. Phần cuối của đầu vào được biểu thị bằng một dòng chỉ chứa hai số 0 cách nhau bởi một khoảng trắng.
 *
 * Output:
 * Đối với mỗi trường hợp trong đầu vào, chương trình của bạn phải in một dòng duy nhất, chứa "-1" nếu không có đáp án theo yêu cầu đề
 * bài hoặc một số nguyên đại diện cho độ dài của đường đi gần như ngắn nhất được tìm thấy.
 *
 * Example 1:
 * Input:
 * 7 9
 * 0 6
 * 0 1 1
 * 0 2 1
 * 0 3 2
 * 0 4 3
 * 1 5 2
 * 2 6 4
 * 3 6 2
 * 4 6 4
 * 5 6 1
 * 4 6
 * 0 2
 * 0 1 1
 * 1 2 1
 * 1 3 1
 * 3 2 1
 * 2 0 3
 * 3 0 2
 * 6 8
 * 0 1
 * 0 1 1
 * 0 2 2
 * 0 3 3
 * 2 5 3
 * 3 4 2
 * 4 1 1
 * 5 1 1
 * 3 0 1
 * 0 0
 *
 * Output:
 * 5
 * -1
 * 6
 **/

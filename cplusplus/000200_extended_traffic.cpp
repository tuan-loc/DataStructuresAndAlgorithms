// Title: Extended traffic
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Thành phố Dhaka ngày một đông đúc và ồn ào. Một số con đường luôn trong tình trạng tắc nghẽn. Để thuyết phục mọi người tránh những
 * con đường ngắn nhất - đi qua những giao lộ đông đúc để đến nơi, chính quyền thành phố đã lập một kế hoạch mới. Mỗi giao lộ của thành
 * phố được đánh dấu bằng một số nguyên dương (≤20) biểu thị mức độ bận rộn của giao lộ. Bất cứ khi nào ai đó đi từ một giao lộ (giao lộ
 * nguồn) đến một giao lộ khác (giao lộ đích), chính quyền thành phố sẽ nhận được số tiền (mức độ bận rộn của điểm đích - mức độ bận rộn
 * của điểm nguồn)^​3 (có nghĩa là bằng lập phương của sự chêch lệch) từ khách du lịch. Cơ quan đã chỉ định bạn tìm ra tổng số tiền tối thiểu
 * có thể kiếm được khi một người thông minh nào đó đi từ một điểm giao nhau nhất định (điểm 0) đến một số điểm khác.
 *
 * Input:
 * Dữ liệu đầu vào bắt đầu bằng số nguyên T (≤50), biểu thị số lượng trường hợp.
 * 
 * Mỗi trường hợp chứa một dòng trống và một số nguyên n (1<n≤200) biểu thị số lượng các điểm giao thông.
 * 
 * Dòng tiếp theo chứa n số nguyên biểu thị mức độ bận rộn của các điểm giao thông tương ứng từ 1 đến n.
 * 
 * Dòng tiếp theo chứa số nguyên m - số đường đi trong thành phố.
 * 
 * Trong m dòng tiếp theo, mỗi dòng chứa 2 số tương ứng với đường đi từ điểm nguồn tới điểm đích (tất cả các đường đều là một chiều).
 * 
 * Dòng tiếp theo chứa số nguyên q, số lượng truy vấn.
 * 
 * q dòng tiếp theo, mỗi dòng chứa 1 số là điểm giao thông đích mà bạn cần tìm đường đi ngắn nhất từ điểm giao thông 1 đến điểm đó. Có
 * nhiều nhất một con đường trực tiếp từ một điểm giao thông này đến một điểm giao thông khác.
 *
 * Output:
 * Đối với mỗi trường hợp, in số trường hợp trong một dòng duy nhất "Case [number]:". Sau đó là q dòng cho mỗi truy vấn, mỗi dòng chứa
 * tổng thu nhập tối thiểu khi một dòng đi từ điểm giao thông 1 (điểm 0) đến điểm giao thông nhất định. Tuy nhiên, đối với các truy vấn có
 * tổng thu nhập nhỏ hơn 3 hoặc nếu không thể đến đích từ điểm 0, thì in dấu "?".
 *
 * Example 1:
 * Input:
 * 2
 * 
 * 5
 * 6 7 8 9 10
 * 6
 * 1 2
 * 2 3
 * 3 4
 * 1 5
 * 5 4
 * 4 5
 * 2
 * 4
 * 5
 * 
 * 2
 * 10 10
 * 1
 * 1 2
 * 1
 * 2
 *
 * Output:
 * Case 1:
 * 3
 * 4
 * Case 2:
 * ?
 **/

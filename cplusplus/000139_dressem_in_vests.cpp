// Title: Dress'em in Vests!
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Vương quốc Hai chiều đang trải qua thời kỳ khó khăn ... Sáng nay vương quốc Ba chiều tuyên chiến với Vương quốc Hai chiều. Xung đột (có
 * thể có vũ trang) này sẽ xác định chủ sở hữu cuối cùng của đường thẳng.
 * 
 * Vương quốc Hai chiều có một đội quân chính quy gồm n người. Mỗi người lính tự đăng ký và bày tỏ kích thước mong muốn của áo chống
 * đạn: người lính thứ i muốn có cỡ áo a​i. Những người lính được biết là khiêm nhường, vì vậy ban chỉ huy cho rằng họ sẽ cảm thấy thoải mái
 * trong bất kỳ chiếc áo nào có kích thước từ a​i−x đến a​i+y (các số x,y≥0 được cho trước).
 * 
 * Vương quốc Hai chiều có m chiếc áo, kích thước của áo thứ j là b​j. Hãy giúp động viên quân đội của vương quốc Hai chiều: trang bị áo cho
 * nhiều binh lính nhất có thể. Mỗi áo chỉ được sử dụng một lần. Người lính thứ i có thể mặc chiếc áo thứ j nếu a​i−x≤b​j≤a​i+y.
 *
 * Input:
 * Dòng đầu tiên chứa bốn số nguyên n,m,x và y (1≤n,m≤10^​5, 0≤x,y≤10^​9) - lần lượt là số lượng binh lính, số lượng áo chống
 * đạn và hai con số thể hiện sự khiêm nhường của người lính.
 * 
 * Dòng thứ hai chứa n số nguyên a​1, a​2,...,a​n (1≤a​i≤10^​9) theo thứ tự không giảm, được phân tách bởi dấu cách - kích cỡ mong muốn
 * của áo.
 * 
 * Dòng thứ ba chứa m số nguyên b​1, b​2,..., b​m (1≤b​j≤10^​9) theo thứ tự không giảm, được phân tách bởi dấu cách - kích cỡ của áo có sẵn.
 *
 * Output:
 * Dòng đầu tiên in một số nguyên k - số lượng binh sĩ tối đa được trang bị áo chống đạn.
 * 
 * k dòng tiếp theo, in k cặp số, mỗi cặp một dòng, dưới dạng "u​i v​i" (không có dấu ngoặc kép). Cặp (u​i, v​i) nghĩa là người lính số u​i phải
 * mặc áo số v​i. Binh lính và áo được đánh số bắt đầu từ 1 theo thứ tự được cho trước trong dữ liệu vào. Tất cả số thứ tự của binh lính trong
 * các cặp phải đôi một khác nhau, tất cả các số áo trong các cặp cũng phải đôi một khác nhau. Bạn có thể in các cặp theo bất kỳ thứ tự nào.
 * 
 * Nếu có nhiều câu trả lời tối ưu, bạn được phép in bất kỳ câu trả lời nào trong số đó.
 *
 * Example 1:
 * Input:
 * 5 3 0 0
 * 1 2 3 3 4
 * 1 3 5
 *
 * Output:
 * 2
 * 1 1
 * 3 2
 * 
 * Example 2:
 * Input:
 * 3 3 2 2
 * 1 5 9
 * 3 5 7
 *
 * Output:
 * 3
 * 1 1
 * 2 2
 * 3 3
 * 
 * Explanation:
 * Trong ví dụ đầu tiên, bạn cần các kích cỡ của áo phải khớp một cách hoàn hảo: người lính thứ nhất nhận được chiếc áo đầu tiên (cỡ 1),
 * người lính thứ ba nhận được chiếc áo thứ hai (cỡ 3). Ví dụ này có câu trả lời khác, mặc áo thứ hai cho người lính thứ tư thay vì người thứ ba.
 * 
 * Trong ví dụ thứ hai, kích thước áo có thể khác với kích thước mong muốn tối đa là 2 cỡ, vì vậy tất cả binh lính đều có thể được trang bị áo.
 **/

// Title: MUH and Important Things
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Đã đến lúc gấu Bắc Cực Menshykov và Uslada từ vườn thú St.Petersburg và voi Horace từ vườn thú Kiev bắt đầu kinh doanh. Tổng cộng, có
 * $ n $ nhiệm vụ trong ngày và mỗi con vật phải làm từng nhiệm vụ này. Đối với mỗi nhiệm vụ, chúng đánh giá độ khó của nó. Ngoài ra động
 * vật quyết định thực hiện các nhiệm vụ theo thứ tự độ khó của chúng. Thật không may, một số nhiệm vụ có thể có cùng độ khó, vì vậy thứ
 * tự thực hiện các nhiệm vụ có thể khác nhau.
 * 
 * Menshykov, Uslada và Horace yêu cầu bạn giải quyết sự phiền toái này và đưa ra kế hoạch cho từng con vật đó. Kế hoạch trình tự mô tả
 * thứ tự mà một con vật phải thực hiện n nhiệm vụ. Bên cạnh đó, mỗi con vật đều muốn có kế hoạch độc đáo của riêng mình. Do đó ba kế
 * hoạch phải tạo thành ba trình tự khác nhau. Bạn phải tìm ra các kế hoạch cần thiết, hoặc thông báo tin buồn cho chúng bằng cách nói
 * rằng không thể đưa ra ba kế hoạch riêng biệt cho các nhiệm vụ đã cho.
 *
 * Input:
 * Dòng đầu tiên chứa số nguyên n (1≤n≤2000) - số tác vụ. Dòng thứ hai chứa n số nguyên h​1, h​2,..., h​n (1≤h​i≤2000), trong đó hi
 * là độ khó của nhiệm vụ thứ i. Số h​i càng lớn thì nhiệm vụ thứ i càng khó.
 *
 * Output:
 * Trong dòng đầu tiên, hãy in "YES" (không có dấu ngoặc kép), nếu có thể đưa ra ba kế hoạch khác nhau thực hiện các nhiệm vụ. Nếu không,
 * hãy in "NO" ở dòng đầu tiên (không có dấu ngoặc kép). Nếu tồn tại ba kế hoạch mong muốn, hãy in ra dòng thứ hai n số nguyên riêng biệt
 * đại diện cho số nhiệm vụ theo thứ tự chúng được thực hiện theo kế hoạch đầu tiên. Trong dòng thứ ba và thứ tư, in hai kế hoạch còn lại
 * trong cùng một hình thức.
 * 
 * Nếu có nhiều câu trả lời, bạn có thể in bất kỳ trong số đó.
 *
 * Example 1:
 * Input:
 * 4
 * 1 3 3 1
 *
 * Output:
 * YES
 * 1 4 2 3
 * 4 1 2 3
 * 4 1 3 2
 * 
 * Example 2:
 * Input:
 * 5
 * 2 4 1 4 8
 *
 * Output:
 * NO
 * 
 * Explanation:
 * Trong ví dụ đầu tiên, độ khó của các nhiệm vụ đặt ra giới hạn: Nhiệm vụ 1 và 4 phải được thực hiện trước nhiệm vụ 2 và 3. Điều đó cho
 * tổng số bốn trình tự thực hiện nhiệm vụ có thể có: [1,4,2,3], [4,1,2,3], [1,4,3,2], [4,1,3,2]. Bạn có thể in bất kỳ ba trong số câu trả lời
 * trên.
 * 
 * Trong ví dụ thứ hai chỉ có hai chuỗi nhiệm vụ đáp ứng các điều kiện [3,1,2,4,5] và [3,1,4,2,5]. Do đó, không thể thực hiện ba chuỗi
 * nhiệm vụ riêng biệt.
 **/

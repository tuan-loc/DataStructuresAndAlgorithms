// Title: Monkey and the Oiled Bamboo
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Đã đến lúc nhớ lại khoảnh khắc thảm hại của môn toán năm xưa. Vâng, một bài toán nhỏ với con khỉ trèo trên một cây tre bôi dầu. Nó
 * giống như:
 * 
 * “Một con khỉ đang cố gắng vươn tới đỉnh của một cây tre bôi dầu. Khi anh ta leo lên 3 feet, anh ta trượt xuống 2 feet. Leo lên 3 feet mất 3
 * giây. Trượt xuống 2 feet mất 1 giây. Nếu cái cột cao 12 feet, con khỉ cần bao nhiêu thời gian để lên đến đỉnh? ”
 * 
 * Khi được giao bài toán, tôi đã nghiêm túc thực hiện. Nhưng sau một thời gian, tôi đã nghĩ đến việc giết con khỉ thay vì làm một bài toán
 * kinh khủng! Tôi đã có những kế hoạch khá khác (!) Cho người đàn ông bôi dầu cho cây tre.
 * 
 * Bây giờ, chúng tôi - là những người đặt ra vấn đề, có một cây tre được bôi dầu tương tự. Vì vậy, chúng tôi nghĩ rằng chúng tôi có thể làm tốt
 * hơn con khỉ truyền thống. Vì vậy, tôi đã thử trước. Tôi nhảy và leo lên cao 3,5 feet (tốt hơn cả con khỉ! Hừ!) Nhưng ngay giây sau đó, tôi bị
 * trượt chân và rơi xuống đất. Tôi không thể nhớ bất cứ điều gì sau đó, khi tôi tỉnh dậy, tôi thấy mình trên giường và khuôn mặt lo lắng của
 * những người giải quyết vấn đề xung quanh tôi. Vì vậy, giống như thời đi học, con khỉ đã chiến thắng với cây tre bôi dầu.
 * 
 * Vì vậy, tôi thực hiện một kế hoạch khác (không hiểu sao tôi lại muốn thắng khỉ), tôi lấy một cái thang thay vì cây tre. Ban đầu tôi ở trên mặt
 * đất. Trong mỗi lần nhảy, tôi chỉ có thể nhảy từ nấc hiện tại (hoặc trên mặt đất) sang nấc tiếp theo (không thể bỏ qua các nấc). Ban đầu tôi
 * đặt hệ số sức mạnh của mình là k. Ý nghĩa của k là trong bất kỳ bước nhảy nào, tôi không thể nhảy quá k feet. Và nếu tôi nhảy đúng k feet
 * trong một bước nhảy, thì k sẽ giảm đi 1. Nhưng nếu tôi nhảy ít hơn k feet, thì k vẫn giữ nguyên.
 * 
 * Ví dụ, để chiều cao của các bậc thang tính từ mặt đất lần lượt là 1, 6, 7, 11, 13 và k là 5. Bây giờ các bước là:
 * 
 * 1. Nhảy 1 foot từ mặt đất lên bậc 1 (mặt đất lên 1). Vì tôi đã nhảy ít hơn k feet nên k vẫn là 5.
 * 2. Nhảy 5 feet cho nấc thang tiếp theo (1 đến 6). Vì vậy, k trở thành 4.
 * 3. Nhảy 1 feet cho nấc thang thứ 3 (6 đến 7). Vì vậy, k còn lại 4.
 * 4. Nhảy 4 feet cho bậc thang thứ 4 (7 đến 11). k này trở thành 3.
 * 5. Nhảy 2 feet cho bậc thang thứ 5 (11 đến 13). Và như vậy, k vẫn là 3.
 * 
 * Bây giờ bạn được cung cấp độ cao của các bậc thang từ mặt đất, bạn phải tìm hệ số sức mạnh tối thiểu k sao cho tôi có thể đạt đến bậc
 * thang trên cùng.
 *
 * Input:
 * Đầu vào bắt đầu bằng một số nguyên T (≤500), biểu thị số lượng bộ test.
 * 
 * Mỗi trường hợp bắt đầu bằng một dòng chứa số nguyên n biểu thị số bậc trong thang. Dòng tiếp theo chứa n các số nguyên được phân
 * tách bằng dấu cách, r​1, r2,..., r​n (1≤r1<r​2<...<r​n≤10^​7) biểu thị chiều cao của các bậc từ đất. Đối với tất cả các trường hợp,
 * 1≤n≤10, ngoại trừ 5 trường hợp 10<n≤10^5.
 *
 * Output:
 * Đối với mỗi bộ test, hãy in số trường hợp và giá trị nhỏ nhất của k như mô tả ở trên.
 *
 * Example 1:
 * Input:
 * 2
 * 5
 * 1 6 7 11 13
 * 4
 * 3 9 10 14
 *
 * Output:
 * Case 1: 5
 * Case 2: 6
 **/

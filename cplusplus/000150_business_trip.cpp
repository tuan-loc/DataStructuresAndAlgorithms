// Title: Business Trip
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Thật vui sướng! Cha mẹ của Petya đã đi công tác cả năm và cậu nhóc ham chơi bị bỏ lại một mình. Petya hoàn toàn hạnh phúc. Anh ta
 * nhảy lên giường và ném gối cả ngày, cho đến khi ...
 * 
 * Hôm nay Petya mở tủ và tìm thấy một tờ giấy bạc đáng sợ. Cha mẹ anh đã để lại cho anh một nhiệm vụ: anh phải tưới hoa yêu thích của họ
 * cả năm, mỗi ngày, vào buổi sáng, buổi chiều và buổi tối. "Chờ giây lát!" - Petya nghĩ. Anh ta biết một sự thật rằng nếu anh ta hoàn thành
 * nhiệm vụ của cha mẹ vào tháng thứ i (1≤i≤12) trong năm, thì bông hoa sẽ lớn thêm a​i cm, và nếu anh ta không tưới hoa vào tháng
 * thứ i, hoa sẽ không phát triển trong tháng này. Petya cũng biết rằng hãy cố gắng hết sức có thể, bố mẹ anh sẽ không tin rằng anh đã tưới
 * hoa nếu nó chỉ phát triển nhỏ hơn k cm.
 * 
 * Giúp Petya chọn số tháng tối thiểu mà anh ta sẽ tưới hoa, cho rằng hoa phải phát triển không ít hơn k cm.
 *
 * Input:
 * Dòng đầu tiên chứa đúng một số nguyên k (0≤k≤100).
 * Dòng tiếp theo chứa mười hai số nguyên được phân tách bằng dấu cách: số thứ i(1≤i≤12) trên dòng đại diện cho a​i
 * (0≤a​i≤100).
 *
 * Output:
 * In ra số nguyên duy nhất - số tháng tối thiểu mà Petya phải tưới hoa để hoa phát triển không ít hơn k cm. Nếu bông hoa không thể dài
 * thêm k cm trong một năm, hãy in −1.
 *
 * Example 1:
 * Input:
 * 5
 * 1 1 1 1 2 2 3 2 2 1 1 1
 *
 * Output:
 * 2
 * 
 * Example 2:
 * Input:
 * 0
 * 0 0 0 0 0 0 0 1 1 2 3 0
 *
 * Output:
 * 0
 * 
 * Example 3:
 * Input:
 * 11
 * 1 1 4 1 1 5 1 1 4 1 1 1
 *
 * Output:
 * 3
 * 
 * Explanation:
 * Hãy xem ví dụ đầu tiên. Ở đó, nó đủ để tưới hoa trong suốt tháng thứ bảy và thứ chín. Sau đó, bông hoa lớn thêm chính xác năm cm.
 * 
 * Trong ví dụ thứ hai, cha mẹ của Petya sẽ tin anh ta ngay cả khi bông hoa không mọc lên (k=0). Vì vậy, Petya hoàn toàn có thể
 * không tưới hoa.
 **/

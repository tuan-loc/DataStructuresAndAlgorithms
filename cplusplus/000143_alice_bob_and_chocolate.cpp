// Title: Alice Bob and Chocolate
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Alice và Bob thích chơi các trò chơi. Và bây giờ họ đã sẵn sàng để bắt đầu một trò chơi mới. Họ đã xếp n thanh sô cô la thành một hàng.
 * Alice bắt đầu ăn từng thanh sô cô la lần lượt từ trái sang phải, và Bob - từ phải sang trái.
 * 
 * Đối với mỗi thanh sôcôla, thời gian cần thiết để người chơi ăn hết nó được biết trước (Alice và Bob ăn chúng với tốc độ bằng nhau). Khi
 * người chơi ăn xong một thanh sô cô la, họ ngay lập tức bắt đầu với một thanh khác. Không được ăn hai thanh sô cô la cùng một lúc, bỏ dở
 * thanh sô cô la hay tạm dừng.
 * 
 * Nếu cả hai người chơi phải ăn cùng một thanh sô cô la, Bob sẽ nhường nó cho Alice như một quý ông thực thụ.
 * 
 * Mỗi người chơi sẽ ăn bao nhiêu thanh sô cô la?
 *
 * Input:
 * Dòng đầu tiên chứa một số nguyên n (1≤n≤10^​5) - số lượng thanh sô cô la trên bàn.
 * 
 * Dòng thứ hai chứa một dãy t​1, t​2,...,t​n (1≤t​i≤1000), trong đó ti là thời gian (tính bằng giây) cần thiết để ăn thanh thứ i (theo
 * thứ tự từ trái sang phải).
 *
 * Output:
 * In ra hai số a và b, trong đó a là số thanh Alice ăn và b là số thanh mà Bob ăn.
 *
 * Example 1:
 * Input:
 * 5
 * 2 9 8 2 7
 *
 * Output:
 * 2 3
 **/

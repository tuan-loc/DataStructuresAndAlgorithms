// Title: Megacity
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Chính quyền của Vùng Tomsk tin tưởng chắc chắn rằng đã đến lúc trở thành một siêu đô thị (tức là có dân số một triệu người). Thay vì cải
 * thiện tình hình người dân, họ quyết định đạt được mục tiêu bằng cách mở rộng ranh giới của thành phố.
 * 
 * Thành phố Tomsk có thể được biểu diễn dưới dạng điểm trên mặt phẳng với tọa độ (0;0). Thành phố được bao quanh bởi n địa điểm
 * khác, địa điểm thứ i có tọa độ (x​i,y​i) với dân số là k​i người. Bạn có thể mở rộng ranh giới thành phố thành một vòng tròn bán kính r.
 * Trong trường hợp này, tất cả các vị trí bên trong vòng tròn và trên biên giới của nó đều được đưa vào thành phố.
 * 
 * Mục tiêu của bạn là viết một chương trình sẽ xác định bán kính tối thiểu r, bán kính cần thiết để mở rộng ranh giới của Tomsk, để nó trở
 * thành một siêu đô thị.
 *
 * Input:
 * Dòng đầu tiên của dữ liệu đầu vào chứa hai số nguyên n và s (1≤n≤10^​3;1≤s<10^​6) - số vị trí xung quanh thành phố Tomsk và dân
 * số của thành phố. Sau đó n dòng tiếp theo. Dòng thứ i chứa ba số nguyên - giá trị tọa độ x​i, y​i của vị trí thứ i và k​i - số lượng người trong
 * đó (1≤k​i<10^​6). Mỗi tọa độ là một số nguyên và có giá trị tuyệt đối không vượt quá 10^​4.
 * 
 * Đảm bảo rằng không có hai vị trí nào ở cùng một điểm và không có vị trí nào ở điểm (0,0).
 *
 * Output:
 * In "-1" (không có dấu ngoặc kép), nếu Tomsk sẽ không thể trở thành một siêu đô thị. Nếu không, trong dòng đầu tiên in một số thực - bán
 * kính tối thiểu của hình tròn mà thành phố cần mở rộng để trở thành siêu đô thị.
 * 
 * Câu trả lời được coi là đúng nếu sai số tuyệt đối hoặc tương đối không vượt quá 10^​−6.
 *
 * Example 1:
 * Input:
 * 4 999998
 * 1 1 1
 * 2 2 1
 * 3 3 1
 * 2 -2 1
 *
 * Output:
 * 2.8284271
 * 
 * Example 2:
 * Input:
 * 4 999998
 * 1 1 2
 * 2 2 1
 * 3 3 1
 * 2 -2 1
 *
 * Output:
 * 1.4142136
 * 
 * Example 3:
 * Input:
 * 2 1
 * 1 1 999997
 * 2 2 1
 *
 * Output:
 * -1
 **/

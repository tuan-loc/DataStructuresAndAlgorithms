// Title: Wormholes
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Vào năm 2163, lỗ sâu vũ trụ đã được phát hiện. Lỗ sâu là một đường hầm con xuyên không gian và thời gian nối hai hệ sao. Lỗ sâu có một
 * số tính chất đặc biệt:
 * 
 * Lỗ sâu chỉ có một chiều.
 * 
 * Thời gian di chuyển qua lỗ sâu không đáng kể.
 * 
 * Một lỗ sâu có hai cổng, mỗi cổng nằm tại một hệ sao.
 * 
 * Một hệ sao có thể có nhiều hơn một cổng của lỗ sâu trong ranh giới của nó.
 * 
 * Vì một lý do nào đó không rõ, bắt đầu từ hệ mặt trời của chúng ta, nó luôn có thể kết thúc trong bất kỳ hệ sao nào theo một chuỗi
 * các lỗ sâu (có thể Trái đất là trung tâm của vũ trụ).
 * 
 * Giữa bất kỳ cặp hệ sao nào, có nhiều nhất một lỗ sâu ở một trong hai hướng.
 * 
 * Không có lỗ sâu nào có cả hai cổng nằm tại cùng một hệ sao.
 * 
 * Tất cả các lỗ sâu đều có sự chênh lệch thời gian không đổi giữa các cổng của chúng. Ví dụ, một lỗ sâu có thể khiến người đi qua nó đến
 * được 15 năm trong tương lai. Một hố sâu khác có thể khiến người đó quay lại 42 năm trong quá khứ.
 * 
 * Một nhà vật lý lỗi lạc, sống trên trái đất, muốn sử dụng lỗ sâu để nghiên cứu Vụ nổ Big Bang. Vì động cơ warp chưa được phát minh nên cô
 * không thể đi trực tiếp từ hệ sao này sang hệ sao khác. Tất nhiên, điều này có thể được thực hiện bằng cách sử dụng lỗ sâu.
 * 
 * Nhà khoa học muốn tiếp cận một chu trình của lỗ sâu ở đâu đó trong vũ trụ khiến cô ấy quay về quá khứ. Bằng cách du hành theo chu
 * trình này nhiều lần, nhà khoa học có thể quay ngược thời gian càng xa càng tốt để đến được thời điểm bắt đầu hình thành vũ trụ và tận
 * mắt chứng kiến Vụ nổ Big Bang. Viết chương trình để tìm xem có tồn tại một chu trình như vậy hay không.
 *
 * Input:
 * Dữ liệu nhập bắt đầu bằng một dòng chứa c - số lượng bộ test. Mỗi trường hợp bắt đầu bằng một dòng gồm hai số n và m lần lượt là số
 * lượng hệ sao (1≤n≤1000) và số lượng lỗ sâu (0≤m≤2000). Các hệ sao được đánh số từ 0 (hệ mặt trời của chúng ta) đến n−1.
 * Đối với mỗi lỗ sâu, một dòng chứa ba số nguyên x,y và t chỉ ra rằng đi từ hệ sao được đánh số x đến hệ sao được đánh số y mất t
 * (−1000≤t≤1000) thời gian.
 *
 * Output:
 * Kết quả bao gồm c dòng, một dòng cho mỗi trường hợp, chứa từ "possible" nếu thực sự có thể quay ngược thời gian vô thời hạn, hoặc "not
 * possible" nếu điều này là không thể với tập hợp các hệ sao và lỗ sâu đã cho.
 *
 * Example 1:
 * Input:
 * 2
 * 3 3
 * 0 1 1000
 * 1 2 15
 * 2 1 -42
 * 4 4
 * 0 1 10
 * 1 2 20
 * 2 3 30
 * 3 0 -60
 *
 * Output:
 * possible
 * not possible
 **/

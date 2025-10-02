// Title: ALL IZZ WELL
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Anh ESP thường nói "ALL IZZ WELL" bất cứ khi nào anh ấy gặp rắc rối. Vì vậy, bạn bè của anh ấy và những người xung quanh anh ấy đã
 * từng cười nhạo anh ấy. Nhưng anh ESP rất tin tưởng vào niềm tin của mình. Anh ấy tin rằng thuật ngữ “ALL IZZ WELL” sẽ khiến mọi thứ trở
 * nên tốt đẹp. Bây giờ nhiệm vụ của bạn là bỏ qua câu chuyện ở trên và tìm xem liệu có một đường đi nào trong ma trận đã cho tạo nên câu
 * "ALL IZZ WELL"
 * 
 * Có đường đi từ một ô bất kỳ đến tất cả các ô lân cận của nó. Ô lân cận có thể chung cạnh hoặc chung góc.
 *
 * Input:
 * Dòng đầu tiên bao gồm một số nguyên t đại diện cho số lượng trường hợp thử nghiệm.
 * 
 * Dòng đầu tiên của mỗi trường hợp bao gồm hai số nguyên R và C đại diện cho số hàng và số cột trong ma trận. Sau đó là mô tả của ma
 * trận.
 * 
 * Có một dòng mới sau mỗi trường hợp thử nghiệm trong đầu vào.
 * t≤1000
 * R≤100
 * C≤100
 *
 * Output:
 * Đối với mỗi trường hợp kiểm tra, hãy in “YES” nếu có một đường đi tạo thành câu “ALLIZZWELL”. Ngược lại in “NO”.
 *
 * Example 1:
 * Input:
 * 5
 * 3 6
 * AWE.QX
 * LLL.EO
 * IZZWLL
 * 
 * 1 10
 * ALLIZZWELL
 * 
 * 2 9
 * A.L.Z.E..
 * .L.I.W.L.
 * 
 * 3 3
 * AEL
 * LWZ
 * LIZ
 * 
 * 1 10
 * LLEWZZILLA
 *
 * Output:
 * YES
 * YES
 * NO
 * NO
 * YES
 **/

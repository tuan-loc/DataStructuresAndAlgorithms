// Title: Ice Skating
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Bajtek đang học trượt băng. Anh ấy là người mới bắt đầu, vì vậy phương thức di chuyển duy nhất của anh ấy là trượt từ một đống tuyết về
 * phía bắc, đông, nam hoặc tây và trượt cho đến khi anh gặp một đống tuyết khác. Anh ấy đã nhận thấy rằng theo cách này, không thể từ
 * một vài đống tuyết sang một vài đống tuyết khác bằng bất kỳ chuỗi di chuyển nào. Bây giờ anh ta muốn tạo thêm một số đống tuyết để
 * anh ta có thể trượt được từ bất kỳ đống tuyết nào đến bất kỳ đống tuyết nào khác. Anh ấy yêu cầu bạn tìm số lượng đống tuyết ít nhất cần
 * được tạo thêm.
 * 
 * Chúng tôi giả định rằng Bajtek chỉ có thể tạo thêm đống tuyết ở các tọa độ nguyên.
 *
 * Input:
 * Dòng đầu tiên chứa một số nguyên n (1≤n≤100) – số lượng đống tuyết hiện có.
 * 
 * Mỗi dòng trong n dòng tiếp theo chứa hai số nguyên x​i, y​i (1≤x​i,y​i≤1000) – tọa độ của đống tuyết thứ i.
 * 
 * Lưu ý rằng hướng bắc hướng với hướng của trục Oy, vì vậy hướng đông sẽ hướng với hướng của trục Ox. Tất cả các đống tuyết đều có tọa
 * độ phân biệt.
 *
 * Output:
 * In ra số lượng đống tuyết tối thiểu cần được tạo thêm để Bajtek có thể trượt đến bất kỳ đống tuyết nào từ bất kỳ đống tuyết nào khác.
 *
 * Example 1:
 * Input:
 * 2
 * 2 1
 * 1 2
 *
 * Output:
 * 1
 * 
 * Example 2:
 * Input:
 * 2
 * 2 1
 * 4 1
 *
 * Output:
 * 0
 * 
 * Explanation:
 * Ví dụ 1: Có 2 đống tuyết ở tọa độ (2, 1) và (1, 2). Không thể trượt trực tiếp từ đống tuyết này tới đống tuyết kia bằng 4 hướng Đông, Tây,
 * Nam, Bắc. Do đó cần tạo thêm một đống tuyết phụ, chẳng hạn như (1, 1).
 * 
 * Ví dụ 2: Có 2 đống tuyết ở tọa độ (2, 1) và (4, 1). Bajtek có thể trượt trực tiếp từ đống tuyết (2, 1) theo hướng Đông tới (4, 1) hoặc ngược lại.
 * Do đó không cần tạo thêm một đống tuyết phụ nào.
 **/

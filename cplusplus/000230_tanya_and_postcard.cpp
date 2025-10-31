// Title: Tanya and Postcard
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Tanya quyết định tặng bố một tấm bưu thiếp vào ngày sinh nhật của ông. Cô bé tạo một tin nhắn - chuỗi s có độ dài n, bao gồm các chữ
 * cái tiếng Anh viết hoa và viết thường. Tanya chưa biết viết, vì vậy cô bé đã tìm một tờ báo và quyết định cắt các chữ cái ra và dán chúng vào
 * bưu thiếp để đạt được chuỗi s. Tờ báo có chứa chuỗi t, gồm các chữ cái tiếng Anh viết hoa và viết thường. Ta biết rằng độ dài của xâu t lớn
 * hơn hoặc bằng độ dài của xâu s.
 * 
 * Tờ báo có thể có quá ít các chữ cái cần thiết để tạo thành văn bản và quá nhiều chữ cái khác. Đó là lý do tại sao Tanya muốn cắt một số
 * chữ cái ra khỏi tờ báo và tạo ra một tin nhắn có độ dài chính xác là n, sao cho nó càng giống chuỗi s càng tốt. Nếu chữ cái ở vị trí nào đó có
 * giá trị giống và giống luôn định dạng (trong chuỗi s và trong chuỗi mà Tanya sẽ tạo), thì Tanya vui mừng hét lên "YAY!", Và nếu chữ cái ở vị
 * trí đã cho chỉ có giá trị đúng nhưng nó sai định dạng, thì cô bé sẽ nói "WHOOPS".
 * 
 * Tanya muốn tạo ra tin nhắn sao cho cô có thể hét lên "YAY!" càng nhiều càng tốt. Nếu có nhiều cách để làm điều này, thì ưu tiên thứ hai
 * của cô ấy là tối đa hóa số lần cô ấy nói "WHOOPS". Nhiệm vụ của bạn là giúp Tanya tạo ra tin nhắn đó.
 *
 * Input:
 * Dòng đầu tiên chứa xâu s (1≤∣s∣≤2.10^​5), bao gồm các chữ cái tiếng Anh viết hoa và viết thường - nội dung tin nhắn của Tanya.
 * 
 * Dòng thứ hai chứa xâu t (∣s∣≤∣t∣≤2.10​^5), gồm các chữ cái tiếng Anh viết hoa và viết thường - văn bản viết trên báo.
 * 
 * ∣a∣ nghĩa là độ dài của chuỗi a.
 *
 * Output:
 * Xuất ra hai số cách nhau bới khoảng trắng, lần lượt là số lần Tanya có thể hét lên “YAY!” và số lần Tanya nói “WHOOPS”.
 *
 * Example 1:
 * Input:
 * AbC
 * DCbA
 *
 * Output:
 * 3 0
 * 
 * Example 2:
 * Input:
 * ABC
 * abc
 *
 * Output:
 * 0 3
 * 
 * Example 3:
 * Input:
 * abacaba
 * AbaCaBA
 *
 * Output:
 * 3 4
 **/

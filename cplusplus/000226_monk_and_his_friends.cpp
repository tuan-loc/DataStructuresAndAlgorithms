// Title: Monk and his Friends
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Monk đang đứng ở cửa lớp học của mình. Hiện có N học sinh trong lớp, học sinh thứ i có A​i cái kẹo.
 * 
 * Vẫn còn M sinh viên nữa sẽ đến. Vào mỗi khoảnh khắc, một học sinh bước vào lớp và mong muốn được ngồi cùng với một học sinh có
 * đúng số kẹo bằng nhau. Đối với mỗi học sinh, Monk hét lên "YES" nếu có một học sinh như vậy được tìm thấy, "NO" nếu không.
 * 
 * Note: A​i có thể là một số rất lớn
 *
 * Input:
 * Dòng đầu tiên chứa một số nguyên T. Các testcase T theo sau.
 * 
 * Dòng đầu tiên của mỗi trường hợp chứa hai số nguyên được phân tách bằng dấu cách N và M.
 * 
 * Dòng thứ hai chứa N+M các số nguyên được phân tách bằng dấu cách, là những viên kẹo của học sinh.
 *
 * Output:
 * Đối với mỗi trường hợp, xuất ra M dòng, câu trả lời của Monk cho các học sinh M.
 * 
 * In "YES" (không có dấu ngoặc kép) hoặc "NO" (không có dấu ngoặc kép) liên quan đến câu trả lời của Monk.
 *
 * Example 1:
 * Input:
 * 1
 * 2 3
 * 3 2 9 11 2
 *
 * Output:
 * NO
 * NO
 * YES
 * 
 * Explanation:
 * Ví dụ trên gồm một bộ test. Trong bộ test đó, có hai sinh viên đã có sẵn trong lớp có số kẹo lần lượt là 3, 2.
 * Sinh viên đầu tiên đến có số kẹo là 9, trong lớp chưa có sinh viên có cùng số kẹo ⇒ "NO".
 * Sinh viên thứ hai đến có số kẹo là 11, trong lớp chưa có sinh viên có cùng số kẹo ⇒ "NO".
 * Sinh viên thứ ba đến có số kẹo là 2, trong lớp có sinh viên có cùng số kẹo ⇒ "YES".
 **/

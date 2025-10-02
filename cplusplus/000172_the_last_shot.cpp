// Title: THE LAST SHOT
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Tony Stark đang thực hiện nhiệm vụ giải cứu thế giới khỏi đội quân của Loki nên anh ấy đã rải N quả bom trong khu vực của địch. Anh ấy
 * rải bom sao cho một quả bom có thể nằm trong phạm vi của một quả bom khác, tức là quả bom B​1 nằm trong phạm vi của quả bom B​2,
 * khi quả bom B​2 phát nổ sẽ kích hoạt quả bom B​1 cũng nổ nhưng ngược lại có thể không đúng vì bom có phạm vi khác nhau. Vì anh ấy
 * đang cạn kiệt năng lượng nên anh ấy chỉ còn một phát để kích hoạt quả bom. Bây giờ anh ấy nhờ Jarvis tìm ra quả bom thích hợp nhất mà
 * anh ấy có thể kích hoạt để tạo ra tác động tối đa.
 * 
 * Tác động về cơ bản chính là số lượng bom phát nổ.
 * 
 * Bạn có thể giúp Jarvis làm như vậy không?
 *
 * Input:
 * Dòng đầu tiên chứa hai số nguyên N và M biểu thị số lượng bom và số lượng mối quan hệ giữa các loại bom.
 * 1≤n,m≤10000
 * M dòng tiếp theo chứa hai số nguyên A và B biểu thị quả bom B nằm trong phạm vi của quả bom A.
 * 1≤A,B≤N
 *
 * Output:
 * Một dòng đơn chứa TÁC ĐỘNG TỐI ĐA.
 *
 * Example 1:
 * Input:
 * 4 3
 * 1 2
 * 2 4
 * 1 3
 *
 * Output:
 * 4
 * 
 * Example 2:
 * Input:
 * 4 3
 * 1 2
 * 2 1
 * 2 3
 *
 * Output:
 * 3
 **/

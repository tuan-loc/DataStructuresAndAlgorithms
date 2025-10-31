// Title: Forests
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Nếu một cái cây rơi trong rừng và không có ai ở đó để nghe, nó có phát ra âm thanh không?
 * 
 * Câu hỏi hóc búa kinh điển này được đặt ra bởi George Berkeley (1685-1753) - một vị Giám mục và nhà triết học có ảnh hưởng người
 * Ireland, thành tựu triết học chính của ông là việc đưa ra một học thuyết được gọi là chủ nghĩa duy tâm chủ quan. Ông đã viết một số tác
 * phẩm, trong đó được đọc nhiều nhất là Luận về các nguyên lý của tri thức con người (1710) và Ba cuộc hội thoại giữa Hylas và Philonous
 * (1713) (trong đó Philonous, “người tình của tâm trí”, đại diện cho chính Berkeley) .
 * 
 * Một khu rừng có T cây được đánh số từ 1 đến T và P người được đánh số từ 1 đến P.
 *
 * Input:
 * Đầu vào bắt đầu bằng một số nguyên dương duy nhất trên một dòng cho biết số bộ test theo sau, mỗi bộ test được mô tả bên dưới. Dòng
 * này được theo sau bởi một dòng trống và cũng có một dòng trống giữa hai bộ test liên tiếp.
 * 
 * Mỗi bộ test bao gồm một dòng chứa P và T, các dòng tiếp theo chứa một cặp số nguyên i và j cho biết rằng người i đã nghe thấy cây j
 * đổ. Theo Berkeley, mọi người có thể có những ý kiến khác nhau về việc cây nào đã tạo ra âm thanh.
 *
 * Output:
 * Đối với mỗi bộ test, kết quả đầu ra phải tuân theo mô tả bên dưới. Kết quả đầu ra của hai trường hợp liên tiếp sẽ được phân tách bằng một
 * dòng trống.
 * 
 * Có bao nhiêu ý kiến khác nhau được thể hiện trong đầu vào? Hai người có cùng ý kiến chỉ khi họ nghe thấy chính xác cùng một tập hợp
 * cây. Bạn có thể cho rằng P<100 và T<100.
 *
 * Example 1:
 * Input:
 * 1
 * 
 * 3 4
 * 1 2
 * 3 3
 * 1 3
 * 2 2
 * 3 2
 * 2 4
 *
 * Output:
 * 2
 **/

// Title: Isenbaev's Number
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Vladislav Isenbaev là nhà vô địch hai lần của Ural, phó vô địch TopCoder Open 2009 và vô địch tuyệt đối ACM ICPC 2009. Trong lúc bạn đọc
 * đề bài toán này, Vladislav đã giải được một vấn đề khác. Có thể, thậm chí là hai…
 * 
 * Kể từ khi Vladislav Isenbaev tốt nghiệp Trung tâm Khoa học và Giáo dục Chuyên ngành tại Đại học Bang Ural, nhiều thí sinh trước đây và
 * hiện tại tại USU đã biết đến anh ấy trong một vài năm. Một số người trong số họ tự hào nói rằng họ đã chơi cùng đội với anh ấy hoặc chơi
 * cùng đội với một trong những đồng đội của anh ấy…
 * 
 * Chúng ta hãy xác định số của Isenbaev như sau. Với chính bản thân Vladislav, anh ấy sẽ mang số 0. Đối với những người đã chơi cùng đội
 * với anh ấy, họ sẽ mang số 1. Đối với những người không phải là đồng đội của anh ấy nhưng đã chơi trong cùng một đội với một hoặc nhiều
 * đồng đội của anh ấy, họ sẽ mang số là 2, và như thế. Nhiệm vụ của bạn là tự động hóa quá trình tính toán các con số của Isenbaev để mỗi
 * thí sinh tại USU có thể biết được vị trí của họ với nhà vô địch ACM ICPC.
 *
 * Input:
 * Dòng đầu tiên chứa số đội n (1≤n≤100). Trong mỗi dòng n sau đây, bạn được cung cấp tên của ba thành viên của nhóm tương ứng.
 * Các tên được phân tách bằng dấu cách. Mỗi tên là một chuỗi không rỗng chứa các ký tự tiếng Anh và có độ dài tối đa là 20. Chữ cái đầu
 * tiên của tên được viết hoa và các chữ còn lại sẽ được viết thường.
 *
 * Output:
 * Đối với mỗi thí sinh được đề cập trong dữ liệu đầu vào, xuất ra một dòng với tên của họ và số của Isenbaev. Nếu không thể xác định được
 * số của một thí sinh nào đó, hãy xuất “undefined”. Các thí sinh phải được sắp xếp theo thứ tự từ vựng.
 *
 * Example 1:
 * Input:
 * 7
 * Isenbaev Oparin Toropov
 * Ayzenshteyn Oparin Samsonov
 * Ayzenshteyn Chevdar Samsonov
 * Fominykh Isenbaev Oparin
 * Dublennykh Fominykh Ivankov
 * Burmistrov Dublennykh Kurpilyanskiy
 * Cormen Leiserson Rivest
 *
 * Output:
 * Ayzenshteyn 2
 * Burmistrov 3
 * Chevdar 3
 * Cormen undefined
 * Dublennykh 2
 * Fominykh 1
 * Isenbaev 0
 * Ivankov 2
 * Kurpilyanskiy 3
 * Leiserson undefined
 * Oparin 1
 * Rivest undefined
 * Samsonov 2
 * Toropov 1
 **/

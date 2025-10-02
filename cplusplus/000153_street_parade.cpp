// Title: Street Parade
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Chắc chắn rằng, những chiếc xe trang trí tình yêu sẽ lại lăn bánh trên đường phố vào mùa hè này. Mỗi năm, ban tổ chức quyết định một
 * thứ tự cố định cho những chiếc xe tải được trang trí. Kinh nghiệm cho họ biết nên giữ thông thoáng cho một con đường phụ để có thể đưa
 * xe tải vào đúng thứ tự.
 * 
 * Con đường phụ nhỏ hẹp đến mức không thể có hai chiếc xe chạy qua nhau. Vì vậy, xe đi vào đường phụ cuối cùng nhất thiết phải rời khỏi
 * đường phụ trước. Do xe tải và những người cuồng nhiệt ngoài đường đang di chuyển gần nhau nên xe tải không thể đi lùi và vào lại đường
 * phụ hoặc đường chính.
 * 
 * Bạn được đưa ra thứ tự mà những chiếc xe trang trí đến. Viết một chương trình để xem các xe có thể được đưa vào thứ tự mà ban tổ chức
 * mong muốn hay không.
 *
 * Input:
 * Có nhiều trường hợp thử nghiệm. Dòng đầu tiên của mỗi trường hợp chứa một số n, số xe trang trí. Dòng thứ hai chứa các số từ 1 đến n
 * theo thứ tự tùy ý. Tất cả các số được phân tách bằng dấu cách. Những con số này cho biết thứ tự mà các xe tải đến trên đường chính. Có
 * tối đa 1000 xe tải trang trí tham gia vào cuộc diễu hành đường phố. Đầu vào kết thúc bằng số 0.
 *
 * Output:
 * Đối với mỗi trường hợp thử nghiệm, chương trình của bạn phải xuất ra một dòng chứa một từ duy nhất "yes" những chiếc xe có thể được
 * sắp xếp lại với sự trợ giúp của đường phụ và một từ duy nhất "no" trong trường hợp ngược lại.
 *
 * Example 1:
 * Input:
 * 5
 * 5 1 2 4 3
 * 0
 *
 * Output:
 * yes
 * 
 * Explanation:
 * Ví dụ mẫu phản ánh tình huống sau:
 * (/images/000153_street_parade_01.gif)
 * 
 * Năm xe tải có thể được sắp xếp lại theo cách sau:
 * (/images/000153_street_parade_02.gif)
 * (/images/000153_street_parade_03.gif)
 * (/images/000153_street_parade_04.gif)
 * (/images/000153_street_parade_05.gif)
 * (/images/000153_street_parade_06.gif)
 **/

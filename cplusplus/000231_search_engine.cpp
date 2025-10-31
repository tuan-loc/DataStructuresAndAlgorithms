// Title: Search Engine
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Hãy để chúng tôi xem công cụ tìm kiếm hoạt động như thế nào. Hãy xem xét tính năng tự động hoàn thành đơn giản sau đây. Khi bạn
 * nhập một số ký tự vào thanh văn bản, công cụ sẽ tự động đưa ra các sự lựa chọn phù hợp nhất trong cơ sở dữ liệu của nó. Công việc của
 * bạn thật đơn giản. Đưa ra một văn bản tìm kiếm không đầy đủ, hãy xuất ra kết quả tìm kiếm tốt nhất.
 * 
 * Mỗi mục nhập trong cơ sở dữ liệu của công cụ có một hệ số ưu tiên được đính kèm với nó. Chúng tôi coi một kết quả / gợi ý tìm kiếm là tốt
 * nhất nếu nó có hệ số ưu tiên lớn nhất và hoàn thành truy vấn tìm kiếm không đầy đủ đã cho. Đối với mỗi truy vấn trong đầu vào, hãy in hệ
 * số ưu tiên lớn nhất của chuỗi trong cơ sở dữ liệu để hoàn thành chuỗi tìm kiếm không đầy đủ đã cho. Trong trường hợp không tồn tại
 * chuỗi như vậy, hãy in −1.
 *
 * Input:
 * Dòng đầu tiên chứa hai số nguyên n và q, đại diện cho số lượng mục nhập cơ sở dữ liệu và số lượng truy vấn tìm kiếm cần được hoàn
 * thành. Các dòng n tiếp theo chứa một chuỗi s và một số nguyên weight, là mục nhập cơ sở dữ liệu và hệ số ưu tiên tương ứng của nó.
 * Các dòng q tiếp theo, mỗi dòng có một chuỗi t cần được hoàn thành.
 *
 * Output:
 * Xuất ra q dòng, mỗi dòng chứa hệ số tối đa có thể có trong các kết quả phù hợp của mỗi truy vấn. Ngược lại, xuất −1 trong trường hợp
 * không thu được kết quả hợp lệ.
 * 
 * CONSTRAINTS
 * 1≤n,weight,len(s),len(t)≤10^​6
 * 1≤q≤10^​5
 * Tổng chiều dài của tất cả các chuỗi trong các mục nhập cơ sở dữ liệu ≤ 10^6
 * Tổng độ dài của tất cả các chuỗi truy vấn ≤ 10^​6
 *
 * Example 1:
 * Input:
 * 2 1
 * hackerearth 10
 * hackerrank 9
 * hacker
 *
 * Output:
 * 10
 **/

// Title: Contacts
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Chúng tôi sẽ tạo ứng dụng danh bạ của riêng mình! Ứng dụng phải thực hiện hai thao tác sau đây:
 * 
 * 1. add name, trong đó name là một chuỗi biểu thị tên liên hệ. Việc này phải lưu trữ name dưới dạng một liên hệ mới trong ứng dụng.
 * 
 * 2. find partial , trong đó partial là một chuỗi biểu thị một phần tên để tìm kiếm ứng dụng. Nó phải đếm số lượng địa chỉ liên hệ bắt
 * đầu bằng partial và in số lượng trên một dòng mới.
 * 
 * Cho tuần tự n các phép toán add và find, hãy thực hiện từng thao tác theo thứ tự.
 *
 * Input:
 * Dòng đầu tiên chứa một số nguyên duy nhất n, biểu thị số thao tác cần thực hiện.
 * 
 * Mỗi dòng i trong số n dòng tiếp theo chứa một phép toán ở một trong hai dạng được định nghĩa ở trên.
 * 
 * Constraints:
 * 
 * 1≤n≤10^​5
 * 1≤∣name∣≤21
 * 1≤∣partial∣≤21
 * Nó được đảm bảo rằng name và partial chỉ chứa các chữ cái tiếng Anh viết thường.
 * Đầu vào không có bất kỳ name trùng lặp nào cho thao tác add.
 *
 * Output:
 * Đối với mỗi thao tác find, hãy in số lượng tên liên hệ bắt đầu bằng partial trên một dòng mới.
 *
 * Example 1:
 * Input:
 * 4
 * add hack
 * add hackerrank
 * find hac
 * find hak
 *
 * Output:
 * 2
 * 0
 **/

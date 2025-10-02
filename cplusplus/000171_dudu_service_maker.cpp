// Title: Dudu Service Maker
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Dudu cần một tài liệu để hoàn thành một nhiệm vụ trong công việc của mình. Sau khi tìm kiếm, anh ấy phát hiện tài liệu này cần tài liệu
 * khác, tài liệu khác đó cũng cần tài liệu khác, vân vân.
 * 
 * Dudu đã lập danh sách cuối cùng với những tài liệu mà anh ấy sẽ cần. Với danh sách trong tay, anh ấy nghi ngờ rằng danh sách có chứa
 * các vòng lặp. Ví dụ, nếu một tài liệu A phụ thuộc vào tài liệu B cũng phụ thuộc vào A, nó sẽ làm cho nhiệm vụ không thể hoàn thành. Trong
 * trường hợp này, vòng lặp chỉ chứa hai tài liệu, nhưng vòng lặp cũng có thể có ba tài liệu trở lên!
 * 
 * Với danh sách về sự phụ thuộc lẫn nhau của tài liệu, hãy giúp anh ấy tính toán xem anh ấy có thể lấy được tất cả các tài liệu hay không,
 * nghĩa là kiểm tra việc không có vòng lặp trong danh sách đã cho.
 *
 * Input:
 * Dòng đầu tiên chứa một số nguyên T (T≤100) cho biết số lượng trường hợp thử nghiệm.
 * 
 * Trên dòng đầu tiên trong mỗi trường hợp thử nghiệm sẽ có các số nguyên N (1≤N≤10^​4) và M (1≤M≤3.10^​4), cho biết số tài liệu
 * và số miêu tả về sự phụ thuộc của tài liệu. Trong mỗi M dòng tiếp theo, sẽ có hai số nguyên A (1≤A) và B (B≤N,A≠B), cho biết
 * rằng tài liệu A phụ thuộc vào tài liệu B. Có thể có sự phụ thuộc lặp lại!
 *
 * Output:
 * Đối với mỗi trường hợp, hãy in YES nếu có ít nhất một vòng lặp và NO nếu không.
 *
 * Example 1:
 * Input:
 * 3
 * 2 1
 * 1 2
 * 2 2
 * 1 2
 * 2 1
 * 4 4
 * 2 3
 * 3 4
 * 4 2
 * 1 3
 *
 * Output:
 * NO
 * YES
 * YES
 **/

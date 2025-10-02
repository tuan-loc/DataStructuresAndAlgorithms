// Title: Qheap 1
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Câu hỏi này được tạo để giúp bạn hiểu rõ hơn về cách hoạt động heap cơ bản.
 * 
 * Có 3 loại truy vấn:
 * "1 v" Thêm một phần tử vào heap.
 * "2 v" Xóa phần tử khỏi heap.
 * "3" Xuất phần tử có giá trị nhỏ nhất trong heap.
 * 
 * LƯU Ý: Bài toán được đảm bảo rằng phần tử bị xóa sẽ có trong heap. Ngoài ra, tại bất kỳ thời điểm nào, chỉ có các phần tử riêng biệt ở
 * trong heap.
 *
 * Input:
 * Dòng đầu tiên chứa số lượng truy vấn, Q.
 * 
 * Mỗi dòng trong số Q dòng, chứa một trong 3 loại truy vấn.
 * 
 * Giới hạn:
 * 1≤Q≤10^​5
 * −10^​9≤v≤10^​9
 *
 * Output:
 * Đối với mỗi truy vấn loại 3, hãy in giá trị nhỏ nhất trên một dòng.
 *
 * Example 1:
 * Input:
 * 5
 * 1 4
 * 1 9
 * 3
 * 2 4
 * 3
 *
 * Output:
 * 4
 * 9
 * 
 * Explanation:
 * Sau 2 truy vấn đầu tiên, heap chứa {4,9}. Xuất giá trị tối thiểu ở đầu ra là 4. Sau đó, truy vấn thứ 4 xóa 4 khỏi heap và truy vấn thứ 5 xuất
 * đầu ra là 9.
 **/

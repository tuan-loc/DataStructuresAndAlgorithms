// Title: Books
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Khi có thời gian rảnh, Valera đến thư viện để đọc sách. Hôm nay anh ấy có t phút rảnh để đọc. Vì vậy Valera lấy n cuốn sách trong thư viện,
 * và đối với mỗi cuốn sách, anh ấy ước tính thời gian mình cần để đọc nó. Các cuốn sách được đánh số bằng các số nguyên từ 1 đến n.
 * Valera cần a​i phút để đọc cuốn sách thứ i.
 * 
 * Valera quyết định chọn một cuốn sách bất kỳ với số thứ tự i và đọc từng cuốn một, bắt đầu từ cuốn sách này. Nói cách khác, đầu tiên anh
 * ấy sẽ đọc cuốn sách thứ i, sau đó đến cuốn sách thứ i+1, rồi đến cuốn sách thứ i+2, ... Anh ấy tiếp tục quá trình này cho đến khi hết
 * thời gian rảnh hoặc đọc xong cuốn sách thứ n. Valera đọc từng cuốn sách cho đến hết, nghĩa là anh ấy không bắt đầu đọc một cuốn sách
 * nếu anh ấy không có đủ thời gian rảnh để đọc nó.
 * 
 * In ra số cuốn sách tối đa mà Valera có thể đọc.
 *
 * Input:
 * Dòng đầu tiên chứa hai số nguyên n và t (1≤n≤10^​5; 1≤t≤10^​9) - số cuốn sách và số phút rảnh mà Valera có. Dòng thứ hai chứa
 * một dãy n số nguyên a​1, a​2,..., a​n (1≤a​i≤10^4), trong đó số ai thể hiện số phút anh ấy cần để đọc cuốn sách thứ i.
 *
 * Output:
 * In ra một số nguyên - số cuốn sách tối đa mà Valera có thể đọc.
 *
 * Example 1:
 * Input:
 * 4 5
 * 3 1 2 1
 *
 * Output:
 * 3
 * 
 * Example 2:
 * Input:
 * 3 3
 * 2 2 3
 *
 * Output:
 * 1
 **/

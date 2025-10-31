// Title: Two Sets
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Little X có n số nguyên phân biệt: p​1, p2,..., p​n. Anh ta muốn chia tất cả chúng thành hai tập hợp A và B. Hai điều kiện sau phải được thỏa
 * mãn:
 * 
 * Nếu số x thuộc tập A thì số a−x cũng phải thuộc tập A.
 * Nếu số x thuộc tập B thì số b−x cũng phải thuộc tập B.
 * 
 * Giúp Little X chia các số thành hai tập hợp hoặc xác định rằng điều đó là không thể.
 *
 * Input:
 * Dòng đầu tiên chứa ba số nguyên được phân tách bằng dấu cách n,a,b (1≤n≤10^​5;1≤a,b≤10^​9).
 * 
 * Dòng tiếp theo chứa n số nguyên riêng biệt được phân tách bằng dấu cách p​1, p​2,..., p​n (1≤p​i≤10^​9).
 *
 * Output:
 * Nếu có một cách để chia các số thành hai tập hợp thì in ra "YES" ở dòng đầu tiên. Sau đó in n số nguyên: b​1, b​2,..., b​n (b​i bằng 0 hoặc 1)
 * mô tả phép chia. Nếu b​i bằng 0 thì p​i thuộc tập hợp A, ngược lại thì nó thuộc tập hợp B.
 * 
 * Nếu không thể chia, in ra "NO" (không có dấu ngoặc kép).
 *
 * Example 1:
 * Input:
 * 4 5 9
 * 2 3 4 5
 *
 * Output:
 * YES
 * 0 0 1 1
 **/

// Title: Monk and Multiplication
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Gần đây, Monk đã tìm hiểu về hàng đợi ưu tiên và nhờ giáo viên của mình cho một bài toán thú vị. Vì vậy, giáo viên của anh ấy đã đưa ra
 * một bài toán đơn giản. Bây giờ anh ta có một mảng số nguyên A. Với mỗi chỉ số i, anh ta muốn tìm tích của số nguyên lớn nhất, lớn thứ
 * hai và số nguyên lớn thứ ba trong phạm vi [1,i].
 * 
 * Lưu ý: Hai số có thể có cùng giá trị nhưng chúng phải có chỉ số riêng biệt.
 *
 * Input:
 * Dòng đầu tiên chứa một số nguyên N, biểu thị số phần tử trong mảng A.
 * 
 * Dòng tiếp theo chứa N số nguyên được phân tách bằng dấu cách, mỗi số biểu thị số nguyên thứ i của mảng A.
 * 
 * Constraints:
 * 1≤N≤100000
 * 0≤A[i]≤1000000
 *
 * Output:
 * Xuất ra câu trả lời cho mỗi chỉ số trên mỗi dòng. Nếu không có số lớn thứ hai hoặc lớn thứ ba trong mảng A cho đến chỉ số đó, thì in "-1",
 * không có dấu ngoặc kép.
 *
 * Example 1:
 * Input:
 * 5
 * 1 2 3 4 5
 *
 * Output:
 * -1
 * -1
 * 6
 * 24
 * 60
 * 
 * Explanation:
 * Có 5 số nguyên 1,2,3,4 và 5.
 * Đối với hai chỉ số đầu tiên, vì số phần tử nhỏ hơn 3 nên đáp án là −1.
 * Đối với chỉ số thứ ba, 3 số đứng đầu là 3,2 và 1 có tích là 6.
 * Đối với chỉ số thứ tư, 3 số đứng đầu là 4,3 và 2 có tích là 24.
 * Đối với chỉ số thứ năm, 3 số đứng đầu là 5,4 và 3 có tích là 60.
 **/
